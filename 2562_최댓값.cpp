/*
https://www.acmicpc.net/problem/2562
문제번호: 2562
문제이름: 최댓값
*/

#include <stdio.h>
//

int main() 
{
    int b[9];
    for (int j=0;j<9;j++)
    {
        scanf("%d\n",&b[j]);
    }
    int max = -1;
    int index_i;
    for (int i=0;i<9;i++)
    {
        if (max<=b[i])
        {
            max = b[i];
            index_i = i+1;
        }   
    }
    printf("%d\n%d", max, index_i);
    return 0;
}
