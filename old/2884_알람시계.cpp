/*
https://www.acmicpc.net/problem/2884
문제번호: 2884
문제이름: 알람 시계
*/

#include <stdio.h>
//

int main() 
{
    int A,B;
    scanf("%d %d", &A, &B);
    if (B<45)
        if (A>0)
            printf("%d %d", A-1, B+60-45);
        else
            printf("%d %d", A+23, B+60-45);
    else
        printf("%d %d", A, B-45);
    
    return 0;
}