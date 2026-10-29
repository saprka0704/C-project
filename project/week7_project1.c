#include <stdio.h>
int main(void)
{
    char ch;
    char ch1;
    printf("Enter a character: \n");

    ch = getchar();
    if(ch>='a'&& ch<='z')
        {
            ch1 = ch - 32;
            printf("Changing the lowercase %c to the uppercase %c\n", ch, ch1);
        }
    else 
        {
            printf("%c is not a lowercase character.", ch);
        }    
    return 0;
    
}