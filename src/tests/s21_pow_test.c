#include "s21_math_test.h"

START_TEST(zero_base_zero_exp) {
  double x = 0;
  double y = 0;

  ck_assert_double_eq_tol(s21_pow(x, y), pow(x, y), S21_EPS);
}
END_TEST

START_TEST(int_positive_base_zero_exp) {
  double x = 2;
  double y = 0;

  ck_assert_double_eq_tol(s21_pow(x, y), pow(x, y), S21_EPS);
}
END_TEST

START_TEST(zero_base_int_positive_exp) {
  double x = 0;
  double y = 2;

  ck_assert_double_eq_tol(s21_pow(x, y), pow(x, y), S21_EPS);
}
END_TEST

START_TEST(int_positive_base_int_positive_exp) {
  double x = 2;
  double y = 5;

  ck_assert_double_eq_tol(s21_pow(x, y), pow(x, y), S21_EPS);
}
END_TEST

START_TEST(int_positive_base_int_negative_exp) {
  double x = 2;
  double y = -5;

  ck_assert_double_eq_tol(s21_pow(x, y), pow(x, y), S21_EPS);
}
END_TEST

START_TEST(int_negative_base_int_positive_exp) {
  double x = -2;
  double y = 5;

  ck_assert_double_eq_tol(s21_pow(x, y), pow(x, y), S21_EPS);
}
END_TEST

START_TEST(int_negative_base_int_negative_exp) {
  double x = -2;
  double y = -5;

  ck_assert_double_eq_tol(s21_pow(x, y), pow(x, y), S21_EPS);
}
END_TEST

START_TEST(int_base_double_positive_exp) {
  double x = 2;
  double y = 5.23;

  ck_assert_double_eq_tol(s21_pow(x, y), pow(x, y), S21_EPS);
}
END_TEST

START_TEST(int_base_double_negative_exp) {
  double x = 2;
  double y = -5.23;

  ck_assert_double_eq_tol(s21_pow(x, y), pow(x, y), S21_EPS);
}
END_TEST

START_TEST(e_base_int_positive_exp) {
  double x = S21_E;
  double y = 5;

  ck_assert_double_eq_tol(s21_pow(x, y), pow(x, y), S21_EPS);
}
END_TEST

START_TEST(e_base_int_negative_exp) {
  double x = S21_E;
  double y = -5;

  ck_assert_double_eq_tol(s21_pow(x, y), pow(x, y), S21_EPS);
}
END_TEST

START_TEST(e_base_double_positive_exp) {
  double x = S21_E;
  double y = 5.23;

  ck_assert_double_eq_tol(s21_pow(x, y), pow(x, y), S21_EPS);
}
END_TEST

START_TEST(e_base_double_negative_exp) {
  double x = S21_E;
  double y = -5.23;

  ck_assert_double_eq_tol(s21_pow(x, y), pow(x, y), S21_EPS);
}
END_TEST

START_TEST(negative_e_base_positive_int_exp) {
  double x = -S21_E;
  double y = 5;

  ck_assert_double_eq_tol(s21_pow(x, y), pow(x, y), S21_EPS);
}
END_TEST

START_TEST(negative_e_base_negative_int_exp) {
  double x = -S21_E;
  double y = -5;

  ck_assert_double_eq_tol(s21_pow(x, y), pow(x, y), S21_EPS);
}
END_TEST

START_TEST(negative_e_base_double_exp) {
  double x = -S21_E;
  double y = 5.23;

  ck_assert_ldouble_nan(s21_pow(x, y));
}
END_TEST

START_TEST(x_nan) {
  double x = S21_NAN;
  double y = 5.23;

  ck_assert_ldouble_nan(s21_pow(x, y));
}
END_TEST

START_TEST(y_nan) {
  double x = S21_NAN;
  double y = 5.23;

  ck_assert_ldouble_nan(s21_pow(x, y));
}
END_TEST

START_TEST(both_nan) {
  double x = S21_NAN;
  double y = S21_NAN;

  ck_assert_ldouble_nan(s21_pow(x, y));
}
END_TEST

START_TEST(x_inf) {
  double x = S21_INF;
  double y = 5.23;

  ck_assert_ldouble_infinite(s21_pow(x, y));
}
END_TEST

START_TEST(y_inf) {
  double x = -S21_E;
  double y = S21_INF;

  ck_assert_ldouble_infinite(s21_pow(x, y));
}
END_TEST

START_TEST(both_inf) {
  double x = S21_INF;
  double y = S21_INF;

  ck_assert_ldouble_infinite(s21_pow(x, y));
}
END_TEST
START_TEST(x_neg_inf) {
  double x = -S21_INF;
  double y = S21_INF;

  ck_assert_ldouble_infinite(s21_pow(x, y));
}
END_TEST

