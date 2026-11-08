#include <stdio.h>
int main(void)
{
    int i, j, sum1, sum2, n;

    i=1;
    j=0;
    sum1=0;
    sum2=0;

    printf("양의 정수 n을 입력하시오. \n");
    scanf("%d",&n);

    while(i<=n)
    {
        sum1 += i;
        i = i+2;
    }

    while(j<=n)
    {
        sum2 += j;
        j = j+2;
    }

    printf("양의 정수 %d까지 홀수의 합은 %d 짝수의 합은 %d이다.", n, sum1, sum2);

    return 0;

}