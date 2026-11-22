#include <stdio.h>

int main(void)
{
    double pi=0;
    int n;
    int i=1, sign=1;

    printf("반복횟수:");
    scanf("%d", &n);

    for(i=1; i<=n; i++)
    {
        pi += sign*4.0/(2*i-1);
        sign*=-1;
    }

    printf("%lf",pi);
    return 0;

}