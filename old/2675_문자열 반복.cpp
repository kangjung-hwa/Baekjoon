/*
https://www.acmicpc.net/problem/10809
문제번호: 2675
문제이름: 문자열 반복
*/

#include <stdio.h>
#include <iostream>
using namespace std;

int main() 
{
    string s;
    int test, re, len;
    scanf("%d",&test);
    for (int i=0;i<test;i++)
    {
        scanf("%d", &re);
        cin >> s;
        len = s.length();
        for (int j=0;j<len;j++)
        {
            for (int k=0;k<re;k++)
            {
                printf("%c",s[j]);                
            }
        }
        printf("\n");
    }
    return 0;
}
