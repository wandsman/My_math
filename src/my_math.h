#ifndef SRC_my_MATH_H_
#define SRC_my_MATH_H_

#include <ctype.h>
#include <float.h>
#include <stdio.h>
#include <stdlib.h>

#define my_PI 3.14159265358979323846264338327950288
#define my_EXP 2.7182818284590452353602874713526624
#define my_EPS 1e-9

#define my_INF 1.0 / 0.0
#define my_NAN 0.0 / 0.0
#define is_fin(x) __builtin_isfinite(x)
#define is_nan(x) __builtin_isnan(x)
#define is_inf(x) __builtin_isinf(x)

int my_abs(int x);
long double my_fabs(double x);
long double my_pow(double base, double e);
long double my_sqrt(double x);
long double my_log(double x);
long double my_cos(double x);
long double my_sin(double x);
long double my_tan(double x);
long double my_exp(double x);
long double my_asin(double x);
long double my_acos(double x);
long double my_fmod(double x, double y);
long double my_atan(double x);
long double my_ceil(double x);
long double my_floor(double x);
long double my_factorial(int N);

#endif  // SRC_my_MATH_H_
