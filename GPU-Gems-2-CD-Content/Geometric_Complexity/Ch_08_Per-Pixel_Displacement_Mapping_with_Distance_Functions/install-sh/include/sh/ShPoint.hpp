// WARNING - DO NOT EDIT THIS FILE:
// This file was automatically generated from scripts/ShPoint.hpp.py.
// If you wish to change it, edit that file instead.
//
// ---
//
// Sh: A GPU metaprogramming language.
//
// Copyright (c) 2003 University of Waterloo Computer Graphics Laboratory
// Project administrator: Michael D. McCool
// Authors: Zheng Qin, Stefanus Du Toit, Kevin Moule, Tiberiu S. Popa,
//          Michael D. McCool
//
// This software is provided 'as-is', without any express or implied
// warranty. In no event will the authors be held liable for any damages
// arising from the use of this software.
//
// Permission is granted to anyone to use this software for any purpose,
// including commercial applications, and to alter it and redistribute it
// freely, subject to the following restrictions:
//
// 1. The origin of this software must not be misrepresented; you must
// not claim that you wrote the original software. If you use this
// software in a product, an acknowledgment in the product documentation
// would be appreciated but is not required.
//
// 2. Altered source versions must be plainly marked as such, and must
// not be misrepresented as being the original software.
//
// 3. This notice may not be removed or altered from any source
// distribution.
//////////////////////////////////////////////////////////////////////////////

#ifndef SH_SHPOINT_HPP
#define SH_SHPOINT_HPP

#include "ShAttrib.hpp"
namespace SH {

/** An n-point.
 * 
 *
 */
template<int N, ShBindingType Binding, typename T=float, bool Swizzled=false>
class ShPoint : public ShAttrib<N, Binding, T, Swizzled> {
public:
  typedef T storage_type;
  typedef typename ShHostType<T>::type host_type; 
  typedef typename ShMemType<T>::type mem_type; 
  static const ShBindingType binding_type = Binding;
  static const ShSemanticType semantic_type = SH_POINT;

  typedef ShPoint<N, SH_INPUT, T> InputType;
  typedef ShPoint<N, SH_OUTPUT, T> OutputType;
  typedef ShPoint<N, SH_INOUT, T> InOutType;
  typedef ShPoint<N, SH_TEMP, T> TempType;
  typedef ShPoint<N, SH_CONST, T> ConstType;
  ShPoint();
  
  template<typename T2>
  ShPoint(const ShGeneric<N, T2>& other);
  ShPoint(const ShPoint<N, Binding, T, Swizzled>& other);
  
  template<typename T2>
  ShPoint(const ShPoint<N, Binding, T2, Swizzled>& other);
  ShPoint(const ShVariableNodePtr& node, const ShSwizzle& swizzle, bool neg);
  explicit ShPoint(host_type data[N]);
  
  ~ShPoint();

  
  template<typename T2>
  ShPoint& operator=(const ShGeneric<N, T2>& other);
  
  template<typename T2>
  ShPoint& operator=(const ShPoint<N, Binding, T2, Swizzled>& other);
  ShPoint& operator=(const ShPoint<N, Binding, T, Swizzled>& other);

  ShPoint& operator=(const ShProgram& prg);

  
  template<typename T2>
  ShPoint& operator+=(const ShGeneric<N, T2>& right);
  
  template<typename T2>
  ShPoint& operator-=(const ShGeneric<N, T2>& right);
  
  template<typename T2>
  ShPoint& operator*=(const ShGeneric<N, T2>& right);
  
  template<typename T2>
  ShPoint& operator/=(const ShGeneric<N, T2>& right);
  
  template<typename T2>
  ShPoint& operator%=(const ShGeneric<N, T2>& right);
  ShPoint& operator*=(host_type);
  ShPoint& operator/=(host_type);
  ShPoint& operator%=(host_type);
  ShPoint& operator+=(host_type);
  ShPoint& operator-=(host_type);
  
  template<typename T2>
  ShPoint& operator+=(const ShGeneric<1, T2>&);
  
  template<typename T2>
  ShPoint& operator-=(const ShGeneric<1, T2>&);
  
  template<typename T2>
  ShPoint& operator*=(const ShGeneric<1, T2>&);
  
  template<typename T2>
  ShPoint& operator/=(const ShGeneric<1, T2>&);
  
  template<typename T2>
  ShPoint& operator%=(const ShGeneric<1, T2>&);
  ShPoint<1, Binding, T, true> operator()(int) const;
  ShPoint<2, Binding, T, true> operator()(int, int) const;
  ShPoint<3, Binding, T, true> operator()(int, int, int) const;
  ShPoint<4, Binding, T, true> operator()(int, int, int, int) const;
  ShPoint<1, Binding, T, true> operator[](int) const;
  
  template<int N2>
  ShPoint<N2, Binding, T, true> swiz(int indices[]) const;
  
  ShPoint operator-() const;
  private:
    typedef ShAttrib<N, Binding, T, Swizzled> ParentType;
};

template<ShBindingType Binding, typename T, bool Swizzled>
class ShPoint<1, Binding, T, Swizzled> : public ShAttrib<1, Binding, T, Swizzled> {
public:
  typedef T storage_type;
  typedef typename ShHostType<T>::type host_type; 
  typedef typename ShMemType<T>::type mem_type; 
  static const ShBindingType binding_type = Binding;
  static const ShSemanticType semantic_type = SH_POINT;

  typedef ShPoint<1, SH_INPUT, T> InputType;
  typedef ShPoint<1, SH_OUTPUT, T> OutputType;
  typedef ShPoint<1, SH_INOUT, T> InOutType;
  typedef ShPoint<1, SH_TEMP, T> TempType;
  typedef ShPoint<1, SH_CONST, T> ConstType;
  ShPoint();
  
  template<typename T2>
  ShPoint(const ShGeneric<1, T2>& other);
  ShPoint(const ShPoint<1, Binding, T, Swizzled>& other);
  
  template<typename T2>
  ShPoint(const ShPoint<1, Binding, T2, Swizzled>& other);
  ShPoint(const ShVariableNodePtr& node, const ShSwizzle& swizzle, bool neg);
  explicit ShPoint(host_type data[1]);
  
  ShPoint(host_type);
  
