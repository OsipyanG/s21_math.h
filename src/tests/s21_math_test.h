#ifndef MATH_S21_MATH_TEST_H
#define MATH_S21_MATH_TEST_H

#include <math.h>
#include <stdlib.h>

#include "../s21_math.h"
#include "check.h"

Suite *create_log_suite();
Suite *create_asin_suite();
Suite *create_atan_suite();
Suite *create_acos_suite();
Suite *create_abs_suite();
Suite *create_ceil_suite();
Suite *create_fabs_suite();
Suite *create_floor_suite();
Suite *create_pow_suite();
Suite *create_sqrt_suite();
Suite *create_sin_suite();
Suite *create_cos_suite();
Suite *create_tan_suite();
Suite *create_exp_suite();
Suite *create_fmod_suite();

#endif  // MATH_S21_MATH_TEST_H
