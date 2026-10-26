#include <stdio.h>
int main(void)
{
    int x,y;
    printf("Enter an integer: \n");
    scanf("%d", &x);

    y = x%2;

    switch(y)
    {
        case 0:
            printf("%d is an even number.", x);
            break;
        case 1:
            printf("%d is an odd nunber.", x);
            break;
    }
    return 0;
}