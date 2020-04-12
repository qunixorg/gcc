// { dg-do run { target c++11 } }
// { dg-options "-D__STDCPP_WANT_MATH_SPEC_FUNCS__" }
//
// Copyright (C) 2016-2020 Free Software Foundation, Inc.
//
// This file is part of the GNU ISO C++ Library.  This library is free
// software; you can redistribute it and/or modify it under the
// terms of the GNU General Public License as published by the
// Free Software Foundation; either version 3, or (at your option)
// any later version.
//
// This library is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License along
// with this library; see the file COPYING3.  If not see
// <http://www.gnu.org/licenses/>.

//  beta
//  Compare against values generated by the GNU Scientific Library.
//  The GSL can be found on the web: http://www.gnu.org/software/gsl/
#include <limits>
#include <tr1/cmath>
#if defined(__TEST_DEBUG)
#  include <iostream>
#  define VERIFY(A) \
  if (!(A)) \
    { \
      std::cout << "line " << __LINE__ \
	<< "  max_abs_frac = " << max_abs_frac \
	<< std::endl; \
    }
#else
#  include <testsuite_hooks.h>
#endif
#include <specfun_testcase.h>

// Test data for x=10.000000000000000.
// max(|f - f_GSL|): 3.5542916945637908e-26 at index 4
// max(|f - f_GSL| / |f_GSL|): 2.2331030499795109e-14
// mean(f - f_GSL): -1.0876419730734700e-27
// variance(f - f_GSL): 1.4090082527689930e-55
// stddev(f - f_GSL): 3.7536758687571747e-28
const testcase_beta<double>
data001[10] =
{
  { 1.0825088224469029e-06, 10.000000000000000, 10.000000000000000, 0.0 },
  { 4.9925087406346778e-09, 10.000000000000000, 20.000000000000000, 0.0 },
  { 1.5729567312509485e-10, 10.000000000000000, 30.000000000000000, 0.0 },
  { 1.2168673582561288e-11, 10.000000000000000, 40.000000000000000, 0.0 },
  { 1.5916380099863291e-12, 10.000000000000000, 50.000000000000000, 0.0 },
  { 2.9408957938463963e-13, 10.000000000000000, 60.000000000000000, 0.0 },
  { 6.9411637980691676e-14, 10.000000000000000, 70.000000000000000, 0.0 },
  { 1.9665612972502651e-14, 10.000000000000000, 80.000000000000000, 0.0 },
  { 6.4187824828154399e-15, 10.000000000000000, 90.000000000000000, 0.0 },
  { 2.3455339739604842e-15, 10.000000000000000, 100.00000000000000, 0.0 },
};
const double toler001 = 2.5000000000000015e-12;

// Test data for x=20.000000000000000.
// max(|f - f_GSL|): 1.9721522630525295e-31 at index 2
// max(|f - f_GSL| / |f_GSL|): 0.0000000000000000
// mean(f - f_GSL): 1.9831607786682398e-32
// variance(f - f_GSL): 4.8554947092912269e-65
// stddev(f - f_GSL): 6.9681379932455613e-33
const testcase_beta<double>
data002[10] =
{
  { 4.9925087406346778e-09, 20.000000000000000, 10.000000000000000, 0.0 },
  { 7.2544445519248436e-13, 20.000000000000000, 20.000000000000000, 0.0 },
  { 1.7681885473062028e-15, 20.000000000000000, 30.000000000000000, 0.0 },
  { 1.7891885039182335e-17, 20.000000000000000, 40.000000000000000, 0.0 },
  { 4.3240677875623635e-19, 20.000000000000000, 50.000000000000000, 0.0 },
  { 1.8857342309689053e-20, 20.000000000000000, 60.000000000000000, 0.0 },
  { 1.2609804003539998e-21, 20.000000000000000, 70.000000000000000, 0.0 },
  { 1.1660809542079041e-22, 20.000000000000000, 80.000000000000000, 0.0 },
  { 1.3907944279729071e-23, 20.000000000000000, 90.000000000000000, 0.0 },
  { 2.0365059099917614e-24, 20.000000000000000, 100.00000000000000, 0.0 },
};
const double toler002 = 2.5000000000000020e-13;

