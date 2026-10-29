#include <stdio.h>
#include <math.h>
int main(void)
{
    double a;
    double v;
    double s;
    double h;

    printf("Enter the edge length : \n");
    scanf("%lf", &a);

    v = sqrt(2)*a*a*a/12;
    s = sqrt(3)*a*a;
    h = sqrt(6)*a/3;

    printf("The volume of the regular tetrahedron is %lf\n",v);
    printf("The surface area of the regular tetrahedron is %lf\n",s);
    printf("The height of the regular tetrahedron is %lf",h);

    return 0;

}
