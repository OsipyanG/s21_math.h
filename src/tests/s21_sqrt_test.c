#include "s21_math_test.h"

START_TEST(zero_value) {
  double x = 0;
  ck_assert_double_eq_tol(s21_sqrt(x), sqrt(x), S21_EPS);
}
END_TEST

START_TEST(int_value) {
  double x = 2;
  ck_assert_double_eq_tol(s21_sqrt(x), sqrt(x), S21_EPS);
}
END_TEST

START_TEST(double_value) {
  double x = 4.56;
  ck_assert_double_eq_tol(s21_sqrt(x), sqrt(x), S21_EPS);
}
END_TEST

START_TEST(e_value) {
  double x = S21_E;
  ck_assert_double_eq_tol(s21_sqrt(x), sqrt(x), S21_EPS);
}
END_TEST

START_TEST(inf_value) {
  double x = S21_INF;
  ck_assert_ldouble_infinite(s21_sqrt(x));
}
END_TEST

START_TEST(neg_inf_value) {
  double x = -S21_INF;
  ck_assert_ldouble_nan(s21_sqrt(x));
}
END_TEST

START_TEST(nan_value) {
  double x = S21_NAN;
  ck_assert_ldouble_nan(s21_sqrt(x));
}
END_TEST

Suite *create_sqrt_suite() {
  Suite *suite;
  TCase *tc;

  suite = suite_create("sqrt tests");
  tc = tcase_create("sqrt valid");

  tcase_add_test(tc, zero_value);
  tcase_add_test(tc, int_value);
  tcase_add_test(tc, double_value);
  tcase_add_test(tc, e_value);
  tcase_add_test(tc, inf_value);
  tcase_add_test(tc, neg_inf_value);
  tcase_add_test(tc, nan_value);

  suite_add_tcase(suite, tc);

  return suite;
}
