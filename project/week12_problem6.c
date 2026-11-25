//실습문제6 : 삼각형의 밑변과 높이 입력받고, 넓이를 구하는 함수 프로그램 작성
#include <stdio.h>

double triangle_area(double a, double b)
{
    return 0.5*a*b;
}

int main(void)
{
    double b, h, area;

   printf("밑변, 높이 입력: \n");
   scanf("%lf %lf",&b, &h);
   
   area = triangle_area(b, h);

   printf("삼각형의 면적 = %lf\n", area);

   return 0;

}