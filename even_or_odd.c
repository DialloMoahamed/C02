#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a;

    scanf("%d", &a);

    if (a % 2 == 0)
    {
        printf("\n%d est un nombre pair.", a);
    }
    else if (a % 2 != 0)
    {
        printf("\n%d est un nombre impair.", a);
    }
    return 0;
}
