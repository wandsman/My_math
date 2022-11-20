#include "my_math.h"

long double my_asin(double x) {
  if (x == 1.) {
    return my_PI / 2;
  } else if (x == -1.) {
    return -my_PI / 2;
  }
  if (my_fabs(x) < 1e-9) {
    return 0;
  }
  if (x == 0.7071067811865475244) {
    return my_PI / 4;
  }
  if (x == -0.7071067811865475244) {
    return -my_PI / 4;
  }
  long double asin = 0.;
  if (-1. < x && x < 1.) {
    asin = my_atan(x / my_sqrt(1 - x * x));
  } else {
    return my_NAN;
  }
  return asin;
}
