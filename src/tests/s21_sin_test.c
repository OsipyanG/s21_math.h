
#include "s21_math_test.h"

START_TEST(zero_value) {
  ck_assert_ldouble_eq_tol(s21_sin(0), sin(0), S21_EPS);
}
END_TEST

START_TEST(pi_value) {
  ck_assert_ldouble_eq_tol(s21_sin(S21_PI), sin(S21_PI), S21_EPS);
}
END_TEST

START_TEST(minus_2pi_value) {
  ck_assert_ldouble_eq_tol(s21_sin(-2 * S21_PI), sin(-2 * S21_PI), S21_EPS);
}
END_TEST

START_TEST(pi2pi_value) {
  ck_assert_ldouble_eq_tol(s21_sin(S21_PI2), sin(S21_PI2), S21_EPS);
}
END_TEST

START_TEST(normal_value) {
  ck_assert_ldouble_eq_tol(s21_sin(30), sin(30), S21_EPS);
}
END_TEST

START_TEST(nan_value) {
  ck_assert_ldouble_nan(s21_sin(S21_NAN));
  ck_assert_double_nan(sin(S21_NAN));
}
END_TEST

START_TEST(infinity_value) {
  ck_assert_ldouble_nan(s21_sin(S21_INF));
  ck_assert_double_nan(sin(S21_INF));

  ck_assert_ldouble_nan(s21_sin(-S21_INF));
  ck_assert_double_nan(sin(-S21_INF));
}
END_TEST

START_TEST(lim_value) {
  ck_assert_ldouble_eq_tol(s21_sin(S21_LIMIT), sin(S21_LIMIT), S21_EPS);
}
END_TEST

START_TEST(test_sin_eps_positive) {
  double x = 1 + 1e-6;
  ck_assert_ldouble_eq_tol(sin(x), s21_sin(x), 1e-6);
}
END_TEST

START_TEST(test_sin_eps_negative) {
  double x = -1 - 1e-6;
  ck_assert_ldouble_eq_tol(sin(x), s21_sin(x), 1e-6);
}
END_TEST

START_TEST(test_sin_negative) {
  double x = -0.4;
  ck_assert_ldouble_eq_tol(sin(x), s21_sin(x), 1e-6);
}
END_TEST

Suite *create_sin_suite() {
  Suite *suite;
  TCase *tc;

  suite = suite_create("sin tests");
  tc = tcase_create("sin valid");
  tcase_add_test(tc, zero_value);
  tcase_add_test(tc, pi_value);
  tcase_add_test(tc, minus_2pi_value);
  tcase_add_test(tc, pi2pi_value);
  tcase_add_test(tc, normal_value);
  tcase_add_test(tc, nan_value);
  tcase_add_test(tc, lim_value);
  tcase_add_test(tc, infinity_value);
  tcase_add_test(tc, test_sin_eps_positive);
  tcase_add_test(tc, test_sin_eps_negative);
  tcase_add_test(tc, test_sin_negative);

  suite_add_tcase(suite, tc);

  return suite;
}
