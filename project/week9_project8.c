//중첩반복문 실습문제8
#include <stdio.h>
int main(void)
{
    int x, y, z, n;
    printf("줄수를 입력하시오. \n");
    scanf("%d", &n);

    for(y=1; y<=n ; y++)
    {
        for(z=n-y; z>0; z--)
        {
            printf(" ");
        }
        
        for(x=1;x<=y;x++)
        {
            printf("%d", x);
        }
        printf("\n");   
    }
}