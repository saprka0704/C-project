#include <stdio.h>
int main(void)
{
    int x;

    printf("The size of x : %zu\n",sizeof(x));

    printf("The size of character: %zu\n", sizeof(char));
    printf("The size of integer : %zu\n", sizeof(int));
    printf("The size of short: %zu\n", sizeof(short));
    printf("The size of long: %zu\n", sizeof(long));
    printf("The size of float : %zu\n", sizeof(float));
    printf("The size of double: %zu\n", sizeof(double));

    return 0;
}