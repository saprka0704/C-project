//실습문제4
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    srand((unsigned)time(NULL));

    int a, b, n, i;

    printf("값의 범위 a,b(a<b)를 입력 : \n");
    scanf("%d %d",&a,&b);
    printf("랜덤갯수 입력 : ");
    scanf("%d", &n);

    for(i=1;i<=n;i++)
    {
        printf("%d ", rand()%(b-a+1) + a);
    }
    
    return 0;
}