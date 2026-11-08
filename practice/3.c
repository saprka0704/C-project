#include <stdio.h>
int main(void)
{
    char x, y;

    printf("두 개의 문자를 입력하시오. \n");
    scanf("%c %c", &x, &y);

    printf("첫번째 문자 코드값 : %d\n", x);
    printf("두번째 문자 코드값 : %d\n", y);
    printf("'%c'+'%c'의 문자는 %c\n", x, y, x+y);

    return 0;
}