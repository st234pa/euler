#include <stdio.h>
#include <math.h>
int main() {
  int total, a, b, even;
  total = 2;
  even = 2;
  a = 1;
  b = 2;
  while (b <  4*(int)(pow(10, 6))) {
    total = a+b;
    a = b;
    b = total;
    if (!(total%2)) even += total;
  }
  printf("Even valued terms sum to: %d", even);
  return even;
}
