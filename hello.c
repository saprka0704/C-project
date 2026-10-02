#include <stdio.h>
int main(void)
{
    float radius;
    float area;

    printf("Enter the radius of the circle.\n");
    scanf("%f",&radius);

    area = 3.141592*radius*radius;

    printf("The area of the circle: %f",area);
    return 0;

}