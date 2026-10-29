#include <stdio.h>
int main(void)
{
    int num;

    printf("Enter an integer: \n");
    scanf("%d", &num);

    printf("%d의 거꾸로 만든 수는 ", num);
    
    while(num > 0)
    {
        printf("%d", num%10);
        num /=10;
    }

    return 0;
}