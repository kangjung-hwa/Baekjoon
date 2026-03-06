/*
https://www.acmicpc.net/problem/15552
문제번호: 15552
문제이름: 빠른 A+B
*/
#include <stdio.h>

int main() {
    int a,b,c;
    scanf("%d\n",&a);
    for (int i=0;i<a;i++)
    {
        scanf("%d %d",&b,&c);
        printf("%d\n",b+c);
    }
    return 0;
}