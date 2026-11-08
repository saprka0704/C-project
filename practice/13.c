#include <stdio.h>
int main(void)
{
    char ch;
    printf("알파벳 소문자를 입력하시오.\n");
    ch =getchar();

    if(ch=='a'|| ch=='e'||ch=='i'||ch=='o'||ch=='u')
    {
        printf("%c은(는) 모음입니다.\n",ch);
    }
    else 
    { 
        printf("%c은(는) 모음이 아닙니다.\n", ch);
    }

    return 0;
}