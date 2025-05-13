#include <stdio.h>

int main(int argc, char const *argv[])
{
    int entier;
    scanf("%d", &entier);
    if (entier % 2 != 0)
    {
        printf("%d est un nombre impair.", entier);
    }
    else
    {
        printf("%d est un nombre pair.", entier);
    }
    
    return 0;
}