// Test data for x=30.000000000000000.
// max(|f - f_GSL|): 2.5849394142282115e-26 at index 0
// max(|f - f_GSL| / |f_GSL|): 1.6433633315345226e-16
// mean(f - f_GSL): 2.5849591357601703e-27
// variance(f - f_GSL): 8.2493996710493413e-55
// stddev(f - f_GSL): 9.0826205860694966e-28
const testcase_beta<double>
data003[10] =
{
  { 1.5729567312509485e-10, 30.000000000000000, 10.000000000000000, 0.0 },
  { 1.7681885473062028e-15, 30.000000000000000, 20.000000000000000, 0.0 },
  { 5.6370779640482451e-19, 30.000000000000000, 30.000000000000000, 0.0 },
  { 1.0539424603796547e-21, 30.000000000000000, 40.000000000000000, 0.0 },
  { 6.0118197777273843e-24, 30.000000000000000, 50.000000000000000, 0.0 },
  { 7.4279528553260153e-26, 30.000000000000000, 60.000000000000000, 0.0 },
  { 1.6212207780604767e-27, 30.000000000000000, 70.000000000000000, 0.0 },
  { 5.4783729715317616e-29, 30.000000000000000, 80.000000000000000, 0.0 },
  { 2.6183005659681346e-30, 30.000000000000000, 90.000000000000000, 0.0 },
  { 1.6587948222122229e-31, 30.000000000000000, 100.00000000000000, 0.0 },
};
const double toler003 = 2.5000000000000020e-13;

// Test data for x=40.000000000000000.
// max(|f - f_GSL|): 3.9012149246802907e-41 at index 4
// max(|f - f_GSL| / |f_GSL|): 0.0000000000000000
// mean(f - f_GSL): -3.9072897597887440e-42
// variance(f - f_GSL): 1.8848041017931125e-84
// stddev(f - f_GSL): 1.3728816780018271e-42
const testcase_beta<double>
data004[10] =
{
  { 1.2168673582561288e-11, 40.000000000000000, 10.000000000000000, 0.0 },
  { 1.7891885039182335e-17, 40.000000000000000, 20.000000000000000, 0.0 },
  { 1.0539424603796547e-21, 40.000000000000000, 30.000000000000000, 0.0 },
  { 4.6508509140090659e-25, 40.000000000000000, 40.000000000000000, 0.0 },
  { 7.5161712118557728e-28, 40.000000000000000, 50.000000000000000, 0.0 },
  { 3.0311331979886071e-30, 40.000000000000000, 60.000000000000000, 0.0 },
  { 2.4175035070466313e-32, 40.000000000000000, 70.000000000000000, 0.0 },
  { 3.2734839142758369e-34, 40.000000000000000, 80.000000000000000, 0.0 },
  { 6.7690629601315579e-36, 40.000000000000000, 90.000000000000000, 0.0 },
  { 1.9797337118810115e-37, 40.000000000000000, 100.00000000000000, 0.0 },
};
const double toler004 = 2.5000000000000020e-13;

// Test data for x=50.000000000000000.
// max(|f - f_GSL|): 3.5542916945637908e-26 at index 0
// max(|f - f_GSL| / |f_GSL|): 2.2331030499795109e-14
// mean(f - f_GSL): -3.5542916415910235e-27
// variance(f - f_GSL): 1.5596282806770138e-54
// stddev(f - f_GSL): 1.2488507839918322e-27
const testcase_beta<double>
data005[10] =
{
  { 1.5916380099863291e-12, 50.000000000000000, 10.000000000000000, 0.0 },
  { 4.3240677875623635e-19, 50.000000000000000, 20.000000000000000, 0.0 },
  { 6.0118197777273843e-24, 50.000000000000000, 30.000000000000000, 0.0 },
  { 7.5161712118557728e-28, 50.000000000000000, 40.000000000000000, 0.0 },
  { 3.9646612085674138e-31, 50.000000000000000, 50.000000000000000, 0.0 },
  { 5.8425643906418403e-34, 50.000000000000000, 60.000000000000000, 0.0 },
  { 1.8672362180783552e-36, 50.000000000000000, 70.000000000000000, 0.0 },
  { 1.0939382296458963e-38, 50.000000000000000, 80.000000000000000, 0.0 },
  { 1.0442781609879874e-40, 50.000000000000000, 90.000000000000000, 0.0 },
  { 1.4904121110954370e-42, 50.000000000000000, 100.00000000000000, 0.0 },
};
const double toler005 = 2.5000000000000015e-12;

