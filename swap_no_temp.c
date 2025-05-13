#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a , b, temp;

    scanf("%d %d", &a, &b);
    temp = a;
    a = b;
    b = temp;
    printf("Après échange: a = %d, b = %d", a, b);
    return 0;
}