  ~ShPoint();

  
  template<typename T2>
  ShPoint& operator=(const ShGeneric<1, T2>& other);
  
  template<typename T2>
  ShPoint& operator=(const ShPoint<1, Binding, T2, Swizzled>& other);
  ShPoint& operator=(const ShPoint<1, Binding, T, Swizzled>& other);

  ShPoint& operator=(host_type other);

  ShPoint& operator=(const ShProgram& prg);

  
  template<typename T2>
  ShPoint& operator+=(const ShGeneric<1, T2>& right);
  
  template<typename T2>
  ShPoint& operator-=(const ShGeneric<1, T2>& right);
  
  template<typename T2>
  ShPoint& operator*=(const ShGeneric<1, T2>& right);
  
  template<typename T2>
  ShPoint& operator/=(const ShGeneric<1, T2>& right);
  
  template<typename T2>
  ShPoint& operator%=(const ShGeneric<1, T2>& right);
  ShPoint& operator*=(host_type);
  ShPoint& operator/=(host_type);
  ShPoint& operator%=(host_type);
  ShPoint& operator+=(host_type);
  ShPoint& operator-=(host_type);
  ShPoint<1, Binding, T, true> operator()(int) const;
  ShPoint<2, Binding, T, true> operator()(int, int) const;
  ShPoint<3, Binding, T, true> operator()(int, int, int) const;
  ShPoint<4, Binding, T, true> operator()(int, int, int, int) const;
  ShPoint<1, Binding, T, true> operator[](int) const;
  
  template<int N2>
  ShPoint<N2, Binding, T, true> swiz(int indices[]) const;
  
  ShPoint operator-() const;
  private:
    typedef ShAttrib<1, Binding, T, Swizzled> ParentType;
};

template<ShBindingType Binding, typename T, bool Swizzled>
class ShPoint<2, Binding, T, Swizzled> : public ShAttrib<2, Binding, T, Swizzled> {
public:
  typedef T storage_type;
  typedef typename ShHostType<T>::type host_type; 
  typedef typename ShMemType<T>::type mem_type; 
  static const ShBindingType binding_type = Binding;
  static const ShSemanticType semantic_type = SH_POINT;

  typedef ShPoint<2, SH_INPUT, T> InputType;
  typedef ShPoint<2, SH_OUTPUT, T> OutputType;
  typedef ShPoint<2, SH_INOUT, T> InOutType;
  typedef ShPoint<2, SH_TEMP, T> TempType;
  typedef ShPoint<2, SH_CONST, T> ConstType;
  ShPoint();
  
  template<typename T2>
  ShPoint(const ShGeneric<2, T2>& other);
  ShPoint(const ShPoint<2, Binding, T, Swizzled>& other);
  
  template<typename T2>
  ShPoint(const ShPoint<2, Binding, T2, Swizzled>& other);
  ShPoint(const ShVariableNodePtr& node, const ShSwizzle& swizzle, bool neg);
  explicit ShPoint(host_type data[2]);
  
  ShPoint(host_type, host_type);
  template<typename T2, typename T3>
  ShPoint(const ShGeneric<1, T2>&, const ShGeneric<1, T3>&);
  
  ~ShPoint();

  
  template<typename T2>
  ShPoint& operator=(const ShGeneric<2, T2>& other);
  
  template<typename T2>
  ShPoint& operator=(const ShPoint<2, Binding, T2, Swizzled>& other);
  ShPoint& operator=(const ShPoint<2, Binding, T, Swizzled>& other);

  ShPoint& operator=(const ShProgram& prg);

  
  template<typename T2>
  ShPoint& operator+=(const ShGeneric<2, T2>& right);
  
  template<typename T2>
  ShPoint& operator-=(const ShGeneric<2, T2>& right);
  
  template<typename T2>
  ShPoint& operator*=(const ShGeneric<2, T2>& right);
  
  template<typename T2>
  ShPoint& operator/=(const ShGeneric<2, T2>& right);
  
  template<typename T2>
  ShPoint& operator%=(const ShGeneric<2, T2>& right);
  ShPoint& operator*=(host_type);
  ShPoint& operator/=(host_type);
  ShPoint& operator%=(host_type);
  ShPoint& operator+=(host_type);
  ShPoint& operator-=(host_type);
  
  template<typename T2>
  ShPoint& operator+=(const ShGeneric<1, T2>&);
  
  template<typename T2>
  ShPoint& operator-=(const ShGeneric<1, T2>&);
  
  template<typename T2>
  ShPoint& operator*=(const ShGeneric<1, T2>&);
  
  template<typename T2>
  ShPoint& operator/=(const ShGeneric<1, T2>&);
  
  template<typename T2>
  ShPoint& operator%=(const ShGeneric<1, T2>&);
  ShPoint<1, Binding, T, true> operator()(int) const;
  ShPoint<2, Binding, T, true> operator()(int, int) const;
  ShPoint<3, Binding, T, true> operator()(int, int, int) const;
  ShPoint<4, Binding, T, true> operator()(int, int, int, int) const;
  ShPoint<1, Binding, T, true> operator[](int) const;
  
  template<int N2>
  ShPoint<N2, Binding, T, true> swiz(int indices[]) const;
  
  ShPoint operator-() const;
  private:
    typedef ShAttrib<2, Binding, T, Swizzled> ParentType;
};

template<ShBindingType Binding, typename T, bool Swizzled>
class ShPoint<3, Binding, T, Swizzled> : public ShAttrib<3, Binding, T, Swizzled> {
public:
  typedef T storage_type;
  typedef typename ShHostType<T>::type host_type; 
  typedef typename ShMemType<T>::type mem_type; 
  static const ShBindingType binding_type = Binding;
  static const ShSemanticType semantic_type = SH_POINT;

  typedef ShPoint<3, SH_INPUT, T> InputType;
  typedef ShPoint<3, SH_OUTPUT, T> OutputType;
  typedef ShPoint<3, SH_INOUT, T> InOutType;
  typedef ShPoint<3, SH_TEMP, T> TempType;
  typedef ShPoint<3, SH_CONST, T> ConstType;
  ShPoint();
  
  template<typename T2>
  ShPoint(const ShGeneric<3, T2>& other);
  ShPoint(const ShPoint<3, Binding, T, Swizzled>& other);
  
