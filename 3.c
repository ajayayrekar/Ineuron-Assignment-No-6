#include <stdio.h>

int main() {
  int n, sum = 0;
  printf("Enter a positive integer: ");
  scanf("%d", &n);
  for (int i = 1; i <= 2 * n - 1; i += 2) {
    sum += i;
  }
  printf("Sum of first %d odd natural numbers = %d\n", n, sum);
  return 0;
}
