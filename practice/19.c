#include <stdio.h>
int main(void)
{
    int n, i, j, sum1, sum2, sum;

    i = 1;
    j= 0;
    sum1 = 0;
    sum2 = 0;
    
    printf("짝수 n을 입력하시오. \n");
    scanf("%d",&n);

    while(i<=n)
    {
        sum1 = sum1 + i*i;
        i = i+2;
    }

    while(j<=n)
    {
        sum2 = sum2 + j*j;
        j = j+2;
    }

    sum = sum2 -sum1;

    printf("sum = %d", sum);

    return 0;
}