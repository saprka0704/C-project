#include <stdio.h>
int main(void)
{
    int x;
    int y;
    printf("Enter an integer: \n");
    scanf("%d", &x);

    y = (x%2==0)?1:0;

    if (y == 0)
        printf("%d is an odd number.\n", x);

    else
        printf("%d is an even number.", x);

    return 0;
}