!!ARBfp1.0

# env0: {1-1/lu_bias, 0.5/lu_bias, ?, ?}
# env1: vol_res
# env2: vol_res.xyz.inv
# tex0: volume texture
# tex3: offset/weight value texture
# tc0 : volume texture coordinate in [0, 1]^3

# ******* attributes *********

# texture coordinate in [0, 1]^3
ATTRIB texc = fragment.texcoord[0]; 

# ******* parameters *********

# volume texture resolution parameters 
PARAM lu_bias     = program.env[0];
PARAM vol_res     = program.env[1];
PARAM vol_res_inv = program.env[2];
PARAM mvp_inv[]   = { state.matrix.mvp.invtrans };
PARAM const       = {0, 0.5, 1, 2};
PARAM delta_x     = {1, 0, 0, 0};

# ******** temporaries *********

# texcoord for offset-texture
TEMP pos_ofs;

# offsets and weight
TEMP x_ofs, y_ofs, z_ofs;

# sample texture coordinates
TEMP lun_tc, luf_tc;
TEMP run_tc, ruf_tc;
TEMP lln_tc, llf_tc;
TEMP rln_tc, rlf_tc;

# sample values
TEMP n_val, f_val;

# ******** program *********

# scale and shift ofs texcoord
MAD pos_ofs.xyz, vol_res, texc, -const.y;

# shrink to edge sampling (h/2 + (1-h)*x)
FRC pos_ofs.xyz, pos_ofs;
MAD pos_ofs.xyz, pos_ofs, lu_bias.r, lu_bias.g;

# read offsets and weight (indirection)
TEX x_ofs.xyz, pos_ofs.x, texture[3], 1D;
TEX y_ofs.xyz, pos_ofs.y, texture[3], 1D;
TEX z_ofs.xyz, pos_ofs.z, texture[3], 1D;

# setup texture coordinate
# left/right upper/lower near/far
MUL pos_ofs.xyz, delta_x.rgba, vol_res_inv;
MAD llf_tc.xyz, pos_ofs, -x_ofs.x, texc;
MAD rlf_tc.xyz, pos_ofs,  x_ofs.y, texc;
              
MUL pos_ofs.xyz, delta_x.brga, vol_res_inv;
MAD luf_tc.xyz, pos_ofs, -y_ofs.x, llf_tc;
MAD ruf_tc.xyz, pos_ofs, -y_ofs.x, rlf_tc;
MAD llf_tc.xyz, pos_ofs,  y_ofs.y, llf_tc;
MAD rlf_tc.xyz, pos_ofs,  y_ofs.y, rlf_tc;
              
MUL pos_ofs.xyz, delta_x.gbra, vol_res_inv;
MAD lun_tc.xyz, pos_ofs, -z_ofs.x, luf_tc;
MAD run_tc.xyz, pos_ofs, -z_ofs.x, ruf_tc;
MAD lln_tc.xyz, pos_ofs, -z_ofs.x, llf_tc;
MAD rln_tc.xyz, pos_ofs, -z_ofs.x, rlf_tc;
MAD luf_tc.xyz, pos_ofs,  z_ofs.y, luf_tc;
MAD ruf_tc.xyz, pos_ofs,  z_ofs.y, ruf_tc;
MAD llf_tc.xyz, pos_ofs,  z_ofs.y, llf_tc;
MAD rlf_tc.xyz, pos_ofs,  z_ofs.y, rlf_tc;

# read values (2 indirections)
TEX n_val.x, lun_tc, texture[0], 3D;
TEX n_val.y, run_tc, texture[0], 3D;
TEX n_val.z, lln_tc, texture[0], 3D;
TEX n_val.w, rln_tc, texture[0], 3D;
TEX f_val.x, luf_tc, texture[0], 3D;
TEX f_val.y, ruf_tc, texture[0], 3D;
TEX f_val.z, llf_tc, texture[0], 3D;
TEX f_val.w, rlf_tc, texture[0], 3D;

# output tricubic filtered density
LRP f_val, z_ofs.z, n_val, f_val;
LRP f_val.zw, y_ofs.z, f_val.yzxy, f_val;
#LRP result.color.a, x_ofs.z, f_val.z, f_val.w;

# output linear filtered density
TEX result.color.a, texc, texture[0], 3D;

END
