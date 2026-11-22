#include <stdio.h>
int main(void)
{
    int n, i, sum, sign;
    sum = 0;
    sign = -1;

    printf("양의 정수 n을 입력하시오. \n");
    scanf("%d", &n);

    for(i=1; i<=n; i++)
    {
        sum = sum + sign*i*i;
        sign = -sign;
    }

    printf("sum = %d \n", sum);
    return 0;
}