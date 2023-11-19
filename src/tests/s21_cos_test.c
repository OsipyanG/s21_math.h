
#include "s21_math_test.h"

START_TEST(zero_value) {
  ck_assert_ldouble_eq_tol(s21_cos(0), cos(0), S21_EPS);
}
END_TEST

START_TEST(pi_value) {
  ck_assert_ldouble_eq_tol(s21_cos(S21_PI), cos(S21_PI), S21_EPS);
}
END_TEST

START_TEST(minus_2pi_value) {
  ck_assert_ldouble_eq_tol(s21_cos(-2 * S21_PI), cos(-2 * S21_PI), S21_EPS);
}
END_TEST

START_TEST(pi2pi_value) {
  ck_assert_ldouble_eq_tol(s21_cos(S21_PI2), cos(S21_PI2), S21_EPS);
}
END_TEST

START_TEST(normal_value) {
  ck_assert_ldouble_eq_tol(s21_cos(30), cos(30), S21_EPS);
}
END_TEST

END_TEST
START_TEST(nan_value) {
  ck_assert_ldouble_nan(s21_cos(S21_NAN));
  ck_assert_double_nan(cos(S21_NAN));
}
END_TEST

START_TEST(infinity_value) {
  ck_assert_ldouble_nan(s21_cos(S21_INF));
  ck_assert_double_nan(cos(S21_INF));

  ck_assert_ldouble_nan(s21_cos(-S21_INF));
  ck_assert_double_nan(cos(-S21_INF));
}
END_TEST

END_TEST
START_TEST(lim_value) {
  ck_assert_ldouble_eq_tol(s21_cos(S21_LIMIT), cos(S21_LIMIT), S21_EPS);
}
END_TEST

START_TEST(test_cos_eps_positive) {
  double x = 1 + 1e-6;
  ck_assert_ldouble_eq_tol(cos(x), s21_cos(x), 1e-6);
}
END_TEST

START_TEST(test_cos_eps_negative) {
  double x = -1 - 1e-6;
  ck_assert_ldouble_eq_tol(cos(x), s21_cos(x), 1e-6);
}
END_TEST

START_TEST(test_cos_negative) {
  double x = -0.4;
  ck_assert_ldouble_eq_tol(cos(x), s21_cos(x), 1e-6);
}
END_TEST

Suite *create_cos_suite() {
  Suite *suite;
  TCase *tc;

  suite = suite_create("cos tests");
  tc = tcase_create("cos valid");
  tcase_add_test(tc, zero_value);
  tcase_add_test(tc, pi_value);
  tcase_add_test(tc, minus_2pi_value);
  tcase_add_test(tc, pi2pi_value);
  tcase_add_test(tc, normal_value);
  tcase_add_test(tc, nan_value);
  tcase_add_test(tc, lim_value);
  tcase_add_test(tc, infinity_value);
  tcase_add_test(tc, test_cos_eps_positive);
  tcase_add_test(tc, test_cos_eps_negative);
  tcase_add_test(tc, test_cos_negative);

  suite_add_tcase(suite, tc);

  return suite;
}
