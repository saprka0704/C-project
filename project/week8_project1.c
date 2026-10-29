#include <stdio.h>
int main(void)
{
    int i1, i2, sum1, sum2, n;
    
    i1 = 1;
    i2 = 0;
    sum1 = 0;
    sum2 = 0;

    printf("Enter an integer: \n");
    scanf("%d", &n);

    while(i1<=n)
    {
        sum1 += i1;
        i1 = i1+2;
    }
    
    while(i2<=n)
    {
        sum2 += i2;
        i2 = i2 +2;
    }

    printf("%d까지 홀수의 합은 %d, 짝수의 합은 %d.",n, sum1, sum2 );

    return 0;
}
