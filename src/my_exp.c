#include "my_math.h"

long double my_exp(double x) {
  long double res = 1;
  long double temp = 1;
  long double i = 1;
  int flag = 0;
  if (x < 0) {
    x *= -1;
    flag = 1;
  }
  while (my_fabs(res) > my_EPS) {
    res *= x / i;
    i += 1;
    temp += res;
    if (temp > DBL_MAX) {
      temp = my_INF;
      break;
    }
  }
  if (flag == 1) {
    if (temp > DBL_MAX) {
      temp = 0;
    } else {
      temp = 1. / temp;
    }
  }
  if (temp > DBL_MAX) {
    return my_INF;
  }
  return temp;
}
