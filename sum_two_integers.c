#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a, b, sum;
    printf("Saisir le premier entier : ");
    scanf("%d", &a);
    printf("Saisir le deuxième entier : ");
    scanf("%d", &b);
    sum = a + b;
    printf("La somme est : %d", sum);
    return 0;
}
