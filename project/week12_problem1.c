//실습문제1
#include <stdio.h>

int get_integer();

int main(void)
{
    int sum, i, n, sign;
    n=get_integer();

    sum=0;
    sign = -1;

    for(i=1;i<=n;i++)
    {
        sum+=sign*i*i;
        sign*=-1;
    }

    printf("sum = %d \n", sum);
}

int get_integer()
{
    int n;
    printf("정수 n 입력: ");
    scanf("%d", &n);
    return n;
}