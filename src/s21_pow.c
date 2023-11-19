#include "s21_math.h"

long double s21_pow(double base, double exp) {
  double res = 1.0;
  if ((base != base) && (exp != exp)) {
    return S21_NAN;
  }
  if (exp == S21_INF || exp == -S21_INF) {
    if (s21_fabs(base) > 1) {
      if (exp == S21_INF)
        res = S21_INF;
      else
        res = 0;
    } else if (s21_fabs(base) < 1 && base != 0) {
      if (exp == S21_INF)
        res = 0;
      else
        res = S21_INF;
    } else if (base == 0) {
      if (exp == S21_INF)
        res = 0;
      else
        res = S21_INF;
    }
    return res;
  }

  if (exp <= -1)
    res = 1.0 / (base * s21_pow(1.0 / base, exp + 1));
  else if (exp >= 1)
    res = base * s21_pow(base, exp - 1);
  if (s21_fabs(exp) < 1 && s21_fabs(exp) > 0) {
    if (base < 0) {
      res = S21_NAN;
    }
    double drob = base;
    double drob_sum = 1;
    double temp_exp = s21_fabs(exp);
    while (drob > S21_EPS && temp_exp != 0) {
      drob = s21_sqrt(drob);
      if (temp_exp * 2 >= 1) drob_sum *= drob;
      temp_exp = s21_fmod(temp_exp * 2, 1);
    }
    if (exp > 0)
      res *= drob_sum;
    else if (exp < 0)
      res *= 1 / drob_sum;
  }
  return res;
}
