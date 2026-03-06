/*
https://www.acmicpc.net/problem/10812
문제번호: 10812
문제이름: 바구니 순서 바꾸기
*/

#include <stdio.h>
#include <sstream>
#include <string>
#include <iostream>
using namespace std;

int main() 
{
    int basket_num, test, s[100], o[100], start,end,mid;
    scanf("%d %d",&basket_num, &test);
	for (int i=0;i<basket_num;i++)
	{
	    s[i] = i+1;
	}
	for (int j=0;j<test;j++)
    {
        for (int k=0;k<basket_num;k++)
        {
            o[k]=s[k];
        }
        scanf("%d %d %d",&start, &end, &mid);
        s[start-1]=o[mid-1];
        for (int l=0;l<end-mid;l++)  
        {
            s[start+l]=o[mid+l];
        }
        for (int m=0;m<mid-start;m++)
        {
            s[start+end-mid+m]=o[start+m-1];
        }
    }
    for (int n=0;n<basket_num;n++)
    {
        printf("%d",s[n]);
    }
    return 0;
}
