#include "my_math.h"

long double my_acos(double x) {
  long double acos = 0.;
  if (x == 1.) {
    return 0;
  } else if (x == -1.) {
    return my_PI;
  } else if (x == 0) {
    return my_PI / 2;
  }
  if (x == 0.7071067811865475244) {
    return my_PI / 4;
  }
  if (x == -0.7071067811865475244) {
    return 3 * my_PI / 4;
  }
  if (0. < x && x < 1.) {
    acos = my_atan(my_sqrt(1 - x * x) / x);
  } else if (-1. < x && x < 0.) {
    acos = my_PI + my_atan(my_sqrt(1 - x * x) / x);
  } else {
    return my_NAN;
  }
  return acos;
}
