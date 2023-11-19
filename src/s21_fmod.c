#include "s21_math.h"
long double s21_fmod(double x, double y) {
  long double res = 0;
  if (x == S21_NAN || y == S21_NAN || x == S21_INF || x == -S21_INF || y == 0) {
    res = S21_NAN;
  } else if (y == S21_INF || y == -S21_INF) {
    res = x;
  } else if (s21_fabs(x) < S21_EPS && y != 0) {
    res = 0.0;
  } else {
    int quotient = (int)x / y;
    res = x - quotient * y;
  }
  return res;
}
