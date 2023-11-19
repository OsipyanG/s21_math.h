#include "s21_math_test.h"

START_TEST(zero_value) {
  double x = 0;
  ck_assert_double_eq_tol(s21_floor(x), floor(x), S21_EPS);
}
END_TEST

START_TEST(int_positive_value) {
  double x = 5;
  ck_assert_double_eq_tol(s21_floor(x), floor(x), S21_EPS);
}
END_TEST

START_TEST(int_negative_value) {
  double x = -5;
  ck_assert_double_eq_tol(s21_floor(x), floor(x), S21_EPS);
}
END_TEST

START_TEST(double_positive_value) {
  double x = 5.4;
  ck_assert_double_eq_tol(s21_floor(x), floor(x), S21_EPS);
}
END_TEST

START_TEST(double_negative_value) {
  double x = -5.4;
  ck_assert_double_eq_tol(s21_floor(x), floor(x), S21_EPS);
}
END_TEST

Suite *create_floor_suite() {
  Suite *suite;
  TCase *tc;

  suite = suite_create("floor tests");
  tc = tcase_create("floor valid");

  tcase_add_test(tc, zero_value);
  tcase_add_test(tc, int_positive_value);
  tcase_add_test(tc, int_negative_value);
  tcase_add_test(tc, double_positive_value);
  tcase_add_test(tc, double_negative_value);

  suite_add_tcase(suite, tc);

  return suite;
}
