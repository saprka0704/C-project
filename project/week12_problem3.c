//실습문제 3
#include <stdio.h>
#include <math.h>

int main(void)
{
    int n;
    double x, left, right;

    printf("항의 갯수 입력 : ");
    scanf("%d", &n);
    printf("x 입력 : ");
    scanf("%lf", &x);

    left = 1/(1-x);
    right = 0;

    for(int i=0; i<n; i++)
    {
        right += pow(x,i);
    }

    printf("좌항 = %lf\n", left);
    printf("우항 = %lf\n", right);

    return 0;
}