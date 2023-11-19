#include "s21_math.h"

long double s21_atan(double x) {
  long double result = 0;

  if (x != x) {
    return S21_NAN;
  }
  if (x == S21_INF) {
    return S21_PI2;
  } else if (x == -S21_INF) {
    return -S21_PI2;
  }
  if (s21_fabs(1 - s21_fabs(x)) < S21_EPS) {
    return x * S21_PI4;
  }
  int k = s21_fabs(x) > 1 ? -1 : 1;
  for (int i = 0; i < 500; i++) {
    result += (s21_pow(-1, i) * s21_pow(x, (1 * k + 2 * k * i))) / (1 + 2 * i);
  }
  result = (k == -1.0) ? (S21_PI * s21_fabs(x) / (2 * x) - result) : result;
  return result;
}
