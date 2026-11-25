//도전 정수 n을 입력받고, 1부터 n까지 모든 소수를 찾는 프로그램. 
#include <stdio.h>

int get_integer()
{
    int n;
    printf("정수를 입력하십시오: ");
    scanf("%d", &n);
    return n;
}

int is_prime(int n)
{
    int i;
    for(i=2; i<n; i++)
    {
        if(n%i==0)
            return 0;
    }
    return 1;
}

int main(void)
{
    int n,i;
    n = get_integer();
    for(i=2; i<=n; i++)
    {
        if (is_prime(i)==1)
        printf("%d ",i);
    }
    return 0;
}