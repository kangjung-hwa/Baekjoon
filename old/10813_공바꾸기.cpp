/*
https://www.acmicpc.net/problem/10813
문제번호: 10813
문제이름: 공 바꾸기
*/

#include <stdio.h>
//

int main() 
{
    int N,M,a,b,c;
    scanf("%d %d", &N, &M);
    int box[100]={};
    for (int i=1;i<=N;i++)
    {
        box[i]=i;
    }
    for (int j=0;j<M;j++)
    {
        scanf("%d %d",&a, &b);
        c = box[a];
        box[a]=box[b];
        box[b]=c;
    }
    for (int k=1;k<N+1;k++)
    {
        printf("%d ", box[k]);
    }
    return 0;
}
