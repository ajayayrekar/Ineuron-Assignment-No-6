#include <stdio.h>

int main() {
  int n, count = 0;
  printf("Enter a positive integer: ");
  scanf("%d", &n);
  while (n != 0) {
    n /= 10;
    ++count;
  }
  printf("Number of digits in the given integer: %d\n", count);
  return 0;
}
