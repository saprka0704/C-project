#include <stdio.h>
int main(void)
{
    float mile;
    float km;
    float feet;

    printf("Enter mile: \n");
    scanf("%f", &mile);

    km = 1.609*mile;
    feet = 5280*mile;

    printf("%.2fmile = %.2fkm\n", mile, km);
    printf("%.2fmile = %.2ffeet", mile, feet);

    return 0;
}