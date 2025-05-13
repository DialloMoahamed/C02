#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a;

    scanf("%d", &a);

    if (a % 2 == 0)
    {
        printf("%d est un nombre pair.\n", a);
    }
    else
    {
        printf("%d est un nombre impair.\n", a);
    }
    return 0;
}