  template<typename T2>
  ShPoint(const ShPoint<3, Binding, T2, Swizzled>& other);
  ShPoint(const ShVariableNodePtr& node, const ShSwizzle& swizzle, bool neg);
  explicit ShPoint(host_type data[3]);
  
  ShPoint(host_type, host_type, host_type);
  template<typename T2, typename T3, typename T4>
  ShPoint(const ShGeneric<1, T2>&, const ShGeneric<1, T3>&, const ShGeneric<1, T4>&);
  
  ~ShPoint();

  
  template<typename T2>
  ShPoint& operator=(const ShGeneric<3, T2>& other);
  
  template<typename T2>
  ShPoint& operator=(const ShPoint<3, Binding, T2, Swizzled>& other);
  ShPoint& operator=(const ShPoint<3, Binding, T, Swizzled>& other);

  ShPoint& operator=(const ShProgram& prg);

  
  template<typename T2>
  ShPoint& operator+=(const ShGeneric<3, T2>& right);
  
  template<typename T2>
  ShPoint& operator-=(const ShGeneric<3, T2>& right);
  
  template<typename T2>
  ShPoint& operator*=(const ShGeneric<3, T2>& right);
  
  template<typename T2>
  ShPoint& operator/=(const ShGeneric<3, T2>& right);
  
  template<typename T2>
  ShPoint& operator%=(const ShGeneric<3, T2>& right);
  ShPoint& operator*=(host_type);
  ShPoint& operator/=(host_type);
  ShPoint& operator%=(host_type);
  ShPoint& operator+=(host_type);
  ShPoint& operator-=(host_type);
  
  template<typename T2>
  ShPoint& operator+=(const ShGeneric<1, T2>&);
  
  template<typename T2>
  ShPoint& operator-=(const ShGeneric<1, T2>&);
  
  template<typename T2>
  ShPoint& operator*=(const ShGeneric<1, T2>&);
  
  template<typename T2>
  ShPoint& operator/=(const ShGeneric<1, T2>&);
  
  template<typename T2>
  ShPoint& operator%=(const ShGeneric<1, T2>&);
  ShPoint<1, Binding, T, true> operator()(int) const;
  ShPoint<2, Binding, T, true> operator()(int, int) const;
  ShPoint<3, Binding, T, true> operator()(int, int, int) const;
  ShPoint<4, Binding, T, true> operator()(int, int, int, int) const;
  ShPoint<1, Binding, T, true> operator[](int) const;
  
  template<int N2>
  ShPoint<N2, Binding, T, true> swiz(int indices[]) const;
  
  ShPoint operator-() const;
  private:
    typedef ShAttrib<3, Binding, T, Swizzled> ParentType;
};

template<ShBindingType Binding, typename T, bool Swizzled>
class ShPoint<4, Binding, T, Swizzled> : public ShAttrib<4, Binding, T, Swizzled> {
public:
  typedef T storage_type;
  typedef typename ShHostType<T>::type host_type; 
  typedef typename ShMemType<T>::type mem_type; 
  static const ShBindingType binding_type = Binding;
  static const ShSemanticType semantic_type = SH_POINT;

  typedef ShPoint<4, SH_INPUT, T> InputType;
  typedef ShPoint<4, SH_OUTPUT, T> OutputType;
  typedef ShPoint<4, SH_INOUT, T> InOutType;
  typedef ShPoint<4, SH_TEMP, T> TempType;
  typedef ShPoint<4, SH_CONST, T> ConstType;
  ShPoint();
  
  template<typename T2>
  ShPoint(const ShGeneric<4, T2>& other);
  ShPoint(const ShPoint<4, Binding, T, Swizzled>& other);
  
  template<typename T2>
  ShPoint(const ShPoint<4, Binding, T2, Swizzled>& other);
  ShPoint(const ShVariableNodePtr& node, const ShSwizzle& swizzle, bool neg);
  explicit ShPoint(host_type data[4]);
  
  ShPoint(host_type, host_type, host_type, host_type);
  template<typename T2, typename T3, typename T4, typename T5>
  ShPoint(const ShGeneric<1, T2>&, const ShGeneric<1, T3>&, const ShGeneric<1, T4>&, const ShGeneric<1, T5>&);
  
  ~ShPoint();

  
  template<typename T2>
  ShPoint& operator=(const ShGeneric<4, T2>& other);
  
  template<typename T2>
  ShPoint& operator=(const ShPoint<4, Binding, T2, Swizzled>& other);
  ShPoint& operator=(const ShPoint<4, Binding, T, Swizzled>& other);

  ShPoint& operator=(const ShProgram& prg);

  
  template<typename T2>
  ShPoint& operator+=(const ShGeneric<4, T2>& right);
  
  template<typename T2>
  ShPoint& operator-=(const ShGeneric<4, T2>& right);
  
  template<typename T2>
  ShPoint& operator*=(const ShGeneric<4, T2>& right);
  
  template<typename T2>
  ShPoint& operator/=(const ShGeneric<4, T2>& right);
  
  template<typename T2>
  ShPoint& operator%=(const ShGeneric<4, T2>& right);
  ShPoint& operator*=(host_type);
  ShPoint& operator/=(host_type);
  ShPoint& operator%=(host_type);
  ShPoint& operator+=(host_type);
  ShPoint& operator-=(host_type);
  
  template<typename T2>
  ShPoint& operator+=(const ShGeneric<1, T2>&);
  
  template<typename T2>
  ShPoint& operator-=(const ShGeneric<1, T2>&);
  
  template<typename T2>
  ShPoint& operator*=(const ShGeneric<1, T2>&);
  
  template<typename T2>
  ShPoint& operator/=(const ShGeneric<1, T2>&);
  
  template<typename T2>
  ShPoint& operator%=(const ShGeneric<1, T2>&);
  ShPoint<1, Binding, T, true> operator()(int) const;
  ShPoint<2, Binding, T, true> operator()(int, int) const;
  ShPoint<3, Binding, T, true> operator()(int, int, int) const;
  ShPoint<4, Binding, T, true> operator()(int, int, int, int) const;
  ShPoint<1, Binding, T, true> operator[](int) const;
  
  template<int N2>
  ShPoint<N2, Binding, T, true> swiz(int indices[]) const;
  
