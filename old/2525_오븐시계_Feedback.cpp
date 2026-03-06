/*
https://www.acmicpc.net/problem/2884
문제번호: 2525
문제이름: 오븐 시계
*/

#include <stdio.h>
//

int main() 
{
    int A,B,C;
    scanf("%d %d\n%d", &A,&B,&C);
    
    int minute_sum = (B+C);
    int minute = minute_sum % 60;

    int hour_sum = A + (minute_sum / 60);
    int hour = hour_sum % 24;

    printf("%d %d", hour, minute);    
    
    return 0;
}