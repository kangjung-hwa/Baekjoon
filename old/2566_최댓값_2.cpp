/*
https://www.acmicpc.net/problem/2566
문제번호: 2566
문제이름: 최댓값_2
*/

#include <stdio.h>

int main() {
    int a,index_i=0,index_j=0,max = -1;
    for (int i=0;i<9;i++)
    {
        for (int j=0;j<9;j++)
        {
            scanf("%d",&a);
            if (a>max)
            {
                max = a;
                index_i=i;
                index_j = j;
            }
        }
    }
    printf("%d\n%d %d", max, index_i+1, index_j+1);
    return 0;
}
