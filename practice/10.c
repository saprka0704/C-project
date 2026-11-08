#include <stdio.h>
int main(void)
{
    int num;

    printf("정수 입력: \n");
    scanf("%d", &num);

    printf("입력한 정수는 %d 이고, 연산의 결과는 %d\n", num, num!=num);

    return 0;

}