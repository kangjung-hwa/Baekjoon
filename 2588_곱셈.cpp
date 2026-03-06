/*
https://www.acmicpc.net/problem/2588
문제번호: 2588
문제이름: 곱셈
*/

#include <stdio.h>
//

int main() 
{
    int A,B;
    scanf("%d\n%d", &A, &B);
    printf("%d\n", A*((B%100)%10));
    printf("%d\n", A*((B%100)/10));
    printf("%d\n", A*(B/100));
    printf("%d\n", A*((B%100)%10)+A*((B%100)/10)*10+A*(B/100)*100);
    return 0;
}