//실습문제8 : a,b 사이의 랜덤 수 받기. 
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int rand_a2b(int a, int b, int n);

int main(void)
{
    int a, b, n;
    printf("정수 a, b(a<b) 입력 : \n");
    scanf("%d %d",&a, &b);

    printf("랜덤번호 갯수 : ");
    scanf("%d", &n);

    rand_a2b(a,b,n);

    return 0;
}

int rand_a2b(int a, int b, int n)
{
    srand((unsigned)time(NULL));
    int i;
    for(i=1; i<=n; i++)
    {
        printf("%d ", rand()%(b-a+1) + a);
    }
    return 0;
}
