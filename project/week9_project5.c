//중첩반복문 실습문제5
#include <stdio.h>
int main(void)
{
    int x, y, n;
    printf("줄수를 입력하시오. \n");
    scanf("%d", &n);

    for(y=1; y<=n ; y++)
    {
        for(x=n; x>=y; x--)
        {
            printf("%d", x);
        }
        printf("\n");   
    }
    return 0;
}