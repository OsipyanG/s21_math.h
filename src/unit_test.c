#include <check.h>

#include "tests/s21_math_test.h"

void run_tests() {
  int count_of_tests = 15;
  Suite *suite = NULL;
  SRunner *sRunner = NULL;
  Suite *suite_array[15] = {
      create_atan_suite(),  create_asin_suite(), create_acos_suite(),
      create_abs_suite(),   create_ceil_suite(), create_fabs_suite(),
      create_floor_suite(), create_pow_suite(),  create_sqrt_suite(),
      create_log_suite(),   create_sin_suite(),  create_cos_suite(),
      create_tan_suite(),   create_exp_suite(),  create_fmod_suite()};

  for (int i = 0; i < count_of_tests; i++) {
    suite = suite_array[i];
    sRunner = srunner_create(suite);
    srunner_set_fork_status(sRunner, CK_NOFORK);

    srunner_run_all(sRunner, CK_VERBOSE);
    srunner_free(sRunner);

    suite = NULL;
    sRunner = NULL;
  }
}

int main() { run_tests(); }
