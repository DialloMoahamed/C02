#include <stdio.h>

int main(void)
{
    int a;

    scanf("%d", &a);

    if (a % 2 == 0){
        printf("%d est un nombre pair.", a);
    }
    else{
        printf("%d est un nombre impair.", a);
    }
    return 0;
}
