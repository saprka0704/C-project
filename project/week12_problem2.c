//실습문제2
#include <stdio.h>
int main(void)
{
    int years;
    double interest, total, principal;

    printf("원금 : ");
    scanf("%lf", &principal);

    printf("이율 : ");
    scanf("%lf", &interest);

    total = principal;

    for(years=0; total<principal*2; years++)
    {
        total = total+interest*total;
    }

    printf("%d년\n", years);

    return 0;

}