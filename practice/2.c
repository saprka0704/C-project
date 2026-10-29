/*알고리즘
기호상수를 통해 파이 정의.
반지름과 높이, 부피 실수형 변수로 정의.
반지름과 높이 입력받음.
부피 계산. 
부피 출력.
*/
#include <stdio.h>
#define Pi 3.141592
int main(void)
{
    double r, h, V1, V2;

    printf("반지름 r을 입력하시오. \n");
    scanf("%lf", &r);

    printf("높이 h를 입력하시오.\n");
    scanf("%lf", &h);

    V1 = 1.0/2*Pi*r*r*h;
    V2 = 4.0/3*Pi*r*r*r;

    printf("v1 = %lf\nv2 = %lf\n", V1, V2);

    return 0;    
}
