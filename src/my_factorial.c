#include "my_math.h"

long double my_factorial(int N) {
  if (N < 0) {
    return 0;
  }
  if (N == 0) {
    return 1;
  } else {
    return N * my_factorial(N - 1);
  }
}
