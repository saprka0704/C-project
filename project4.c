#include <stdio.h>
int main(void)
{
    int tot_sec;
    int min;
    int hour;
    int day;
    int sec;

    printf("Enter an amount of seconds : \n");
    scanf("%d", &tot_sec);

    sec = tot_sec%60;
    min = tot_sec/60%60;
    hour = tot_sec/(60*60)%24;
    day = tot_sec/(60*60*24);


    printf("%d seconds is equivalent to %d days, %d hours, %d minutes and %d seconds", tot_sec, day, hour, min, sec);

    return 0;

}
