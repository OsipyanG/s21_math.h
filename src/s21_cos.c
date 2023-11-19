#include "s21_math.h"

long double s21_cos(double x) {
  long double s = 0;
  if (x == S21_INF || x == -S21_INF || x != x) {
    s = S21_NAN;
  } else {
    x = s21_fmod(x, 2 * S21_PI);
    while (x > S21_PI / 2) {
      x -= 2 * S21_PI;
    }

    while (x < (-(S21_PI / 2))) {
      x += 2 * S21_PI;
    }

    long double q = 1;
    int i = 1;
    long double n = S21_LIMIT;

    while ((q > 0 ? q : -q) > n) {
      s = s + q;
      q = q * (-1) * (x * x) / ((2 * i - 1) * (2 * i));
      i++;
    }
  }
  return s;
}
