#include <stdio.h>
#include "Statestik.h"

double average(double data[], size_t size) {
  double average = 0;
  for(int i = 0; i < size; i++) {
    average += data[i];
  }
  return average /= size;

}

int main(int argc, char **argv) {
  
  double test_1[] = { 1, 2, 3, 4, 5, 6, 7, 8 };
  int t1_size = sizeof(test_1) / sizeof(double);
  double t1_average = average(test_1, t1_size);
  printf("%d %f %.2f\n", t1_size, t1_average, varians(test_1, t1_size, t1_average));
  
  double test_2[] = { -2, -1, 0, 1, 2 };
  int t2_size = sizeof(test_2) / sizeof(double);
  double test_2_average = average(test_2, t2_size);
  printf("%d %f %.2f\n", t2_size, test_2_average, varians(test_2, t2_size, test_2_average));


  return 0;
}
