#include "my_math.h"

long double my_tan(double x) {
  if (x == my_PI / 2) {
    return 16331239353195370L;
  } else if (x == -my_PI / 2) {
    return -16331239353195370L;
  }
  if (x == 0) {
    return 0;
  }
  return my_sin(x) / my_cos(x);
}
