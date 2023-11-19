#include "s21_math.h"

long double s21_acos(double x) {
  long double result = S21_NAN;

  if (s21_fabs(1 - s21_fabs(x)) < S21_EPS && x > 0) {
    return 0;
  } else if (s21_fabs(1 - s21_fabs(x)) < S21_EPS && x < 0) {
    return S21_PI;
  }
  result = 2 * s21_atan((s21_sqrt(1 - x * x)) / (1 + x));
  return result;
}
