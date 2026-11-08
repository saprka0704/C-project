/*중첩반복문 실습문제2*/
#include <stdio.h>
int main(void)
{
    int x, y, n;
    printf("정수를 입력하시오.\n");
    scanf("%d", &n);
    for(y=1; y<=n; y++)
    {
        for(x=1;x<=y;x++)
        {
            printf("%d", x);
        }
        printf("\n");
    }
    return 0;
}