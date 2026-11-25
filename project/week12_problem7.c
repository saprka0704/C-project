//실습과제7: 두 정수의 최대공약수 찾는 문제
#include<stdio.h>

int gcd(int a, int b)
{
    int i, num;
    for(i=1;i<=b;i++)
    {
        if(a%i==0 && b%i==0)
        num = i;
    }
    return num;
}

int main(void)
{
    int a, b, num;
    printf("두 정수 a, b(a>b)를 입력하시오: \n");
    scanf("%d %d", &a, &b);

    num = gcd(a,b);

    printf("%d, %d의 최대공약수는 %d\n",a,b,num);
    return 0;
}