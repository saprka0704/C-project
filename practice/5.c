/*알고리즘
초 = 총 시간 % 60
일 = 총 시간/(60*60*24)
분 = 총 시간/60%60
시간 = 총 시간 
*/

#include <stdio.h>
int main (void)
{
    int tot_sec, day, hour, min, sec;

    printf("초를 입력: \n");
    scanf("%d" , &tot_sec);

    sec = tot_sec % 60;
    min = tot_sec / 60 % 60;
    hour= tot_sec / 60 / 60 % 24;
    day = tot_sec / 60 / 60 / 24;

    printf("%d초는 %d일 %d시간 %d분 %d초", tot_sec, day, hour, min, sec);
    
    return 0;

}