#include "my_math.h"

long double my_fabs(double x) {
  if (is_nan(x)) {
    return my_NAN;
  }
  if (!is_fin(x)) {
    if (x < 0) {
      return -x;
    }
    return x;
  }
  return x < 0 ? -x : x;
}
