/*
https://www.acmicpc.net/problem/10818
문제번호: 10818
문제이름: 최소, 최대
*/

#include <stdio.h>
//

int main() 
{
    int a;
    scanf("%d", &a);
    
    int b[1000000];
    for (int j=0;j<a;j++)
    {
        scanf("%d ",&b[j]);
    }
    int min = b[0];
    int max = b[0];
    for (int i=0;i<a;i++)
    {
        if (b[i]<=min)
        {
            min = b[i];
        }
        else if (max<=b[i])
        {
            max = b[i];
        }   
    }
    printf("%d %d", min, max);
    return 0;
}
