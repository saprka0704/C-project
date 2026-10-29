#include <stdio.h>
int main(void)
{
    char ch;
    printf("Enter an lowercase character: \n");

    ch = getchar();

    if(ch == 'a' || ch=='e' || ch=='i'|| ch=='o'|| ch=='u')
        {
            printf("%c is a vowel.", ch);
        }
    else
        {
            printf("%c is not a vowel.", ch);
        }
    
    return 0;

}