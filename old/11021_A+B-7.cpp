/*
https://www.acmicpc.net/problem/11021
문제번호: 11021
문제이름: A+B-7
*/
#include <stdio.h>

int main() {
    int a,b,c;
    scanf("%d\n",&a);
    for (int i=0;i<a;i++)
    {
        scanf("%d %d",&b,&c);
        printf("Case #%d: %d\n",i+1,b+c);
    }
    return 0;
}