#include <stdio.h>
int main(void)
{
    int x, y, z, n;
    printf("줄수를 입력하시오. \n");
    scanf("%d", &n);
    for(y=1; y<=n ; y++)
    {
        for(z=0;z<y-1;z++)
        {
            printf(" ");
        }
        for(x=n-y+1;x>0;x--)
        {
            printf("%d", x);
        }
        printf("\n");
    }
    return 0;
}