START_TEST(y_neg_inf) {
  double x = -S21_E;
  double y = -S21_INF;

  ck_assert_double_eq_tol(s21_pow(x, y), pow(x, y), S21_EPS);
}
END_TEST

START_TEST(both_neg_inf) {
  double x = -S21_INF;
  double y = -S21_INF;

  ck_assert_double_eq_tol(s21_pow(x, y), pow(x, y), S21_EPS);
}
END_TEST

START_TEST(x_0_y_inf) {
  double x = 0;
  double y = S21_INF;

  ck_assert_double_eq_tol(s21_pow(x, y), pow(x, y), S21_EPS);
}
END_TEST

START_TEST(x_0_y_neg_inf) {
  double x = 0;
  double y = -S21_INF;

  ck_assert_ldouble_infinite(s21_pow(x, y));
}
END_TEST

START_TEST(x_1_y_inf) {
  double x = 1;
  double y = S21_INF;

  ck_assert_double_eq_tol(s21_pow(x, y), pow(x, y), S21_EPS);
}
END_TEST

START_TEST(x_1_y_neg_inf) {
  double x = 1;
  double y = -S21_INF;

  ck_assert_double_eq_tol(s21_pow(x, y), pow(x, y), S21_EPS);
}
END_TEST

START_TEST(x_fract_y_inf) {
  double x = 0.25;
  double y = S21_INF;

  ck_assert_double_eq_tol(s21_pow(x, y), pow(x, y), S21_EPS);
}
END_TEST

START_TEST(x_fract_y_neg_inf) {
  double x = 0.25;
  double y = -S21_INF;
  ck_assert_ldouble_infinite(s21_pow(x, y));
}
END_TEST

START_TEST(x_neg_fract_y_inf) {
  double x = -0.25;
  double y = S21_INF;

  ck_assert_double_eq_tol(s21_pow(x, y), pow(x, y), S21_EPS);
}
END_TEST

START_TEST(x_neg_fract_y_neg_inf) {
  double x = -0.25;
  double y = -S21_INF;

  //  ck_assert_double_eq_tol(s21_pow(x, y), pow(x, y), S21_EPS);
  ck_assert_ldouble_infinite(s21_pow(x, y));
  ck_assert_ldouble_infinite(pow(x, y));
}
END_TEST

Suite *create_pow_suite() {
  Suite *suite;
  TCase *tc;

  suite = suite_create("pow tests");
  tc = tcase_create("pow valid");

  tcase_add_test(tc, x_neg_fract_y_inf);
  tcase_add_test(tc, x_neg_fract_y_neg_inf);
  tcase_add_test(tc, zero_base_zero_exp);
  tcase_add_test(tc, int_positive_base_zero_exp);
  tcase_add_test(tc, zero_base_int_positive_exp);
  tcase_add_test(tc, int_positive_base_int_positive_exp);
  tcase_add_test(tc, int_positive_base_int_negative_exp);
  tcase_add_test(tc, int_negative_base_int_positive_exp);
  tcase_add_test(tc, int_negative_base_int_negative_exp);
  tcase_add_test(tc, int_base_double_positive_exp);
  tcase_add_test(tc, int_base_double_negative_exp);
  tcase_add_test(tc, e_base_int_positive_exp);
  tcase_add_test(tc, e_base_int_negative_exp);
  tcase_add_test(tc, e_base_double_positive_exp);
  tcase_add_test(tc, e_base_double_negative_exp);
  tcase_add_test(tc, negative_e_base_positive_int_exp);
  tcase_add_test(tc, negative_e_base_negative_int_exp);
  tcase_add_test(tc, negative_e_base_double_exp);
  tcase_add_test(tc, x_nan);
  tcase_add_test(tc, y_nan);
  tcase_add_test(tc, both_nan);
  tcase_add_test(tc, x_inf);
  tcase_add_test(tc, y_inf);
  tcase_add_test(tc, both_inf);
  tcase_add_test(tc, x_neg_inf);
  tcase_add_test(tc, y_neg_inf);
  tcase_add_test(tc, both_neg_inf);
  tcase_add_test(tc, x_0_y_inf);
  tcase_add_test(tc, x_0_y_neg_inf);
  tcase_add_test(tc, x_1_y_inf);
  tcase_add_test(tc, x_1_y_neg_inf);
  tcase_add_test(tc, x_fract_y_inf);
  tcase_add_test(tc, x_fract_y_neg_inf);

  suite_add_tcase(suite, tc);

  return suite;
}
