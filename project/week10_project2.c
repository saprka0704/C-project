#include <stdio.h>
int main(void)
{
    int years;
    double investment, rate, total;

    printf("원금:");
    scanf("%lf", &investment);
    
    printf("연이율을 입력하시오: ");
    scanf("%lf", &rate);

    years = 0;

    for(total=investment; total<2*investment ; years++)
    {
        total= total*(1+rate);
    }

    printf("투자 기간: %d년\n", years);
    return 0;
}