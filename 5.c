#include <stdio.h>

int main() {
  int n, sum = 0;
  printf("Enter a positive integer: ");
  scanf("%d", &n);
  for (int i = 1; i <= n; ++i) {
    sum += i * i * i;
  }
  printf("Sum of cubes of first %d natural numbers = %d\n", n, sum);
  return 0;
}