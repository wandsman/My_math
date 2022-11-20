#include "my_math.h"

long double my_atan(double x) {
  long double sum_atan = 0;
  const long double my_atan_1 = 0.7853981633974480L;
  if (is_nan(x)) {
    return my_NAN;
  }
  if (x == 1) {
    sum_atan = my_atan_1;
  } else if (x == -1) {
    sum_atan = -my_atan_1;
  } else if (x == my_PI / 2) {
    sum_atan = 1.003884821853887214L;
  } else if (x == -my_PI / 2) {
    sum_atan = -1.003884821853887214L;
  } else if (x == my_INF || x == -my_INF) {
    sum_atan = x < 0 ? -my_PI / 2 : my_PI / 2;
  } else if (-1. < x && x < 1.) {
    for (register int i = 0; i < 5000; i++) {
      sum_atan += my_pow(-1, i) * my_pow(x, 1 + (2 * i)) / (1 + (2 * i));
    }
  } else {
    for (register int i = 0; i < 7000; i++) {
      sum_atan += my_pow(-1, i) * my_pow(x, -1 - (2 * i)) / (1 + (2 * i));
    }
    sum_atan = my_PI * my_sqrt(x * x) / (2 * x) - sum_atan;
  }
  return sum_atan;
}
