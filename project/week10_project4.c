#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    srand(time(NULL));
    
    int i, n, a, b, num;

    printf("a<b인 두 정수 a, b를 입력하시오.: \n");
    scanf("%d %d", &a, &b);

    printf("랜덤 번호 개수를 입력하시오: \n");
    scanf("%d", &n);

    for(i=1 ; i<=n; i++)
    {
        num = rand()%(b-a+1) + a;
        printf("%d ", num);
    }

    return 0;
}