// Test data for x=60.000000000000000.
// max(|f - f_GSL|): 9.0876776281460560e-28 at index 0
// max(|f - f_GSL| / |f_GSL|): 3.0901052826017635e-15
// mean(f - f_GSL): -9.0876709777057221e-29
// variance(f - f_GSL): 1.0195773308522824e-57
// stddev(f - f_GSL): 3.1930821017510377e-29
const testcase_beta<double>
data006[10] =
{
  { 2.9408957938463963e-13, 60.000000000000000, 10.000000000000000, 0.0 },
  { 1.8857342309689053e-20, 60.000000000000000, 20.000000000000000, 0.0 },
  { 7.4279528553260153e-26, 60.000000000000000, 30.000000000000000, 0.0 },
  { 3.0311331979886071e-30, 60.000000000000000, 40.000000000000000, 0.0 },
  { 5.8425643906418403e-34, 60.000000000000000, 50.000000000000000, 0.0 },
  { 3.4501231469782229e-37, 60.000000000000000, 60.000000000000000, 0.0 },
  { 4.7706855386086599e-40, 60.000000000000000, 70.000000000000000, 0.0 },
  { 1.2902663809721126e-42, 60.000000000000000, 80.000000000000000, 0.0 },
  { 6.0105571058570508e-45, 60.000000000000000, 90.000000000000000, 0.0 },
  { 4.3922898898347209e-47, 60.000000000000000, 100.00000000000000, 0.0 },
};
const double toler006 = 2.5000000000000020e-13;

// Test data for x=70.000000000000000.
// max(|f - f_GSL|): 1.7670484276950664e-28 at index 0
// max(|f - f_GSL| / |f_GSL|): 2.5457523825998871e-15
// mean(f - f_GSL): -1.7670492778129898e-29
// variance(f - f_GSL): 3.8548927780486536e-59
// stddev(f - f_GSL): 6.2087782840496516e-30
const testcase_beta<double>
data007[10] =
{
  { 6.9411637980691676e-14, 70.000000000000000, 10.000000000000000, 0.0 },
  { 1.2609804003539998e-21, 70.000000000000000, 20.000000000000000, 0.0 },
  { 1.6212207780604767e-27, 70.000000000000000, 30.000000000000000, 0.0 },
  { 2.4175035070466313e-32, 70.000000000000000, 40.000000000000000, 0.0 },
  { 1.8672362180783552e-36, 70.000000000000000, 50.000000000000000, 0.0 },
  { 4.7706855386086599e-40, 70.000000000000000, 60.000000000000000, 0.0 },
  { 3.0453137143482908e-43, 70.000000000000000, 70.000000000000000, 0.0 },
  { 4.0192274082013779e-46, 70.000000000000000, 80.000000000000000, 0.0 },
  { 9.5865870063501807e-49, 70.000000000000000, 90.000000000000000, 0.0 },
  { 3.7409127305819802e-51, 70.000000000000000, 100.00000000000000, 0.0 },
};
const double toler007 = 2.5000000000000020e-13;

// Test data for x=80.000000000000000.
// max(|f - f_GSL|): 5.3642541555028803e-29 at index 0
// max(|f - f_GSL| / |f_GSL|): 2.7277330043072765e-15
// mean(f - f_GSL): -5.3642549571904701e-30
// variance(f - f_GSL): 3.5524976846595722e-60
// stddev(f - f_GSL): 1.8848070682856566e-30
const testcase_beta<double>
data008[10] =
{
  { 1.9665612972502651e-14, 80.000000000000000, 10.000000000000000, 0.0 },
  { 1.1660809542079041e-22, 80.000000000000000, 20.000000000000000, 0.0 },
  { 5.4783729715317616e-29, 80.000000000000000, 30.000000000000000, 0.0 },
  { 3.2734839142758369e-34, 80.000000000000000, 40.000000000000000, 0.0 },
  { 1.0939382296458963e-38, 80.000000000000000, 50.000000000000000, 0.0 },
  { 1.2902663809721126e-42, 80.000000000000000, 60.000000000000000, 0.0 },
  { 4.0192274082013779e-46, 80.000000000000000, 70.000000000000000, 0.0 },
  { 2.7160590828669411e-49, 80.000000000000000, 80.000000000000000, 0.0 },
  { 3.4593773902125368e-52, 80.000000000000000, 90.000000000000000, 0.0 },
  { 7.4807039968503468e-55, 80.000000000000000, 100.00000000000000, 0.0 },
};
const double toler008 = 2.5000000000000020e-13;

