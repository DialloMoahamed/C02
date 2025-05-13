#include <stdio.h>

// Ce script demande à l’utilisateur de saisir deux entiers, puis afficher leur somme

int main(int argc, char const *argv[])
{
    int a, b, sum;
    scanf("%d %d", &a, &b);
    sum = a + b;
    printf("La somme est : %d", sum);
    return 0;
}
