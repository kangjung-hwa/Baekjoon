/*
https://www.acmicpc.net/problem/8393
문제번호: 8393
문제이름: 합
*/

#include <stdio.h>
//

int main() 
{
    int a;
    int b=0;
    scanf("%d", &a);
    for (int i=0; i<=a; i++)
    {
        b += i;
    }
    printf("%d",b);
    return 0;
}
