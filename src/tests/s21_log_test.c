//
// Created by maksim on 12.11.23.
//
#include "s21_math_test.h"

START_TEST(value_e) {
  ck_assert_ldouble_eq_tol(s21_log(S21_E), log(S21_E), S21_EPS);
}
END_TEST

START_TEST(not_integer_result) {
  ck_assert_ldouble_eq_tol(s21_log(3), log(3), S21_EPS);
}
END_TEST

START_TEST(neg_value) { ck_assert_ldouble_nan(s21_log(-S21_E)); }
END_TEST

START_TEST(zero_value) { ck_assert_double_infinite(s21_log(0)); }
END_TEST

START_TEST(frac_value_1) {
  long double value = pow(S21_E, 1.5);
  ck_assert_ldouble_eq_tol(s21_log(value), log(value), S21_EPS);
}
END_TEST

START_TEST(frac_value_2) {
  long double value = pow(S21_E, 3.25);
  ck_assert_ldouble_eq_tol(s21_log(value), log(value), S21_EPS);
}
END_TEST

START_TEST(frac_value_3) {
  long double value = pow(S21_E, 2.125);
  ck_assert_ldouble_eq_tol(s21_log(value), log(value), S21_EPS);
}
END_TEST

START_TEST(frac_value_4) {
  long double value = pow(S21_E, -2.125);
  ck_assert_ldouble_eq_tol(s21_log(value), log(value), S21_EPS);
}
END_TEST

START_TEST(frac_value_5) {
  long double value = pow(S21_E, -2.5);
  ck_assert_ldouble_eq_tol(s21_log(value), log(value), S21_EPS);
}
END_TEST

START_TEST(nan_value) { ck_assert_ldouble_nan(s21_log(NAN)); }
END_TEST

START_TEST(inf_value) { ck_assert_ldouble_infinite(s21_log(INFINITY)); }
END_TEST

START_TEST(frac_result) {
  ck_assert_ldouble_eq_tol(s21_log(pow(S21_E, 0.1)), log(pow(S21_E, 0.1)),
                           S21_EPS);
}
END_TEST

START_TEST(neg_result) {
  ck_assert_ldouble_eq_tol(s21_log(pow(S21_E, -5)), log(pow(S21_E, -5)),
                           S21_EPS);
}
END_TEST

START_TEST(frac_neg_result) {
  ck_assert_ldouble_eq_tol(s21_log(pow(S21_E, -0.2)), log(pow(S21_E, -0.2)),
                           S21_EPS);
}
END_TEST

Suite *create_log_suite() {
  Suite *suite;
  TCase *tc;

  suite = suite_create("Log tests");
  tc = tcase_create("log valid");
  tcase_add_test(tc, value_e);
  tcase_add_test(tc, neg_value);
  tcase_add_test(tc, not_integer_result);
  tcase_add_test(tc, zero_value);
  tcase_add_test(tc, frac_value_1);
  tcase_add_test(tc, frac_value_2);
  tcase_add_test(tc, frac_value_3);
  tcase_add_test(tc, frac_value_4);
  tcase_add_test(tc, frac_value_5);
  tcase_add_test(tc, nan_value);
  tcase_add_test(tc, inf_value);
  tcase_add_test(tc, frac_result);
  tcase_add_test(tc, neg_result);
  tcase_add_test(tc, frac_neg_result);

  suite_add_tcase(suite, tc);

  return suite;
}
