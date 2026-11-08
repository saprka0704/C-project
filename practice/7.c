#include <stdio.h>
int main(void)
{
    double mile, km, feet;

    printf("mile을 입력하시오. \n");
    scanf("%lf", &mile);

    km = mile * 1.609;
    feet = mile * 5280;

    printf("%lf miles = %lf kms\n",mile, km);
    printf("%lf miles = %lf feets\n", mile, feet);

    return 0;
}