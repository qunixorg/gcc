
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __org_omg_CORBA_FixedHolder__
#define __org_omg_CORBA_FixedHolder__

#pragma interface

#include <java/lang/Object.h>
extern "Java"
{
  namespace java
  {
    namespace math
    {
        class BigDecimal;
    }
  }
  namespace org
  {
    namespace omg
    {
      namespace CORBA
      {
          class FixedHolder;
          class TypeCode;
        namespace portable
        {
            class InputStream;
            class OutputStream;
        }
      }
    }
  }
}

class org::omg::CORBA::FixedHolder : public ::java::lang::Object
{

public:
  FixedHolder();
  FixedHolder(::java::math::BigDecimal *);
  void _read(::org::omg::CORBA::portable::InputStream *);
  ::org::omg::CORBA::TypeCode * _type();
  void _write(::org::omg::CORBA::portable::OutputStream *);
  ::java::math::BigDecimal * __attribute__((aligned(__alignof__( ::java::lang::Object)))) value;
  static ::java::lang::Class class$;
};

#endif // __org_omg_CORBA_FixedHolder__