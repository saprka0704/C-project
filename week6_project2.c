#include <stdio.h>
int main(void)
{
    char ch;
    char ch1;
    printf("Enter a character: \n");

    ch = getchar();
    if(ch>='A'&& ch<='Z')
        {
            ch1 = ch + 32;
            printf("Changing the uppercase %c to the lowercase %c\n", ch, ch1);
        }
    else 
        {
            ch1 = ch - 32;
            printf("Changing the lowercase %c to the uppercase %c", ch, ch1);
        }    
    return 0;
    
}