#include <stdio.h>
int main(void)
{
    double w, h, area, perimeter;
    
    printf("Enter the width and height of the rectangle: \n");
    
    scanf("%lf %lf", &w, &h);
    
    area = w*h;
    perimeter = 2*(w+h);

    printf("The area of the rectangle : %lf\nThe perimeter of the rectangle : %lf\n", area, perimeter);
    return 0;
}