#include <stdio.h>

int main(void)
{
    double x, y, z;
    double sum, avg;

    printf("Enter three decimal numbers: \n");
    scanf("%lf %lf %lf", &x, &y, &z);

    sum = x+y+z;
    avg = sum/3;

    printf("The sum of the three numbers is: %lf\n", sum);
    printf("The average of the three numbers is: %lf\n", avg);

    return 0;
}