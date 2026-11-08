#include <stdio.h>
#include <math.h>

int main(void)
{
    double a;

    printf("정사면체의 한 변의 길이를 입력하시오.\n");
    scanf("%lf", &a);

    printf("정사면체의 부피는 %lf\n", sqrt(2)/12*a*a*a);
    printf("정사면체의 겉넓이는 %lf\n", sqrt(3)*a*a);
    printf("정사면체의 높이는 %lf\n", sqrt(6)/3*a);

    return 0;
}