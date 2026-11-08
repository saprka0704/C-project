#include <stdio.h>
int main(void)
{
    char ch, ltch;

    printf("문자를 입력하시오.\n");
    ch = getchar();

    if (ch>='A'&& ch<='Z')
    {
        ltch = ch + 32;
        printf("%c를 소문자로 변환하면 %c", ch, ltch);
    }
    else
    {
        ltch = ch -32;
        printf("%c를 대문자로 변환하면 %c", ch, ltch);
    }
    

    return 0;
}