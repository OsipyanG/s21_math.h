#include "s21_math_test.h"

START_TEST(test_asin_one) {
  double x = 1;
  ck_assert_ldouble_eq_tol(s21_asin(x), asin(x), S21_EPS);
}
END_TEST

START_TEST(test_asin_neg_one) {
  double x = -1;
  ck_assert_ldouble_eq_tol(s21_asin(x), asin(x), S21_EPS);
}
END_TEST

START_TEST(test_asin_pos_inf) {
  double x = S21_INF;
  //    ck_assert_ldouble_eq_tol(s21_asin(x), asin(x), S21_EPS);
  ck_assert_ldouble_nan(s21_asin(x));
}
END_TEST

START_TEST(test_asin_neg_inf) {
  double x = -S21_INF;
  //    ck_assert_ldouble_eq_tol(s21_asin(x), asin(x), S21_EPS);
  ck_assert_ldouble_nan(s21_asin(x));
}
END_TEST

START_TEST(test_asin_nan) {
  double x = S21_NAN;
  //    ck_assert_ldouble_eq_tol(s21_atan(x), atan(x), S21_EPS);
  ck_assert_ldouble_nan(asin(x));
}
END_TEST

START_TEST(test_asin_pi) {
  double x = S21_PI;
  //    ck_assert_ldouble_eq_tol(s21_asin(x), asin(x), S21_EPS);
  ck_assert_ldouble_nan(asin(x));
}
END_TEST

START_TEST(test_asin_eps) {
  double x = S21_EPS;
  ck_assert_ldouble_eq_tol(s21_asin(x), asin(x), S21_EPS);
}
END_TEST

START_TEST(test_asin_e) {
  double x = S21_E;
  //    ck_assert_ldouble_eq_tol(s21_asin(x), asin(x), S21_EPS);
  ck_assert_ldouble_nan(asin(x));
}
END_TEST

START_TEST(test_asin_pi2) {
  double x = S21_PI2;
  //    ck_assert_ldouble_eq_tol(s21_asin(x), asin(x), S21_EPS);
  ck_assert_ldouble_nan(asin(x));
}
END_TEST

START_TEST(test_asin_big_number) {
  double x = 100000000000;
  //    ck_assert_ldouble_eq_tol(s21_asin(x), asin(x), S21_EPS);
  ck_assert_ldouble_nan(asin(x));
}
END_TEST

START_TEST(test_asin_big_mantisa) {
  double x = 0.123123213323;
  ck_assert_ldouble_eq_tol(s21_asin(x), asin(x), S21_EPS);
}
END_TEST

START_TEST(test_asin_valid_one) {
  double x = 0.4;
  ck_assert_ldouble_eq_tol(s21_asin(x), asin(x), S21_EPS);
}
END_TEST

START_TEST(test_asin_valid_two) {
  double x = -0.4;
  ck_assert_ldouble_eq_tol(s21_asin(x), asin(x), S21_EPS);
}
END_TEST

START_TEST(test_asin_valid_three) {
  double x = 0.1;
  ck_assert_ldouble_eq_tol(s21_asin(x), asin(x), S21_EPS);
}
END_TEST

START_TEST(test_asin_valid_four) {
  double x = -0.1;
  ck_assert_ldouble_eq_tol(s21_asin(x), asin(x), S21_EPS);
}
END_TEST

START_TEST(test_asin_valid_five) {
  double x = 0.5;
  ck_assert_ldouble_eq_tol(s21_asin(x), asin(x), S21_EPS);
}
END_TEST

START_TEST(test_asin_valid_six) {
  double x = -0.5;
  ck_assert_ldouble_eq_tol(s21_asin(x), asin(x), S21_EPS);
}
END_TEST

START_TEST(test_asin_valid_seven) {
  double x = 0.8;
  ck_assert_ldouble_eq_tol(s21_asin(x), asin(x), S21_EPS);
}
END_TEST

START_TEST(test_asin_valid_eight) {
  double x = 0.8;
  ck_assert_ldouble_eq_tol(s21_asin(x), asin(x), S21_EPS);
}
END_TEST

START_TEST(test_asin_unvalid_nine) {
  double x = 100;
  //    ck_assert_ldouble_eq_tol(s21_atan(x), atan(x), S21_EPS);
  ck_assert_ldouble_nan(asin(x));
}
END_TEST

START_TEST(test_asin_unvalid_ten) {
  double x = -100;
  //    ck_assert_ldouble_eq_tol(s21_asin(x), asin(x), S21_EPS);
  ck_assert_ldouble_nan(asin(x));
}
END_TEST

START_TEST(test_asin_unvalid_eleven) {
  double x = 4131231233123123;
  //    ck_assert_ldouble_eq_tol(s21_asin(x), asin(x), S21_EPS);
  ck_assert_ldouble_nan(asin(x));
}
END_TEST

START_TEST(test_asin_unvalid_twelve) {
  double x = 123123123123.123123213213123123123123312319423;
  //    ck_assert_ldouble_eq_tol(s21_asin(x), asin(x), S21_EPS);
  ck_assert_ldouble_nan(asin(x));
}
END_TEST

Suite *create_asin_suite() {
  Suite *suite;
  TCase *tc;

  suite = suite_create("Asin tests");
  tc = tcase_create("Asin");
  tcase_add_test(tc, test_asin_one);
  tcase_add_test(tc, test_asin_neg_one);
  tcase_add_test(tc, test_asin_pos_inf);
  tcase_add_test(tc, test_asin_neg_inf);
  tcase_add_test(tc, test_asin_nan);
  tcase_add_test(tc, test_asin_pi);
  tcase_add_test(tc, test_asin_pi2);
  tcase_add_test(tc, test_asin_eps);
  tcase_add_test(tc, test_asin_e);
  tcase_add_test(tc, test_asin_pi2);
  tcase_add_test(tc, test_asin_big_number);
  tcase_add_test(tc, test_asin_big_mantisa);
  tcase_add_test(tc, test_asin_valid_one);
  tcase_add_test(tc, test_asin_valid_one);
  tcase_add_test(tc, test_asin_valid_two);
  tcase_add_test(tc, test_asin_valid_three);
  tcase_add_test(tc, test_asin_valid_four);
  tcase_add_test(tc, test_asin_valid_five);
  tcase_add_test(tc, test_asin_valid_six);
  tcase_add_test(tc, test_asin_valid_seven);
  tcase_add_test(tc, test_asin_valid_eight);
  tcase_add_test(tc, test_asin_unvalid_nine);
  tcase_add_test(tc, test_asin_unvalid_ten);
  tcase_add_test(tc, test_asin_unvalid_eleven);
  tcase_add_test(tc, test_asin_unvalid_twelve);
  suite_add_tcase(suite, tc);
  return suite;
}
