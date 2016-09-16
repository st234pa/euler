#include <stdio.h>
int main() {
  int total;
  int i;
  total = 0;
  for (i = 1; i < 334; i++) {
    total += 3*i;
  }
  for (i = 1; i < 200; i++) {
    total += 5*i;
  }
  for (i = 1; i < 67; i++) {
    total -= 15*i;
  }
  printf("Sum: %d", total);
  return total;
}
