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
    
    int minute_sum = B+C;
    if (minute_sum/60 >= 1)
    {
        if (minute_sum/60+A<24)
        {
            printf("%d %d", minute_sum/60+A, minute_sum%60);
        }
        else 
        {          
            printf("%d %d", minute_sum/60+A-24, minute_sum%60);
        }
    }
    else
    {    
        printf("%d %d", A, minute_sum);
    }
    return 0;
}
