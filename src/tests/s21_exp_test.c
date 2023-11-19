//
// Created by maksim on 12.11.23.
//
#include "s21_math_test.h"

START_TEST(valid_value) {
  ck_assert_ldouble_eq_tol(s21_exp(10), exp(10), S21_EPS);
}
END_TEST

START_TEST(frac_value) {
  ck_assert_ldouble_eq_tol(s21_exp(1.56), exp(1.56), S21_EPS);
}
END_TEST

START_TEST(very_big_result_value) {
  ck_assert_ldouble_eq_tol(s21_exp(10), exp(10), S21_EPS);
}
END_TEST

START_TEST(very_small_value) {
  ck_assert_ldouble_eq_tol(s21_exp(-1000), exp(-1000), S21_EPS);
}
END_TEST

START_TEST(pos_inf_value) { ck_assert_ldouble_infinite(s21_exp(INFINITY)); }
END_TEST

START_TEST(neg_inf_value) {
  ck_assert_ldouble_eq_tol(s21_exp(-INFINITY), exp(-INFINITY), S21_EPS);
}
END_TEST

START_TEST(nan_value) { ck_assert_ldouble_nan(s21_exp(NAN)); }
END_TEST

START_TEST(small_frac_value) {
  ck_assert_ldouble_eq_tol(s21_exp(-1e-8), exp(-1e-8), S21_EPS);
}
END_TEST

Suite *create_exp_suite() {
  Suite *suite;
  TCase *tc;

  suite = suite_create("Exp tests");
  tc = tcase_create("exp valid");
  tcase_add_test(tc, valid_value);
  tcase_add_test(tc, frac_value);
  tcase_add_test(tc, very_big_result_value);
  tcase_add_test(tc, very_small_value);
  tcase_add_test(tc, pos_inf_value);
  tcase_add_test(tc, neg_inf_value);
  tcase_add_test(tc, nan_value);
  tcase_add_test(tc, small_frac_value);

  suite_add_tcase(suite, tc);

  return suite;
}