  ShPoint operator-() const;
  private:
    typedef ShAttrib<4, Binding, T, Swizzled> ParentType;
};

typedef ShPoint<1, SH_INPUT, ShInterval<double> > ShInputPoint1i_d;
typedef ShPoint<1, SH_OUTPUT, ShInterval<double> > ShOutputPoint1i_d;
typedef ShPoint<1, SH_INOUT, ShInterval<double> > ShInOutPoint1i_d;
typedef ShPoint<1, SH_TEMP, ShInterval<double> > ShPoint1i_d;
typedef ShPoint<1, SH_CONST, ShInterval<double> > ShConstPoint1i_d;
typedef ShPoint<2, SH_INPUT, ShInterval<double> > ShInputPoint2i_d;
typedef ShPoint<2, SH_OUTPUT, ShInterval<double> > ShOutputPoint2i_d;
typedef ShPoint<2, SH_INOUT, ShInterval<double> > ShInOutPoint2i_d;
typedef ShPoint<2, SH_TEMP, ShInterval<double> > ShPoint2i_d;
typedef ShPoint<2, SH_CONST, ShInterval<double> > ShConstPoint2i_d;
typedef ShPoint<3, SH_INPUT, ShInterval<double> > ShInputPoint3i_d;
typedef ShPoint<3, SH_OUTPUT, ShInterval<double> > ShOutputPoint3i_d;
typedef ShPoint<3, SH_INOUT, ShInterval<double> > ShInOutPoint3i_d;
typedef ShPoint<3, SH_TEMP, ShInterval<double> > ShPoint3i_d;
typedef ShPoint<3, SH_CONST, ShInterval<double> > ShConstPoint3i_d;
typedef ShPoint<4, SH_INPUT, ShInterval<double> > ShInputPoint4i_d;
typedef ShPoint<4, SH_OUTPUT, ShInterval<double> > ShOutputPoint4i_d;
typedef ShPoint<4, SH_INOUT, ShInterval<double> > ShInOutPoint4i_d;
typedef ShPoint<4, SH_TEMP, ShInterval<double> > ShPoint4i_d;
typedef ShPoint<4, SH_CONST, ShInterval<double> > ShConstPoint4i_d;


typedef ShPoint<1, SH_INPUT, ShFracUShort> ShInputPoint1fus;
typedef ShPoint<1, SH_OUTPUT, ShFracUShort> ShOutputPoint1fus;
typedef ShPoint<1, SH_INOUT, ShFracUShort> ShInOutPoint1fus;
typedef ShPoint<1, SH_TEMP, ShFracUShort> ShPoint1fus;
typedef ShPoint<1, SH_CONST, ShFracUShort> ShConstPoint1fus;
typedef ShPoint<2, SH_INPUT, ShFracUShort> ShInputPoint2fus;
typedef ShPoint<2, SH_OUTPUT, ShFracUShort> ShOutputPoint2fus;
typedef ShPoint<2, SH_INOUT, ShFracUShort> ShInOutPoint2fus;
typedef ShPoint<2, SH_TEMP, ShFracUShort> ShPoint2fus;
typedef ShPoint<2, SH_CONST, ShFracUShort> ShConstPoint2fus;
typedef ShPoint<3, SH_INPUT, ShFracUShort> ShInputPoint3fus;
typedef ShPoint<3, SH_OUTPUT, ShFracUShort> ShOutputPoint3fus;
typedef ShPoint<3, SH_INOUT, ShFracUShort> ShInOutPoint3fus;
typedef ShPoint<3, SH_TEMP, ShFracUShort> ShPoint3fus;
typedef ShPoint<3, SH_CONST, ShFracUShort> ShConstPoint3fus;
typedef ShPoint<4, SH_INPUT, ShFracUShort> ShInputPoint4fus;
typedef ShPoint<4, SH_OUTPUT, ShFracUShort> ShOutputPoint4fus;
typedef ShPoint<4, SH_INOUT, ShFracUShort> ShInOutPoint4fus;
typedef ShPoint<4, SH_TEMP, ShFracUShort> ShPoint4fus;
typedef ShPoint<4, SH_CONST, ShFracUShort> ShConstPoint4fus;


typedef ShPoint<1, SH_INPUT, short> ShInputPoint1s;
typedef ShPoint<1, SH_OUTPUT, short> ShOutputPoint1s;
typedef ShPoint<1, SH_INOUT, short> ShInOutPoint1s;
typedef ShPoint<1, SH_TEMP, short> ShPoint1s;
typedef ShPoint<1, SH_CONST, short> ShConstPoint1s;
typedef ShPoint<2, SH_INPUT, short> ShInputPoint2s;
typedef ShPoint<2, SH_OUTPUT, short> ShOutputPoint2s;
typedef ShPoint<2, SH_INOUT, short> ShInOutPoint2s;
typedef ShPoint<2, SH_TEMP, short> ShPoint2s;
typedef ShPoint<2, SH_CONST, short> ShConstPoint2s;
typedef ShPoint<3, SH_INPUT, short> ShInputPoint3s;
typedef ShPoint<3, SH_OUTPUT, short> ShOutputPoint3s;
typedef ShPoint<3, SH_INOUT, short> ShInOutPoint3s;
typedef ShPoint<3, SH_TEMP, short> ShPoint3s;
typedef ShPoint<3, SH_CONST, short> ShConstPoint3s;
typedef ShPoint<4, SH_INPUT, short> ShInputPoint4s;
typedef ShPoint<4, SH_OUTPUT, short> ShOutputPoint4s;
typedef ShPoint<4, SH_INOUT, short> ShInOutPoint4s;
typedef ShPoint<4, SH_TEMP, short> ShPoint4s;
typedef ShPoint<4, SH_CONST, short> ShConstPoint4s;


typedef ShPoint<1, SH_INPUT, ShFracUInt> ShInputPoint1fui;
typedef ShPoint<1, SH_OUTPUT, ShFracUInt> ShOutputPoint1fui;
typedef ShPoint<1, SH_INOUT, ShFracUInt> ShInOutPoint1fui;
typedef ShPoint<1, SH_TEMP, ShFracUInt> ShPoint1fui;
typedef ShPoint<1, SH_CONST, ShFracUInt> ShConstPoint1fui;
typedef ShPoint<2, SH_INPUT, ShFracUInt> ShInputPoint2fui;
typedef ShPoint<2, SH_OUTPUT, ShFracUInt> ShOutputPoint2fui;
typedef ShPoint<2, SH_INOUT, ShFracUInt> ShInOutPoint2fui;
typedef ShPoint<2, SH_TEMP, ShFracUInt> ShPoint2fui;
typedef ShPoint<2, SH_CONST, ShFracUInt> ShConstPoint2fui;
typedef ShPoint<3, SH_INPUT, ShFracUInt> ShInputPoint3fui;
typedef ShPoint<3, SH_OUTPUT, ShFracUInt> ShOutputPoint3fui;
typedef ShPoint<3, SH_INOUT, ShFracUInt> ShInOutPoint3fui;
typedef ShPoint<3, SH_TEMP, ShFracUInt> ShPoint3fui;
typedef ShPoint<3, SH_CONST, ShFracUInt> ShConstPoint3fui;
typedef ShPoint<4, SH_INPUT, ShFracUInt> ShInputPoint4fui;
typedef ShPoint<4, SH_OUTPUT, ShFracUInt> ShOutputPoint4fui;
typedef ShPoint<4, SH_INOUT, ShFracUInt> ShInOutPoint4fui;
typedef ShPoint<4, SH_TEMP, ShFracUInt> ShPoint4fui;
typedef ShPoint<4, SH_CONST, ShFracUInt> ShConstPoint4fui;


typedef ShPoint<1, SH_INPUT, ShFracByte> ShInputPoint1fb;
typedef ShPoint<1, SH_OUTPUT, ShFracByte> ShOutputPoint1fb;
typedef ShPoint<1, SH_INOUT, ShFracByte> ShInOutPoint1fb;
typedef ShPoint<1, SH_TEMP, ShFracByte> ShPoint1fb;
typedef ShPoint<1, SH_CONST, ShFracByte> ShConstPoint1fb;
typedef ShPoint<2, SH_INPUT, ShFracByte> ShInputPoint2fb;
typedef ShPoint<2, SH_OUTPUT, ShFracByte> ShOutputPoint2fb;
typedef ShPoint<2, SH_INOUT, ShFracByte> ShInOutPoint2fb;
typedef ShPoint<2, SH_TEMP, ShFracByte> ShPoint2fb;
typedef ShPoint<2, SH_CONST, ShFracByte> ShConstPoint2fb;
typedef ShPoint<3, SH_INPUT, ShFracByte> ShInputPoint3fb;
typedef ShPoint<3, SH_OUTPUT, ShFracByte> ShOutputPoint3fb;
typedef ShPoint<3, SH_INOUT, ShFracByte> ShInOutPoint3fb;
typedef ShPoint<3, SH_TEMP, ShFracByte> ShPoint3fb;
typedef ShPoint<3, SH_CONST, ShFracByte> ShConstPoint3fb;
typedef ShPoint<4, SH_INPUT, ShFracByte> ShInputPoint4fb;
typedef ShPoint<4, SH_OUTPUT, ShFracByte> ShOutputPoint4fb;
typedef ShPoint<4, SH_INOUT, ShFracByte> ShInOutPoint4fb;
typedef ShPoint<4, SH_TEMP, ShFracByte> ShPoint4fb;
typedef ShPoint<4, SH_CONST, ShFracByte> ShConstPoint4fb;


typedef ShPoint<1, SH_INPUT, int> ShInputPoint1i;
typedef ShPoint<1, SH_OUTPUT, int> ShOutputPoint1i;
typedef ShPoint<1, SH_INOUT, int> ShInOutPoint1i;
typedef ShPoint<1, SH_TEMP, int> ShPoint1i;
typedef ShPoint<1, SH_CONST, int> ShConstPoint1i;
typedef ShPoint<2, SH_INPUT, int> ShInputPoint2i;
typedef ShPoint<2, SH_OUTPUT, int> ShOutputPoint2i;
typedef ShPoint<2, SH_INOUT, int> ShInOutPoint2i;
typedef ShPoint<2, SH_TEMP, int> ShPoint2i;
typedef ShPoint<2, SH_CONST, int> ShConstPoint2i;
typedef ShPoint<3, SH_INPUT, int> ShInputPoint3i;
typedef ShPoint<3, SH_OUTPUT, int> ShOutputPoint3i;
typedef ShPoint<3, SH_INOUT, int> ShInOutPoint3i;
typedef ShPoint<3, SH_TEMP, int> ShPoint3i;
typedef ShPoint<3, SH_CONST, int> ShConstPoint3i;
typedef ShPoint<4, SH_INPUT, int> ShInputPoint4i;
typedef ShPoint<4, SH_OUTPUT, int> ShOutputPoint4i;
typedef ShPoint<4, SH_INOUT, int> ShInOutPoint4i;
typedef ShPoint<4, SH_TEMP, int> ShPoint4i;
typedef ShPoint<4, SH_CONST, int> ShConstPoint4i;


typedef ShPoint<1, SH_INPUT, double> ShInputPoint1d;
typedef ShPoint<1, SH_OUTPUT, double> ShOutputPoint1d;
typedef ShPoint<1, SH_INOUT, double> ShInOutPoint1d;
typedef ShPoint<1, SH_TEMP, double> ShPoint1d;
typedef ShPoint<1, SH_CONST, double> ShConstPoint1d;
typedef ShPoint<2, SH_INPUT, double> ShInputPoint2d;
typedef ShPoint<2, SH_OUTPUT, double> ShOutputPoint2d;
typedef ShPoint<2, SH_INOUT, double> ShInOutPoint2d;
typedef ShPoint<2, SH_TEMP, double> ShPoint2d;
typedef ShPoint<2, SH_CONST, double> ShConstPoint2d;
typedef ShPoint<3, SH_INPUT, double> ShInputPoint3d;
typedef ShPoint<3, SH_OUTPUT, double> ShOutputPoint3d;
typedef ShPoint<3, SH_INOUT, double> ShInOutPoint3d;
typedef ShPoint<3, SH_TEMP, double> ShPoint3d;
typedef ShPoint<3, SH_CONST, double> ShConstPoint3d;
typedef ShPoint<4, SH_INPUT, double> ShInputPoint4d;
typedef ShPoint<4, SH_OUTPUT, double> ShOutputPoint4d;
typedef ShPoint<4, SH_INOUT, double> ShInOutPoint4d;
typedef ShPoint<4, SH_TEMP, double> ShPoint4d;
typedef ShPoint<4, SH_CONST, double> ShConstPoint4d;


typedef ShPoint<1, SH_INPUT, unsigned char> ShInputPoint1ub;
typedef ShPoint<1, SH_OUTPUT, unsigned char> ShOutputPoint1ub;
typedef ShPoint<1, SH_INOUT, unsigned char> ShInOutPoint1ub;
typedef ShPoint<1, SH_TEMP, unsigned char> ShPoint1ub;
typedef ShPoint<1, SH_CONST, unsigned char> ShConstPoint1ub;
typedef ShPoint<2, SH_INPUT, unsigned char> ShInputPoint2ub;
typedef ShPoint<2, SH_OUTPUT, unsigned char> ShOutputPoint2ub;
typedef ShPoint<2, SH_INOUT, unsigned char> ShInOutPoint2ub;
typedef ShPoint<2, SH_TEMP, unsigned char> ShPoint2ub;
typedef ShPoint<2, SH_CONST, unsigned char> ShConstPoint2ub;
typedef ShPoint<3, SH_INPUT, unsigned char> ShInputPoint3ub;
typedef ShPoint<3, SH_OUTPUT, unsigned char> ShOutputPoint3ub;
typedef ShPoint<3, SH_INOUT, unsigned char> ShInOutPoint3ub;
typedef ShPoint<3, SH_TEMP, unsigned char> ShPoint3ub;
typedef ShPoint<3, SH_CONST, unsigned char> ShConstPoint3ub;
typedef ShPoint<4, SH_INPUT, unsigned char> ShInputPoint4ub;
typedef ShPoint<4, SH_OUTPUT, unsigned char> ShOutputPoint4ub;
typedef ShPoint<4, SH_INOUT, unsigned char> ShInOutPoint4ub;
typedef ShPoint<4, SH_TEMP, unsigned char> ShPoint4ub;
typedef ShPoint<4, SH_CONST, unsigned char> ShConstPoint4ub;


typedef ShPoint<1, SH_INPUT, float> ShInputPoint1f;
typedef ShPoint<1, SH_OUTPUT, float> ShOutputPoint1f;
typedef ShPoint<1, SH_INOUT, float> ShInOutPoint1f;
typedef ShPoint<1, SH_TEMP, float> ShPoint1f;
typedef ShPoint<1, SH_CONST, float> ShConstPoint1f;
typedef ShPoint<2, SH_INPUT, float> ShInputPoint2f;
typedef ShPoint<2, SH_OUTPUT, float> ShOutputPoint2f;
typedef ShPoint<2, SH_INOUT, float> ShInOutPoint2f;
typedef ShPoint<2, SH_TEMP, float> ShPoint2f;
typedef ShPoint<2, SH_CONST, float> ShConstPoint2f;
typedef ShPoint<3, SH_INPUT, float> ShInputPoint3f;
typedef ShPoint<3, SH_OUTPUT, float> ShOutputPoint3f;
typedef ShPoint<3, SH_INOUT, float> ShInOutPoint3f;
typedef ShPoint<3, SH_TEMP, float> ShPoint3f;
typedef ShPoint<3, SH_CONST, float> ShConstPoint3f;
typedef ShPoint<4, SH_INPUT, float> ShInputPoint4f;
typedef ShPoint<4, SH_OUTPUT, float> ShOutputPoint4f;
typedef ShPoint<4, SH_INOUT, float> ShInOutPoint4f;
typedef ShPoint<4, SH_TEMP, float> ShPoint4f;
typedef ShPoint<4, SH_CONST, float> ShConstPoint4f;


typedef ShPoint<1, SH_INPUT, char> ShInputPoint1b;
typedef ShPoint<1, SH_OUTPUT, char> ShOutputPoint1b;
typedef ShPoint<1, SH_INOUT, char> ShInOutPoint1b;
typedef ShPoint<1, SH_TEMP, char> ShPoint1b;
typedef ShPoint<1, SH_CONST, char> ShConstPoint1b;
typedef ShPoint<2, SH_INPUT, char> ShInputPoint2b;
typedef ShPoint<2, SH_OUTPUT, char> ShOutputPoint2b;
typedef ShPoint<2, SH_INOUT, char> ShInOutPoint2b;
typedef ShPoint<2, SH_TEMP, char> ShPoint2b;
typedef ShPoint<2, SH_CONST, char> ShConstPoint2b;
typedef ShPoint<3, SH_INPUT, char> ShInputPoint3b;
typedef ShPoint<3, SH_OUTPUT, char> ShOutputPoint3b;
typedef ShPoint<3, SH_INOUT, char> ShInOutPoint3b;
typedef ShPoint<3, SH_TEMP, char> ShPoint3b;
typedef ShPoint<3, SH_CONST, char> ShConstPoint3b;
typedef ShPoint<4, SH_INPUT, char> ShInputPoint4b;
typedef ShPoint<4, SH_OUTPUT, char> ShOutputPoint4b;
typedef ShPoint<4, SH_INOUT, char> ShInOutPoint4b;
typedef ShPoint<4, SH_TEMP, char> ShPoint4b;
typedef ShPoint<4, SH_CONST, char> ShConstPoint4b;


typedef ShPoint<1, SH_INPUT, unsigned short> ShInputPoint1us;
typedef ShPoint<1, SH_OUTPUT, unsigned short> ShOutputPoint1us;
typedef ShPoint<1, SH_INOUT, unsigned short> ShInOutPoint1us;
typedef ShPoint<1, SH_TEMP, unsigned short> ShPoint1us;
typedef ShPoint<1, SH_CONST, unsigned short> ShConstPoint1us;
typedef ShPoint<2, SH_INPUT, unsigned short> ShInputPoint2us;
typedef ShPoint<2, SH_OUTPUT, unsigned short> ShOutputPoint2us;
typedef ShPoint<2, SH_INOUT, unsigned short> ShInOutPoint2us;
typedef ShPoint<2, SH_TEMP, unsigned short> ShPoint2us;
typedef ShPoint<2, SH_CONST, unsigned short> ShConstPoint2us;
typedef ShPoint<3, SH_INPUT, unsigned short> ShInputPoint3us;
typedef ShPoint<3, SH_OUTPUT, unsigned short> ShOutputPoint3us;
typedef ShPoint<3, SH_INOUT, unsigned short> ShInOutPoint3us;
typedef ShPoint<3, SH_TEMP, unsigned short> ShPoint3us;
typedef ShPoint<3, SH_CONST, unsigned short> ShConstPoint3us;
typedef ShPoint<4, SH_INPUT, unsigned short> ShInputPoint4us;
typedef ShPoint<4, SH_OUTPUT, unsigned short> ShOutputPoint4us;
typedef ShPoint<4, SH_INOUT, unsigned short> ShInOutPoint4us;
typedef ShPoint<4, SH_TEMP, unsigned short> ShPoint4us;
typedef ShPoint<4, SH_CONST, unsigned short> ShConstPoint4us;


typedef ShPoint<1, SH_INPUT, ShFracUByte> ShInputPoint1fub;
typedef ShPoint<1, SH_OUTPUT, ShFracUByte> ShOutputPoint1fub;
typedef ShPoint<1, SH_INOUT, ShFracUByte> ShInOutPoint1fub;
typedef ShPoint<1, SH_TEMP, ShFracUByte> ShPoint1fub;
typedef ShPoint<1, SH_CONST, ShFracUByte> ShConstPoint1fub;
typedef ShPoint<2, SH_INPUT, ShFracUByte> ShInputPoint2fub;
typedef ShPoint<2, SH_OUTPUT, ShFracUByte> ShOutputPoint2fub;
typedef ShPoint<2, SH_INOUT, ShFracUByte> ShInOutPoint2fub;
typedef ShPoint<2, SH_TEMP, ShFracUByte> ShPoint2fub;
typedef ShPoint<2, SH_CONST, ShFracUByte> ShConstPoint2fub;
typedef ShPoint<3, SH_INPUT, ShFracUByte> ShInputPoint3fub;
typedef ShPoint<3, SH_OUTPUT, ShFracUByte> ShOutputPoint3fub;
typedef ShPoint<3, SH_INOUT, ShFracUByte> ShInOutPoint3fub;
typedef ShPoint<3, SH_TEMP, ShFracUByte> ShPoint3fub;
typedef ShPoint<3, SH_CONST, ShFracUByte> ShConstPoint3fub;
typedef ShPoint<4, SH_INPUT, ShFracUByte> ShInputPoint4fub;
typedef ShPoint<4, SH_OUTPUT, ShFracUByte> ShOutputPoint4fub;
typedef ShPoint<4, SH_INOUT, ShFracUByte> ShInOutPoint4fub;
typedef ShPoint<4, SH_TEMP, ShFracUByte> ShPoint4fub;
typedef ShPoint<4, SH_CONST, ShFracUByte> ShConstPoint4fub;


typedef ShPoint<1, SH_INPUT, ShHalf> ShInputPoint1h;
typedef ShPoint<1, SH_OUTPUT, ShHalf> ShOutputPoint1h;
typedef ShPoint<1, SH_INOUT, ShHalf> ShInOutPoint1h;
typedef ShPoint<1, SH_TEMP, ShHalf> ShPoint1h;
typedef ShPoint<1, SH_CONST, ShHalf> ShConstPoint1h;
typedef ShPoint<2, SH_INPUT, ShHalf> ShInputPoint2h;
typedef ShPoint<2, SH_OUTPUT, ShHalf> ShOutputPoint2h;
typedef ShPoint<2, SH_INOUT, ShHalf> ShInOutPoint2h;
typedef ShPoint<2, SH_TEMP, ShHalf> ShPoint2h;
typedef ShPoint<2, SH_CONST, ShHalf> ShConstPoint2h;
typedef ShPoint<3, SH_INPUT, ShHalf> ShInputPoint3h;
typedef ShPoint<3, SH_OUTPUT, ShHalf> ShOutputPoint3h;
typedef ShPoint<3, SH_INOUT, ShHalf> ShInOutPoint3h;
typedef ShPoint<3, SH_TEMP, ShHalf> ShPoint3h;
typedef ShPoint<3, SH_CONST, ShHalf> ShConstPoint3h;
typedef ShPoint<4, SH_INPUT, ShHalf> ShInputPoint4h;
typedef ShPoint<4, SH_OUTPUT, ShHalf> ShOutputPoint4h;
typedef ShPoint<4, SH_INOUT, ShHalf> ShInOutPoint4h;
typedef ShPoint<4, SH_TEMP, ShHalf> ShPoint4h;
typedef ShPoint<4, SH_CONST, ShHalf> ShConstPoint4h;


typedef ShPoint<1, SH_INPUT, ShInterval<float> > ShInputPoint1i_f;
typedef ShPoint<1, SH_OUTPUT, ShInterval<float> > ShOutputPoint1i_f;
typedef ShPoint<1, SH_INOUT, ShInterval<float> > ShInOutPoint1i_f;
typedef ShPoint<1, SH_TEMP, ShInterval<float> > ShPoint1i_f;
typedef ShPoint<1, SH_CONST, ShInterval<float> > ShConstPoint1i_f;
typedef ShPoint<2, SH_INPUT, ShInterval<float> > ShInputPoint2i_f;
typedef ShPoint<2, SH_OUTPUT, ShInterval<float> > ShOutputPoint2i_f;
typedef ShPoint<2, SH_INOUT, ShInterval<float> > ShInOutPoint2i_f;
typedef ShPoint<2, SH_TEMP, ShInterval<float> > ShPoint2i_f;
typedef ShPoint<2, SH_CONST, ShInterval<float> > ShConstPoint2i_f;
typedef ShPoint<3, SH_INPUT, ShInterval<float> > ShInputPoint3i_f;
typedef ShPoint<3, SH_OUTPUT, ShInterval<float> > ShOutputPoint3i_f;
typedef ShPoint<3, SH_INOUT, ShInterval<float> > ShInOutPoint3i_f;
typedef ShPoint<3, SH_TEMP, ShInterval<float> > ShPoint3i_f;
typedef ShPoint<3, SH_CONST, ShInterval<float> > ShConstPoint3i_f;
typedef ShPoint<4, SH_INPUT, ShInterval<float> > ShInputPoint4i_f;
typedef ShPoint<4, SH_OUTPUT, ShInterval<float> > ShOutputPoint4i_f;
typedef ShPoint<4, SH_INOUT, ShInterval<float> > ShInOutPoint4i_f;
typedef ShPoint<4, SH_TEMP, ShInterval<float> > ShPoint4i_f;
typedef ShPoint<4, SH_CONST, ShInterval<float> > ShConstPoint4i_f;


typedef ShPoint<1, SH_INPUT, ShFracShort> ShInputPoint1fs;
typedef ShPoint<1, SH_OUTPUT, ShFracShort> ShOutputPoint1fs;
typedef ShPoint<1, SH_INOUT, ShFracShort> ShInOutPoint1fs;
typedef ShPoint<1, SH_TEMP, ShFracShort> ShPoint1fs;
typedef ShPoint<1, SH_CONST, ShFracShort> ShConstPoint1fs;
typedef ShPoint<2, SH_INPUT, ShFracShort> ShInputPoint2fs;
typedef ShPoint<2, SH_OUTPUT, ShFracShort> ShOutputPoint2fs;
typedef ShPoint<2, SH_INOUT, ShFracShort> ShInOutPoint2fs;
typedef ShPoint<2, SH_TEMP, ShFracShort> ShPoint2fs;
typedef ShPoint<2, SH_CONST, ShFracShort> ShConstPoint2fs;
typedef ShPoint<3, SH_INPUT, ShFracShort> ShInputPoint3fs;
typedef ShPoint<3, SH_OUTPUT, ShFracShort> ShOutputPoint3fs;
typedef ShPoint<3, SH_INOUT, ShFracShort> ShInOutPoint3fs;
typedef ShPoint<3, SH_TEMP, ShFracShort> ShPoint3fs;
typedef ShPoint<3, SH_CONST, ShFracShort> ShConstPoint3fs;
typedef ShPoint<4, SH_INPUT, ShFracShort> ShInputPoint4fs;
typedef ShPoint<4, SH_OUTPUT, ShFracShort> ShOutputPoint4fs;
typedef ShPoint<4, SH_INOUT, ShFracShort> ShInOutPoint4fs;
typedef ShPoint<4, SH_TEMP, ShFracShort> ShPoint4fs;
typedef ShPoint<4, SH_CONST, ShFracShort> ShConstPoint4fs;


typedef ShPoint<1, SH_INPUT, ShFracInt> ShInputPoint1fi;
typedef ShPoint<1, SH_OUTPUT, ShFracInt> ShOutputPoint1fi;
typedef ShPoint<1, SH_INOUT, ShFracInt> ShInOutPoint1fi;
typedef ShPoint<1, SH_TEMP, ShFracInt> ShPoint1fi;
typedef ShPoint<1, SH_CONST, ShFracInt> ShConstPoint1fi;
typedef ShPoint<2, SH_INPUT, ShFracInt> ShInputPoint2fi;
typedef ShPoint<2, SH_OUTPUT, ShFracInt> ShOutputPoint2fi;
typedef ShPoint<2, SH_INOUT, ShFracInt> ShInOutPoint2fi;
typedef ShPoint<2, SH_TEMP, ShFracInt> ShPoint2fi;
typedef ShPoint<2, SH_CONST, ShFracInt> ShConstPoint2fi;
typedef ShPoint<3, SH_INPUT, ShFracInt> ShInputPoint3fi;
typedef ShPoint<3, SH_OUTPUT, ShFracInt> ShOutputPoint3fi;
typedef ShPoint<3, SH_INOUT, ShFracInt> ShInOutPoint3fi;
typedef ShPoint<3, SH_TEMP, ShFracInt> ShPoint3fi;
typedef ShPoint<3, SH_CONST, ShFracInt> ShConstPoint3fi;
typedef ShPoint<4, SH_INPUT, ShFracInt> ShInputPoint4fi;
typedef ShPoint<4, SH_OUTPUT, ShFracInt> ShOutputPoint4fi;
typedef ShPoint<4, SH_INOUT, ShFracInt> ShInOutPoint4fi;
typedef ShPoint<4, SH_TEMP, ShFracInt> ShPoint4fi;
typedef ShPoint<4, SH_CONST, ShFracInt> ShConstPoint4fi;


typedef ShPoint<1, SH_INPUT, unsigned int> ShInputPoint1ui;
typedef ShPoint<1, SH_OUTPUT, unsigned int> ShOutputPoint1ui;
typedef ShPoint<1, SH_INOUT, unsigned int> ShInOutPoint1ui;
typedef ShPoint<1, SH_TEMP, unsigned int> ShPoint1ui;
typedef ShPoint<1, SH_CONST, unsigned int> ShConstPoint1ui;
typedef ShPoint<2, SH_INPUT, unsigned int> ShInputPoint2ui;
typedef ShPoint<2, SH_OUTPUT, unsigned int> ShOutputPoint2ui;
typedef ShPoint<2, SH_INOUT, unsigned int> ShInOutPoint2ui;
typedef ShPoint<2, SH_TEMP, unsigned int> ShPoint2ui;
typedef ShPoint<2, SH_CONST, unsigned int> ShConstPoint2ui;
typedef ShPoint<3, SH_INPUT, unsigned int> ShInputPoint3ui;
typedef ShPoint<3, SH_OUTPUT, unsigned int> ShOutputPoint3ui;
typedef ShPoint<3, SH_INOUT, unsigned int> ShInOutPoint3ui;
typedef ShPoint<3, SH_TEMP, unsigned int> ShPoint3ui;
typedef ShPoint<3, SH_CONST, unsigned int> ShConstPoint3ui;
typedef ShPoint<4, SH_INPUT, unsigned int> ShInputPoint4ui;
typedef ShPoint<4, SH_OUTPUT, unsigned int> ShOutputPoint4ui;
typedef ShPoint<4, SH_INOUT, unsigned int> ShInOutPoint4ui;
typedef ShPoint<4, SH_TEMP, unsigned int> ShPoint4ui;
typedef ShPoint<4, SH_CONST, unsigned int> ShConstPoint4ui;



} // namespace SH
#include "ShPointImpl.hpp"

#endif // SH_SHPOINT_HPP
