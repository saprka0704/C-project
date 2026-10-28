#include <stdio.h>
#include <math.h>

int main(void)
{
    int x, y;
double a, b;

printf("Enter two integers x,y. \n");
scanf("%d %d", &x, &y);

a = (0.3 * 3) + 0.1;
b = 1;

printf("The result of x == y : %d \n", x == y);
printf("The result of x != y : %d \n", x != y);
printf("The result of x <= y : %d \n", x <= y);
printf("The result of x >= y : %d \n\n", x >= y);

printf("The result of a == b : %d\n", a == b);
printf("The result of fabs(a-b)<0.0001 : %d", fabs(a - b) < 0.0001);

return 0;

}