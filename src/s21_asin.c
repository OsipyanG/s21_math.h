#include "s21_math.h"

long double s21_asin(double x) {
  long double result = 0;

  if (x < -1.0 || x > 1.0) {
    return S21_NAN;
  } else if (s21_fabs(1 - s21_fabs(x)) < S21_EPS) {
    return x * S21_PI2;
  }

  result = s21_atan(x / (s21_sqrt(1 - x * x)));

  return result;
}
