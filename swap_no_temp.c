#include <stdio.h>

int main() {
  int a = 10;
  int b = 20;
  printf("%d %d", a, b);
  a = a ^ b;
  b = a ^ b;
  a = a ^ b;

  printf("Après échange: a = %d, b = %d\n", a, b);

  return 0;
}