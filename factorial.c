#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a, factoriel=1;
    scanf("%d", &a);

    for (int i = 1; i <= a; i++)
    {
        factoriel *= i;
    }
    printf("Le factoriel de %d est : %d", a, factoriel);
    
    return 0;
}
