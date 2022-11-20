#include "my_math.h"

long double my_ceil(double x) {
  if (!is_fin(x)) {
    return x;
  }
  long double ceil_x = (long long int)x;
  if (my_fabs(x) > 0. && x != ceil_x) {
    if (x != DBL_MAX) {
      if (x > 0.) {
        ceil_x += 1;
      }
    } else {
      return DBL_MAX;
    }
  }
  return ceil_x;
}
