#include <stdio.h>

int main(void)
{
    char x;
    char y;
    char z;
    printf("Enter two characters : \n");
    scanf("%c %c", &x, &y);

    z = x + y;
    
    printf("The ASCII value of the first character is : %d\n", x);
    printf("The ASCII value of the second character is : %d\n", y);
    printf("The character of the sum '%c'+ '%c' is %c", x, y, z);

    return 0;
}
