/*
https://www.acmicpc.net/problem/2739
문제번호: 2739
문제이름: 구구단
*/

#include <stdio.h>
//

int main() 
{
    int a;
    scanf("%d", &a);
    for (int i=1; i<10; i++)
    {
        printf("%d * %d = %d\n", a, i, a*i);
    }
    return 0;
}
