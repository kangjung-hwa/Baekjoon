/*
https://www.acmicpc.net/problem/25314
문제번호: 25314
문제이름: 코딩체육과목
*/

#include <stdio.h>
//

int main() 
{
    int a;
    scanf("%d", &a);
    for (int i=1; i<=a/4; i++)
    {
        printf("long ");
    }
    printf("int");
    return 0;
}
