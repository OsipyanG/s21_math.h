
#include "s21_math_test.h"

START_TEST(zero_value) {
  ck_assert_ldouble_eq_tol(s21_tan(0), tan(0), S21_EPS);
}
END_TEST

START_TEST(pi_value) {
  ck_assert_ldouble_eq_tol(s21_tan(S21_PI), tan(S21_PI), S21_EPS);
}
END_TEST

START_TEST(minus_2pi_value) {
  ck_assert_ldouble_eq_tol(s21_tan(-2 * S21_PI), tan(-2 * S21_PI), S21_EPS);
}
END_TEST

START_TEST(pi4pi_value) {
  ck_assert_ldouble_eq_tol(s21_tan(S21_PI4), tan(S21_PI4), S21_EPS);
}
END_TEST

START_TEST(normal_value) {
  ck_assert_ldouble_eq_tol(s21_tan(30), tan(30), S21_EPS);
}
END_TEST

START_TEST(nan_value) {
  ck_assert_ldouble_nan(s21_tan(S21_NAN));
  ck_assert_double_nan(tan(S21_NAN));
}
END_TEST

START_TEST(infinity_value) {
  ck_assert_ldouble_nan(s21_tan(S21_INF));
  ck_assert_double_nan(tan(S21_INF));

  ck_assert_ldouble_nan(s21_tan(-S21_INF));
  ck_assert_double_nan(tan(-S21_INF));
}
END_TEST

START_TEST(lim_value) {
  ck_assert_ldouble_eq_tol(s21_tan(S21_LIMIT), tan(S21_LIMIT), S21_EPS);
}
END_TEST

START_TEST(test_tan_eps_positive) {
  double x = 1 + 1e-6;
  ck_assert_ldouble_eq_tol(tan(x), s21_tan(x), 1e-6);
}
END_TEST

START_TEST(test_tan_eps_negative) {
  double x = -1 - 1e-6;
  ck_assert_ldouble_eq_tol(tan(x), s21_tan(x), 1e-6);
}
END_TEST

START_TEST(test_tan_negative) {
  double x = -0.4;
  ck_assert_ldouble_eq_tol(tan(x), s21_tan(x), 1e-6);
}
END_TEST

Suite *create_tan_suite() {
  Suite *suite;
  TCase *tc;

  suite = suite_create("tan tests");
  tc = tcase_create("tan valid");
  tcase_add_test(tc, zero_value);
  tcase_add_test(tc, pi_value);
  tcase_add_test(tc, minus_2pi_value);
  tcase_add_test(tc, pi4pi_value);
  tcase_add_test(tc, normal_value);
  tcase_add_test(tc, nan_value);
  tcase_add_test(tc, lim_value);
  tcase_add_test(tc, infinity_value);
  tcase_add_test(tc, test_tan_eps_positive);
  tcase_add_test(tc, test_tan_eps_negative);
  tcase_add_test(tc, test_tan_negative);

  suite_add_tcase(suite, tc);

  return suite;
}
