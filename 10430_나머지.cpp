/*
https://www.acmicpc.net/problem/10430
문제번호: 10430
문제이름: 나머지
*/

#include <stdio.h>
//

int main() 
{
    int A,B,C;
    scanf("%d %d %d", &A, &B, &C);
    printf("%d\n", (A+B)%C);
    printf("%d\n", ((A%C) + (B%C))%C);
    printf("%d\n", (A*B)%C);
    printf("%d\n", ((A%C) * (B%C))%C);
    return 0;
}