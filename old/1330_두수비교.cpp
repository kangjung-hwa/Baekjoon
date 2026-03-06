/*
https://www.acmicpc.net/problem/1330
문제번호: 1330
문제이름: 두수비교
*/

#include <stdio.h>
//

int main() 
{
    int A,B;
    scanf("%d %d", &A, &B);
    if (A<B)
        printf("<");
    else if (A>B)
        printf(">");
    else
        printf("==");    
    return 0;
}