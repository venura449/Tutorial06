#include <stdio.h>
#include <math.h>

int main(void) {

  float x;

  // Using the floor function to round down 7.5 to the nearest integer
  printf("%f\n", floor(7.5));

  // Using the ceil function to round up 7.5 to the nearest integer
  printf("%f\n", ceil(7.5));

  // Using the ceil function to round up -6.1 to the nearest integer
  printf("%f\n", ceil(-6.1));

  // Using the log10 function to calculate the base-10 logarithm of 100.0
  printf("%f\n", log10(100.0));

  // Using the floor function to round down -5.5 and then using the ceil function to round up the result
  printf("%f\n", ceil(floor(-5.5)));

  return 0;
}
