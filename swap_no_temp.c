#include <stdio.h>

int main()
{
    int a , b;

    scanf("%d %d", &a, &b);
    printf("Avant échange: a = %d, b = %d\n", a, b);

    a = a + b;
    b = a - b;
    a = a - b;

    printf("Après échange: a = %d, b = %d\n", a, b);
    return 0;
}
