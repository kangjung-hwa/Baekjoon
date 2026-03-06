/*
https://www.acmicpc.net/problem/10869
문제번호: 10869
문제이름: 사칙연산
*/

#include <stdio.h>
//

int main() 
{
    int a;
    int b;
    scanf("%d %d", &a, &b);
    printf("%d\n%d\n%d\n%d\n%d\n" , a+b, a-b, a*b, a/b, a%b);
    return 0;
}