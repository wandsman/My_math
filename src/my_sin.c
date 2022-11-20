#include "my_math.h"

long double my_sin(double x) {
  long double sum_sin = 0;
  int sign = 1;
  if (x == my_NAN || x == -my_INF || x == my_INF) {
    return my_NAN;
  }
  if (x == my_PI) {
    return 1e-50;
  }
  if (x == -my_PI) {
    return -1e-50;
  }
  if (x == 0) {
    return 0;
  }
  for (; x < -2 * my_PI || 2 * my_PI < x;) {
    if (x > 2 * my_PI) {
      x -= 2 * my_PI;
    } else {
      x += 2 * my_PI;
    }
  }
  if (x < 0) {
    x = -x;
    sign = -1;
  }
  for (register int i = 0; i < 500; i++) {
    sum_sin +=
        my_pow(-1, i) * my_pow(x, 2 * i + 1) / my_factorial(2 * i + 1);
  }
  return sum_sin * sign;
}
