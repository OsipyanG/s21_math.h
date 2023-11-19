#include <stdbool.h>

#include "s21_math.h"
#define LOG_PRECISION 6

bool is_equal_with_precision(double x, double y, int decimal);
long double s21_log(double x) {
  if (x == 0)
    return -S21_INF;
  else if (x != x)
    return S21_NAN;
  else if (x < 0)
    return S21_NAN;
  else if (x == S21_INF)
    return S21_INF;

  double start = 0;
  double middle = 0;
  double end = 0;
  double last_pow;
  if (x > 1 / S21_E) {
    last_pow = 1;
    while (last_pow < x) {
      end++;
      last_pow = S21_E * last_pow;
    }
  } else {
    last_pow = 1 / S21_E;
    while (last_pow > x) {
      end--;
      last_pow = last_pow / S21_E;
    }
  }

  start = end - 1;
  if (x == last_pow) return end;

  long double middle_result;
  for (int i = 0; i < LOG_PRECISION * 4; ++i) {
    middle = (start + end) / 2;
    middle_result = s21_pow(S21_E, middle);
    if (x < middle_result)
      end = middle;
    else if (x > middle_result)
      start = middle;
    else if (x == middle_result) {
      //      return middle;
      i = LOG_PRECISION * 4;
    }
  }
  return middle;
}
