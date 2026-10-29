#include <stdio.h>
int main(void)
{
    int i1, i2, n, sum1, sum2, sum;
    i1 = 1;
    i2 = 0;
    sum1 = 0;
    sum2 = 0;
    
    printf("Enter an integer: \n");
    scanf("%d", &n);

    while(i1<=n)
    {
        sum1 += i1*i1;
        i1 = i1 +2;
    }

    while(i2<=n)
    {
        sum2 += i2*i2;
        i2 = i2 +2;
    }

    sum = sum2 - sum1;

    printf("Sum= %d", sum);

    return 0;
}