#include "s21_math.h"

long double s21_exp(double x) {
  long double long_x = s21_fabs(x);
  long double result = 1;
  long double prev_member = 1;
  int i = 1;

  do {
    prev_member *= (long_x / i);
    i++;
    result += prev_member;
  } while (i < 2000);
  if (x < 0) result = 1 / result;
  return result;
}
