#include "my_math.h"

long double my_cos(double x) {
  long double sum_cos = 0;
  if (x == my_NAN || x == -my_INF || x == my_INF) {
    return my_NAN;
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
  }
  for (register int i = 0; i < 500; i++) {
    sum_cos += my_pow(-1, i) * my_pow(x, 2 * i) / my_factorial(2 * i);
  }
  return sum_cos;
}
