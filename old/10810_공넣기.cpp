/*
https://www.acmicpc.net/problem/10810
문제번호: 10810
문제이름: 공 넣기
*/

#include <stdio.h>
//

int main() 
{
    int N,M,a,b,c;
    scanf("%d %d", &N, &M);
    int box[100]={};
    for (int j=0;j<M;j++)
    {
        scanf("%d %d %d",&a, &b, &c);
            for (int i=a-1;i<b;i++)
            {   
                box[i]=c;
            }
    }
    for (int k=0;k<N;k++)
    {
        printf("%d ", box[k]);
    }
    return 0;
}
