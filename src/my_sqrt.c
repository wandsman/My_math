#include "my_math.h"

long double my_fmax(double a, double b) {
  long double res = 1;
  if (a >= b) {
    res = a;
  } else {
    res = b;
  }
  return res;
}

long double my_sqrt(double x) {
  if (is_nan(x)) {
    return my_NAN;
  }
  long double left = 0;
  long double right = my_fmax(1, x);
  long double mid;
  mid = (left + right) / 2;
  if (x < 0) {
    mid = my_NAN;
  } else {
    while ((mid - left) > my_EPS) {
      if (mid * mid > x)
        right = mid;
      else
        left = mid;
      mid = (left + right) / 2;
    }
  }
  return mid;
}
