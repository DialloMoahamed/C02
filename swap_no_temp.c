#include <stdio.h>

int main(int argc, char const *argv[])
{
  int a, b;
  printf("Entrer deux nombres :");
  scanf("%d %d", &a, &b);

  a = a + b;
  b = a - b;
  a = a - b;
  printf("Après échange: a = %d, b = %d", a, b);
  return 0;
}



