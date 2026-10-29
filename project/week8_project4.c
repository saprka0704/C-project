#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    srand((unsigned)time(NULL));

    int a, b, i, n, num;
    i = 1;
    
    printf("a<b인 두 정수 a, b를 입력하시오.: \n");
    scanf("%d %d", &a, &b);

    printf("랜덤 번호 개수를 입력하시오: \n");
    scanf("%d", &n);

    while(i<=n)
    {
        num = rand();

        if(a<=num && num<=b)
        {
            printf("%d ", num);
            i++;
        }
        
    }
    
    return 0;

}