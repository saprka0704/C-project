#include <stdio.h>
int main(void)
{
    int x;

    printf("Enter a decimal number : \n");
    scanf("%d", &x);
    
    printf("The octal value of  %d is : %08o\n",x, x);
    printf("The hexadecimal value of %d is : %#08X\n",x,x);

    return 0;
    

}