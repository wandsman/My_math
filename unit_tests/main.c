#include "math_suitecases.h"

int main(void) {
  run_tests();
  return 0;
}
void run_testcase(Suite *testcase) {
  static int counter_testcase = 1;
  if (counter_testcase > 1) counter_testcase++;
  SRunner *sr = srunner_create(testcase);
  srunner_set_fork_status(sr, CK_NOFORK);
  srunner_run_all(sr, CK_NORMAL);
  srunner_free(sr);
}

void run_tests(void) {
  Suite *list_cases[] = {
      suite_abs(),   suite_acos(), suite_asin(), suite_atan(),
      suite_ceil(),  suite_cos(),  suite_exp(),  suite_fabs(),
      suite_floor(), suite_fmod(), suite_log(),  suite_pow(),
      suite_sin(),   suite_sqrt(), suite_tan(),  NULL};

  for (Suite **current_testcase = list_cases; *current_testcase != NULL;
       current_testcase++) {
    run_testcase(*current_testcase);
  }
}
