#include <stdio.h>

int gcd(int a, int b) {
  int t;
  while (b != 0) {
    t = b;
    b = a % b;
    a = t;
  }
  return a;
}

int main() {
  int a, b, g, lcm;
  printf("Enter two positive integers: ");
  scanf("%d %d", &a, &b);
  g = gcd(a, b);
  lcm = (a * b) / g;
  printf("The LCM of %d and %d is %d\n", a, b, lcm);
  return 0;
}
