/*
https://www.acmicpc.net/problem/25304
문제번호: 25304
문제이름: 영수증
*/
#include <stdio.h>

int main() {
    int a,b,c,d,e;
    e = 0;
    scanf("%d\n%d",&a,&b);
    for (int i=0;i<b;i++)
    {
        scanf("%d %d",&c,&d);
        e += c*d;
    }
    if (a==e)
    {
        printf("Yes");
        
    }
    else
    {printf("No");}
    return 0;
}