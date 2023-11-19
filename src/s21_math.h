#ifndef S21_MATH_H
#define S21_MATH_H

#define S21_INF 1.0f / 0.0f
#define S21_E 2.71828182845904523536
#define S21_NAN 0.0f / 0.0f
#define S21_EPS 1e-6
#define S21_LIMIT 0.00000000000000000001
#define S21_PI 3.14159265358979323846
#define S21_PI2 1.570796326
#define S21_PI4 0.785398163

int s21_abs(int x);
long double s21_acos(double x);
long double s21_asin(double x);
long double s21_atan(double x);
long double s21_ceil(double x);
long double s21_cos(double x);
long double s21_exp(double x);
long double s21_fabs(double x);
long double s21_floor(double x);
long double s21_fmod(double x, double y);
long double s21_log(double x);
long double s21_pow(double base, double exp);
long double s21_sin(double x);
long double s21_sqrt(double x);
long double s21_tan(double x);

#endif