// Test data for x=90.000000000000000.
// max(|f - f_GSL|): 2.4454688061851366e-29 at index 0
// max(|f - f_GSL| / |f_GSL|): 3.8098639621021905e-15
// mean(f - f_GSL): -2.4454688799474037e-30
// variance(f - f_GSL): 7.3831086948039631e-61
// stddev(f - f_GSL): 8.5925017863274033e-31
const testcase_beta<double>
data009[10] =
{
  { 6.4187824828154399e-15, 90.000000000000000, 10.000000000000000, 0.0 },
  { 1.3907944279729071e-23, 90.000000000000000, 20.000000000000000, 0.0 },
  { 2.6183005659681346e-30, 90.000000000000000, 30.000000000000000, 0.0 },
  { 6.7690629601315579e-36, 90.000000000000000, 40.000000000000000, 0.0 },
  { 1.0442781609879874e-40, 90.000000000000000, 50.000000000000000, 0.0 },
  { 6.0105571058570508e-45, 90.000000000000000, 60.000000000000000, 0.0 },
  { 9.5865870063501807e-49, 90.000000000000000, 70.000000000000000, 0.0 },
  { 3.4593773902125368e-52, 90.000000000000000, 80.000000000000000, 0.0 },
  { 2.4416737907558036e-55, 90.000000000000000, 90.000000000000000, 0.0 },
  { 3.0238531916564250e-58, 90.000000000000000, 100.00000000000000, 0.0 },
};
const double toler009 = 2.5000000000000020e-13;

// Test data for x=100.00000000000000.
// max(|f - f_GSL|): 1.9327092177914789e-29 at index 0
// max(|f - f_GSL| / |f_GSL|): 8.2399540541638715e-15
// mean(f - f_GSL): -1.9327092238526215e-30
// variance(f - f_GSL): 4.6115616592160521e-61
// stddev(f - f_GSL): 6.7908480024339023e-31
const testcase_beta<double>
data010[10] =
{
  { 2.3455339739604842e-15, 100.00000000000000, 10.000000000000000, 0.0 },
  { 2.0365059099917614e-24, 100.00000000000000, 20.000000000000000, 0.0 },
  { 1.6587948222122229e-31, 100.00000000000000, 30.000000000000000, 0.0 },
  { 1.9797337118810115e-37, 100.00000000000000, 40.000000000000000, 0.0 },
  { 1.4904121110954370e-42, 100.00000000000000, 50.000000000000000, 0.0 },
  { 4.3922898898347209e-47, 100.00000000000000, 60.000000000000000, 0.0 },
  { 3.7409127305819802e-51, 100.00000000000000, 70.000000000000000, 0.0 },
  { 7.4807039968503468e-55, 100.00000000000000, 80.000000000000000, 0.0 },
  { 3.0238531916564250e-58, 100.00000000000000, 90.000000000000000, 0.0 },
  { 2.2087606931991849e-61, 100.00000000000000, 100.00000000000000, 0.0 },
};
const double toler010 = 5.0000000000000039e-13;

template<typename Ret, unsigned int Num>
  void
  test(const testcase_beta<Ret> (&data)[Num], Ret toler)
  {
    bool test __attribute__((unused)) = true;
    const Ret eps = std::numeric_limits<Ret>::epsilon();
    Ret max_abs_diff = -Ret(1);
    Ret max_abs_frac = -Ret(1);
    unsigned int num_datum = Num;
    for (unsigned int i = 0; i < num_datum; ++i)
      {
	const Ret f = std::tr1::beta(data[i].x, data[i].y);
	const Ret f0 = data[i].f0;
	const Ret diff = f - f0;
	if (std::abs(diff) > max_abs_diff)
	  max_abs_diff = std::abs(diff);
	if (std::abs(f0) > Ret(10) * eps
	 && std::abs(f) > Ret(10) * eps)
	  {
	    const Ret frac = diff / f0;
	    if (std::abs(frac) > max_abs_frac)
	      max_abs_frac = std::abs(frac);
	  }
      }
    VERIFY(max_abs_frac < toler);
  }

int
main()
{
  test(data001, toler001);
  test(data002, toler002);
  test(data003, toler003);
  test(data004, toler004);
  test(data005, toler005);
  test(data006, toler006);
  test(data007, toler007);
  test(data008, toler008);
  test(data009, toler009);
  test(data010, toler010);
  return 0;
}
