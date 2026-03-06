/*
https://www.acmicpc.net/problem/3052
문제번호: 3052
문제이름: 나머지
*/

#include <stdio.h>
//

int main() 
{
    int a, b[10], count=0;
    for (int i=0;i<10;i++)
    {
        scanf("%d", &a);
        b[i]=a%42;
    }
    for (int j=0;j<10;j++)
    {
        for (int k=j+1;k<10;k++)
        {
            if (b[j]==b[k])
            {
                b[k]=-1;
            }
        }
    }
    for (int i=0;i<10;i++)
    {
        if (b[i]>=0)
        {
        count +=1;        
        }
    }
    printf("%d", count);
    return 0;
}
