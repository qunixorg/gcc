// Copyright (C) 2015-2020 Free Software Foundation, Inc.
//
// This file is part of the GNU ISO C++ Library.  This library is free
// software; you can redistribute it and/or modify it under the
// terms of the GNU General Public License as published by the
// Free Software Foundation; either version 3, or (at your option)
// any later version.
 
// This library is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
 
// You should have received a copy of the GNU General Public License along
// with this library; see the file COPYING3.  If not see
// <http://www.gnu.org/licenses/>.

// { dg-do run { target c++11 } }
// COW strings don't support C++11 allocators:
// { dg-require-effective-target cxx11-abi }

#include <string>
#include <memory>
#include <testsuite_hooks.h>
#include <testsuite_allocator.h>
 
using C = wchar_t;
const C c = L'a';
using traits = std::char_traits<C>;

using __gnu_test::SimpleAllocator;

template class std::basic_string<C, traits, SimpleAllocator<C>>;

void test01()
{
  typedef SimpleAllocator<C> alloc_type;
  typedef std::allocator_traits<alloc_type> traits_type;
  typedef std::basic_string<C, traits, alloc_type> test_type;
  test_type v(alloc_type{});
  v.assign(1, c);
  v.assign(100, c);
}

int main()
{
  test01();
  return 0;
}
