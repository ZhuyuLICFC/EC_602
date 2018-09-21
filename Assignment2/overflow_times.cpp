//copyright 2018 Zhuyu Li zhuyuli@bu.edu


/*

A C++ program that measure/estimate the overflow time for different data type

*/

#include<iostream>
#include<cstdint>
#include<ctime>
#include<math.h>

using namespace std;

int main()
{

  // initializations
  clock_t start_clock, end_clock;
  int16_t calcu = 1;
  double int8nano = 0;
  double int16micro = 0;
  double int32sec = 0;
  double int64year = 0;
  int secInYear = 3600 * 24 * 365;

  start_clock = clock();

  // measure int16_t
  while (calcu > 0) {
    calcu++;
  }

  end_clock = clock();

  // calculate others
  int16micro = static_cast<double>(end_clock - start_clock) * pow(10,-3);
  int8nano = int16micro * (pow(2,8) / pow(2,16)) * 1000;
  int32sec = int16micro * (pow(2,32) / pow(2,16)) * pow(10,-6);
  int64year = int16micro * (pow(2,64) / pow(2,16)) * pow(10,-6) / secInYear;

  std::cout << "estimated int8 time (nanoseconds): "
            << int8nano << std::endl;
  std::cout << "measured int16 time (microseconds): "
            << int16micro << std::endl;
  std::cout << "estimated int32 time (seconds): "
            << int32sec << std::endl;
  std::cout << "estimated int64 time (years): "
            << int64year << std::endl;


}


