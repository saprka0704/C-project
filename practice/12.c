#include <stdio.h>
int main(void)
{
    char ch1, ch2;

    printf("소문자를 입력하시오.\n");
    ch1 = getchar();

    if(ch1>='a' && ch1<='z')
    {
        ch2= ch1 - 32;
        printf("%c을(를) 대문자로 변환하면 %c\n", ch1, ch2);
    }
    else
    {
        printf("%c는 소문자가 아닙니다. \n", ch1);
    }

    return 0;
}
