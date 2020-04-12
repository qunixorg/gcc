// Copyright (C) 2019-2020 Free Software Foundation, Inc.
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

// { dg-options "-std=gnu++17" }
// { dg-do compile { target c++17 } }

#include <queue>
#include <deque>
#include <list>

template<typename T, typename U> struct require_same;
template<typename T> struct require_same<T, T> { using type = void; };

template<typename T, typename U>
  typename require_same<T, U>::type
  check_type(U&) { }

void
test01()
{
  std::queue<unsigned> s0;

  std::queue s1 = s0;
  check_type<std::queue<unsigned>>(s1);

  std::queue s2 = std::move(s0);
  check_type<std::queue<unsigned>>(s2);

  const std::queue s3 = s0;
  check_type<const std::queue<unsigned>>(s3);

  const std::queue s4 = s3;
  check_type<const std::queue<unsigned>>(s4);

  std::allocator<unsigned> a;
  std::queue s5(s0, a);
  check_type<std::queue<unsigned>>(s5);

  std::queue s6(std::move(s0), a);
  check_type<std::queue<unsigned>>(s6);

  const std::queue s7(s3, a);
  check_type<const std::queue<unsigned>>(s7);
}

void
test02()
{
  std::deque<unsigned> d;
  std::list<long> l;

  std::queue s1(d);
  check_type<std::queue<unsigned>>(s1);

  std::queue s2(d, d.get_allocator());
  check_type<std::queue<unsigned>>(s2);

  std::queue s3(std::move(d));
  check_type<std::queue<unsigned>>(s3);

  std::queue s4(std::move(d), d.get_allocator());
  check_type<std::queue<unsigned>>(s4);

  std::queue s5(l);
  check_type<std::queue<long, std::list<long>>>(s5);

  std::queue s6(l, l.get_allocator());
  check_type<std::queue<long, std::list<long>>>(s6);

  std::queue s7(std::move(l));
  check_type<std::queue<long, std::list<long>>>(s7);

  std::queue s8(std::move(l), l.get_allocator());
  check_type<std::queue<long, std::list<long>>>(s8);
}
