#include "my_math.h"

long double my_floor(double x) {
  if (!is_fin(x)) {
    return x;
  }
  long double floor_x = (long long int)x;
  if  (my_fabs(x - floor_x) > 0. && my_fabs(x) > 0.) {
    if (x < 0.) {
      floor_x -= 1;
    }
  }
  return floor_x;
}
