#include "my_math.h"

long double my_fmod(double x, double y) {
  if (!is_fin(x) || is_nan(y)) {
    return my_NAN;
  }
  if (is_inf(x) && is_inf(y)) {
    return my_NAN;
  }
  if (is_inf(y)) {
    return x;
  }
  if (my_fabs(y) < 1e-7) {
    return my_NAN;
  }
  if (my_fabs(x) < 1e-7) {
    return 0;
  }
  long long int mod = 0;
  mod = x / y;
  long double res = (long double)x - mod * (long double)y;
  return res;
}
