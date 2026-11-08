#include <stdio.h>
int main(void)
{
    int num, x;

    printf("정수를 입력: \n");
    scanf("%d", &num);

    while(num>=1)
    {
        x = num%10;
        printf("%d",x);
        num /= 10;
    }
    
    return 0;
}