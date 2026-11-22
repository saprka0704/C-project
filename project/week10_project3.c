#include <math.h>
#include <stdio.h>

int main(void)
{
    int n, i;
    double x, left_v, right_v;

    printf("항의 갯수 입력 : ");
    scanf("%d", &n);

    printf("x 입력 : ");
    scanf("%lf", &x);

    left_v = 1/(1-x);
    right_v = 0;

    for(i=0; i<n; i++)
    {
        right_v = right_v + pow(x,i);
    }

    printf("좌항 : %lf \n", left_v);
    printf("우항 : %lf \n", right_v);

    return 0;
}