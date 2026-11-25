//실습과제5 : 약수 구하는 divisors() 함수 프로그램 작성
#include <stdio.h>
int get_integer(void);

int divisors(int n, int i)
{
    if (n%i==0)
        return 1;
    else
        return 0;
    
}

int main(void)
{
    int n,i, num;
    n=get_integer();
    num = 0;

    for(i=1; i<=n; i++)
    {
        if(divisors(n,i) == 1)
        {
            printf("%d의 약수는 %d\n",n, i);
            num++;
        }    
    }
    printf("%d의 약수의 개수 = %d\n", n, num);
    return 0;

}

int get_integer(void)
{
    int n;
    printf("정수를 입력하시오: ");
    scanf("%d", &n);
    return n;
}