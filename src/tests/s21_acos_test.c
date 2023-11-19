#include "s21_math_test.h"

START_TEST(test_acos_one) {
  double x = 1;
  ck_assert_ldouble_eq_tol(s21_acos(x), acos(x), S21_EPS);
}
END_TEST

START_TEST(test_acos_neg_one) {
  double x = -1;
  ck_assert_ldouble_eq_tol(s21_acos(x), acos(x), S21_EPS);
}
END_TEST

START_TEST(test_acos_pos_inf) {
  double x = S21_INF;
  //    ck_assert_ldouble_eq_tol(s21_acos(x), acos(x), S21_EPS);
  ck_assert_ldouble_nan(s21_acos(x));
}
END_TEST

START_TEST(test_acos_neg_inf) {
  double x = -S21_INF;
  ck_assert_ldouble_nan(s21_acos(x));
}
END_TEST

START_TEST(test_acos_nan) {
  double x = S21_NAN;
  ck_assert_ldouble_nan(acos(x));
}
END_TEST

START_TEST(test_acos_pi) {
  double x = S21_PI;
  ck_assert_ldouble_nan(acos(x));
}
END_TEST

START_TEST(test_acos_eps) {
  double x = S21_EPS;
  ck_assert_ldouble_eq_tol(s21_acos(x), acos(x), S21_EPS);
}
END_TEST

START_TEST(test_acos_e) {
  double x = S21_E;
  //    ck_assert_ldouble_eq_tol(s21_acos(x), acos(x), S21_EPS);
  ck_assert_ldouble_nan(acos(x));
}
END_TEST

START_TEST(test_acos_pi2) {
  double x = S21_PI2;
  //    ck_assert_ldouble_eq_tol(s21_acos(x), acos(x), S21_EPS);
  ck_assert_ldouble_nan(acos(x));
}
END_TEST

START_TEST(test_acos_big_number) {
  double x = 100000000000;
  //    ck_assert_ldouble_eq_tol(s21_acos(x), acos(x), S21_EPS);
  ck_assert_ldouble_nan(acos(x));
}
END_TEST

START_TEST(test_acos_big_mantisa) {
  double x = 0.123123213323;
  ck_assert_ldouble_eq_tol(s21_acos(x), acos(x), S21_EPS);
}
END_TEST

START_TEST(test_acos_valid_1) {
  double x = 0.4;
  ck_assert_ldouble_eq_tol(s21_acos(x), acos(x), S21_EPS);
}
END_TEST

START_TEST(test_acos_valid_2) {
  double x = -0.4;
  ck_assert_ldouble_eq_tol(s21_acos(x), acos(x), S21_EPS);
}
END_TEST

START_TEST(test_acos_valid_3) {
  double x = 0.1;
  ck_assert_ldouble_eq_tol(s21_acos(x), acos(x), S21_EPS);
}
END_TEST

START_TEST(test_acos_valid_4) {
  double x = -0.1;
  ck_assert_ldouble_eq_tol(s21_acos(x), acos(x), S21_EPS);
}
END_TEST

START_TEST(test_acos_valid_5) {
  double x = 0.5;
  ck_assert_ldouble_eq_tol(s21_acos(x), acos(x), S21_EPS);
}
END_TEST

START_TEST(test_acos_valid_6) {
  double x = -0.5;
  ck_assert_ldouble_eq_tol(s21_acos(x), acos(x), S21_EPS);
}
END_TEST

START_TEST(test_acos_valid_7) {
  double x = 0.8;
  ck_assert_ldouble_eq_tol(s21_acos(x), acos(x), S21_EPS);
}
END_TEST

START_TEST(test_acos_valid_8) {
  double x = 0.8;
  ck_assert_ldouble_eq_tol(s21_acos(x), acos(x), S21_EPS);
}
END_TEST

START_TEST(test_acos_unvalid_9) {
  double x = 100;
  //    ck_assert_ldouble_eq_tol(s21_atan(x), atan(x), S21_EPS);
  ck_assert_ldouble_nan(acos(x));
}
END_TEST

START_TEST(test_acos_unvalid_10) {
  double x = -100;
  //    ck_assert_ldouble_eq_tol(s21_acos(x), acos(x), S21_EPS);
  ck_assert_ldouble_nan(acos(x));
}
END_TEST

START_TEST(test_acos_unvalid_11) {
  double x = 4131231233123123;
  //    ck_assert_ldouble_eq_tol(s21_acos(x), acos(x), S21_EPS);
  ck_assert_ldouble_nan(acos(x));
}
END_TEST

START_TEST(test_acos_unvalid_12) {
  double x = 123123123123.123123213213123123123123312319423;
  //    ck_assert_ldouble_eq_tol(s21_acos(x), acos(x), S21_EPS);
  ck_assert_ldouble_nan(acos(x));
}
END_TEST

START_TEST(test_acos_valid_13) {
  double x = -1.0000323132131;
  //    ck_assert_ldouble_eq_tol(s21_acos(x), acos(x), S21_EPS);
  ck_assert_ldouble_nan(acos(x));
}
END_TEST

START_TEST(test_acos_valid_14) {
  double x = -1.023132131;
  //    ck_assert_ldouble_eq_tol(s21_acos(x), acos(x), S21_EPS);
  ck_assert_ldouble_nan(acos(x));
}
END_TEST

Suite *create_acos_suite() {
  Suite *suite;
  TCase *tc;

  suite = suite_create("acos tests");
  tc = tcase_create("acos");
  tcase_add_test(tc, test_acos_one);
  tcase_add_test(tc, test_acos_neg_one);
  tcase_add_test(tc, test_acos_pos_inf);
  tcase_add_test(tc, test_acos_neg_inf);
  tcase_add_test(tc, test_acos_nan);
  tcase_add_test(tc, test_acos_pi);
  tcase_add_test(tc, test_acos_pi2);
  tcase_add_test(tc, test_acos_eps);
  tcase_add_test(tc, test_acos_e);
  tcase_add_test(tc, test_acos_pi2);
  tcase_add_test(tc, test_acos_big_number);
  tcase_add_test(tc, test_acos_big_mantisa);
  tcase_add_test(tc, test_acos_valid_1);
  tcase_add_test(tc, test_acos_valid_2);
  tcase_add_test(tc, test_acos_valid_3);
  tcase_add_test(tc, test_acos_valid_4);
  tcase_add_test(tc, test_acos_valid_5);
  tcase_add_test(tc, test_acos_valid_6);
  tcase_add_test(tc, test_acos_valid_7);
  tcase_add_test(tc, test_acos_valid_8);
  tcase_add_test(tc, test_acos_unvalid_9);
  tcase_add_test(tc, test_acos_unvalid_10);
  tcase_add_test(tc, test_acos_unvalid_11);
  tcase_add_test(tc, test_acos_unvalid_12);
  tcase_add_test(tc, test_acos_valid_13);
  tcase_add_test(tc, test_acos_valid_14);
  suite_add_tcase(suite, tc);
  return suite;
}
