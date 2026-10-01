#include <stdio.h>
int main(void)
{
    float radius;
    float pi;
    float area;

    printf("Enter the radius of the circle.\n");
    scanf("%f",&radius);

    pi = 3.14;
    area = pi*radius*radius;

    printf("The area of the circle: %f",area);
    return 0;

}