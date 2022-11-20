#include "my_math.h"

long double my_log(double x) {
  int ex_pow = 0;
  double result = 0;
  double compare = 0;
  if (x == my_INF) {
    result = my_INF;
  } else if (x == 0) {
    result = -my_INF;
  } else if (x < 0) {
    result = my_NAN;
  } else if (x == 1) {
    result = 0;
  } else {
    for (; x >= my_EXP; x /= my_EXP, ex_pow++) continue;
    int i;
    for (i = 0; i < 100; i++) {
      compare = result;
      result = compare + 2 * (x - my_exp(compare)) / (x + my_exp(compare));
    }
  }
  return (result + ex_pow);
}
