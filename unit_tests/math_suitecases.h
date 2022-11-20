#ifndef SRC_MATH_SUITECASES_H_
#define SRC_MATH_SUITECASES_H_

#include <check.h>
#include <math.h>

#include "../src/my_math.h"
#define M_PI 3.14159265358979323846


Suite *suite_abs(void);
Suite *suite_acos(void);
Suite *suite_asin(void);
Suite *suite_atan(void);
Suite *suite_ceil(void);
Suite *suite_cos(void);
Suite *suite_exp(void);
Suite *suite_fabs(void);
Suite *suite_floor(void);
Suite *suite_fmod(void);
Suite *suite_log(void);
Suite *suite_pow(void);
Suite *suite_sin(void);
Suite *suite_sqrt(void);
Suite *suite_tan(void);

void run_tests(void);
void run_testcase(Suite *testcase);

#endif  // SRC_MATH_SUITECASES_H_
