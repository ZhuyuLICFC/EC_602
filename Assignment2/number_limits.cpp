//copyright 2018 Zhuyu Li zhuyuli@bu.edu


/*

A C++ program that measure/estimate the overflow time for different data type

*/

//Copyright 2017 J Carruthers jbc@bu.edu
// Definitions:
// Rs = factor by which float is better than int at representing small numbers
// Rm = factor by which float is better than int at representing large numbers
// Ri = factor by which int is better than float at representing integers
//
// Formulas:
//
// Rs = 1 / smallest_float_greater_than_zero
// Rm = maximum_float_value / largest_int_value
//
// Ri = largest_int_value / N
// where N is the largest integer such that all integers 1,2,3,...,N can be
// represented without loss of accuracy by a float of this size.

#include <iostream>
#include <cstdint>
#include <cfloat>
#include <cmath>

int main(){


  double Rs16, Ri16, Rm16;
  double Rs32, Ri32, Rm32;
  double Rs64, Ri64, Rm64;


  Rs16 = (double) 1 / pow(2, -14);
  Rs32 = (double) 1 / FLT_MIN;
  Rs64 = (double) 1 / DBL_MIN;

  Rm16 = (double) 65504 / INT16_MAX;
  Rm32 = (double) FLT_MAX / INT32_MAX;
  Rm64 = (double) DBL_MAX / INT64_MAX;

  Ri16 = (double) INT16_MAX / pow(2, 11);
  Ri32 = (double) INT32_MAX / pow(2, 24);
  Ri64 = (double) INT64_MAX / pow(2, 53);


  // calculate Rs, Ri, and Rm for half/binary16 vs int16_t

  std::cout<< "16 : Ri= " << Ri16 << " Rm= " << Rm16 << " Rs= " << Rs16 << std::endl;

  // calculate Rs, Ri, and Rm for float/single/binary32 vs int32_t

  std::cout<< "32 : Ri= " << Ri32 << " Rm= " << Rm32 << " Rs= " << Rs32 << std::endl;

  // calculate Rs, Ri, and Rm for double/binary64 vs int64_t

  std::cout<< "64 : Ri= " << Ri64 << " Rm= " << Rm64 << " Rs= " << Rs64 << std::endl;

  return 0;
}
