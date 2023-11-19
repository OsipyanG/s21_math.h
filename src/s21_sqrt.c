#include "s21_math.h"

long double s21_sqrt(double x) {
  double low = 0;
  double high = (x < 1) ? 1 : x;
  long double result = 0;
  int flag = 0;

  if (x < 0 || x != x) {
    result = S21_NAN;
    flag = 1;
  }
  while (!flag) {
    double middle = (low + high) / 2;
    if (middle * middle <= x) {
      if (middle == low) {
        result = middle;
        flag = 1;
      }
      low = middle;
    } else {
      if (middle == high) {
        result = middle;
        flag = 1;
      }
      high = middle;
    }
  }

  return result;
}
