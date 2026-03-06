/*
https://www.acmicpc.net/problem/10818
문제번호: 10818
문제이름: 최소, 최대
*/

#include <stdio.h>
//

int main() 
{
    int a,min,max=0;
    scanf("%d", &a);
    int b[100];
    for (int i=0;i<a;i++)
    {
        scanf("%d ",&b[i]);
        if (b[i]>max)
        {
            max = b[i];
        }
        else if (0<b[i] && b[i]<min)
        {
            min = b[i];
        }
    }
    printf("%d %d", min, max);
    return 0;
}