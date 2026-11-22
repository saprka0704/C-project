#include <stdio.h>
#include <math.h>//수학 함수 포함한 헤더파일 

int main(void)
{
    double v;

    while(1)//참인 경우
    {
        printf("실수값을 입력하시오");
        scanf("%lf", &v);
        if(v<0.0)
            break;// 음수가 입력될 경우 반복문 탈출
        printf("%f의 제곱근은 %f입니다.\n", v, sqrt(v));

    }
    return 0;
}