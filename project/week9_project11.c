//중첩반복문 실습문제11
#include <stdio.h>
int main(void)
{
    int z, y, x, n;
    printf("줄수를 입력하시오. \n");
    scanf("%d", &n);

    for(y=1;y<=n;y++)
    {
        for(z=0;z<y-1;z++)
        {
            printf(" ");
        }
        for(x=n; x>=y;x--)
        {
            printf("%d", x);
        }
        printf("\n");
    }
    return 0;
}