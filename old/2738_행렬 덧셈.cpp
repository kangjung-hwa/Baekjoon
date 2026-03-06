/*
https://www.acmicpc.net/problem/2738
문제번호: 2738
문제이름: 행렬 덧셈
*/

#include <stdio.h>

int main() {
    int a, b,c;
    scanf("%d %d",&a,&b);
    int array_a[100][100];
    int array_b[100][100];
    int array_c[100][100];
    for (int i=0;i<a;i++)
    {
        for (int j=0;j<b;j++)
        {
            scanf("%d",&c);
            array_a[i][j] = c; 
        }
    }
    for (int i=0;i<a;i++)
    {
        for (int j=0;j<b;j++)
        {
            scanf("%d",&c);
            array_b[i][j] = c; 
        }
    }
    for (int i=0;i<a;i++)
    {
        for (int j=0;j<b;j++)
        {
            array_c[i][j] = array_a[i][j]+array_b[i][j];
            printf("%d ",array_c[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}
