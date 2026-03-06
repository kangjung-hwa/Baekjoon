/*
https://www.acmicpc.net/problem/10811
문제번호: 10811
문제이름: 바구니 뒤집기
*/

#include <stdio.h>

int main() 
{
    int basket_num,change_num,start,end,basket[100],original[100];
    scanf("%d %d", &basket_num, &change_num);
    for (int i=0;i<basket_num;i++)
    {
        basket[i]=i+1;
    }
    for (int j=0;j<change_num;j++)
    {
        for (int l=0;l<basket_num;l++)
        {
            original[basket_num-l-1]=basket[l];
        }
        // for (int s=0;s<basket_num;s++)
        // {
        //     printf("%d",original[s]);
        // }
        scanf("%d %d", &start, &end);
        for (int k=start-1;k<end;k++)
        {
            basket[k]=original[k];
        }
        // for (int s=0;s<basket_num;s++)
        // {
        //     printf("%d",basket[s]);
        // }
    }
    for (int n=0;n<basket_num;n++)
    {
        printf("%d", basket[n]);
    }
    return 0;
}
