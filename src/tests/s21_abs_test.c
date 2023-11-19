#include <stdlib.h>

#include "s21_math_test.h"

START_TEST(zero_value) {
  int x = 0;
  ck_assert_int_eq(s21_abs(x), abs(x));
}
END_TEST

START_TEST(positive_value) {
  int x = 5;
  ck_assert_int_eq(s21_abs(x), abs(x));
}

END_TEST
START_TEST(negative_value) {
  int x = -5;
  ck_assert_int_eq(s21_abs(x), abs(x));
}
END_TEST

START_TEST(test_nan) {
  int x = S21_NAN;
  ck_assert_int_eq(s21_abs(x), abs(x));
}
END_TEST

START_TEST(test_inf) {
  int x = S21_INF;
  ck_assert_int_eq(s21_abs(x), abs(x));
}
END_TEST

START_TEST(test_neg_inf) {
  int x = -S21_INF;
  ck_assert_int_eq(s21_abs(x), abs(x));
}

END_TEST

START_TEST(test_float) {
  int x = 13213;
  ck_assert_int_eq(s21_abs(x), abs(x));
}
END_TEST

Suite *create_abs_suite() {
  Suite *suite = suite_create("abs tests");
  TCase *tc = tcase_create("abs valid");

  tcase_add_test(tc, zero_value);
  tcase_add_test(tc, positive_value);
  tcase_add_test(tc, negative_value);
  tcase_add_test(tc, test_nan);
  tcase_add_test(tc, test_inf);
  tcase_add_test(tc, test_neg_inf);
  tcase_add_test(tc, test_float);

  suite_add_tcase(suite, tc);

  return suite;
}
