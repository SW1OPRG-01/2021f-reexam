#include <math.h>
#include "Statestik.h"

double varians(double data[], size_t size, double average) {

  double variance = 0;
  for(int i = 0; i < size; i++) {
    variance += pow(data[i] - average, 2);
  }

  return variance / size;
}