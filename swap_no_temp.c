// main.c

#include <stdio.h>

void ft_swap(int *a, int *b);

int main(void)
{
    int x = 5;
    int y = 3;

    ft_swap(&x, &y);
    printf("Après échange: a = %d, b = %d\n", x, y);

    return 0;
}

void ft_swap(int *a, int *b)
{
    *a = *a + *b;
    *b = *a - *b;
    *a = *a - *b;
}
