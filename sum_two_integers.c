#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a, b, sum;
    printf("Saisir deux entiers : ");
    scanf("%d %d", &a, &b);
    sum = a + b;
    printf("La somme est : %d", sum);
    return 0;
}
