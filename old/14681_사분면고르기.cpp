/*
https://www.acmicpc.net/problem/14681
문제번호: 14681
문제이름: 사분면 고르기
*/

#include <stdio.h>
//

int main() 
{
    int A,B;
    scanf("%d\n%d", &A, &B);
    if (A>0 && B>0)
        printf("1");
    else if (A<0 && B>0)
        printf("2");
    else if (A<0 && B<0)
        printf("3");
    else
        printf("4");    
    return 0;
}