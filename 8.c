#include <stdio.h>
#include <math.h>

int main() {
  int n, flag = 0;
  printf("Enter a positive integer: ");
  scanf("%d", &n);
  int m = (int) sqrt(n);
  for (int i = 2; i <= m; ++i) {
    if (n % i == 0) {
      flag = 1;
      break;
    }
  }
  if (flag == 0)
    printf("%d is a prime number\n", n);
  else
    printf("%d is not a prime number\n", n);
  return 0;
}
