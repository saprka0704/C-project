#include <stdio.h>
int main(void)
{
    int x;
    printf("Enter an integer: \n");
    scanf("%d", &x);

    printf("The integer was %d and the result is %d.", x, x&0);    
    return 0;

}