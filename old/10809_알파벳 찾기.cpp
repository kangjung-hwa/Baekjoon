/*
https://www.acmicpc.net/problem/10809
문제번호: 10809
문제이름: 알파벳 찾기
*/

#include <stdio.h>
#include <iostream>
using namespace std;

int main() 
{
    string s;
    cin >> s;
    int lens = s.length();
    int idx;
    int out[26];
    for (int i=0;i<26;i++)
    {
        out[i]=-1;
        // printf("%d ",out[i]);
    }
    for (int j=0;j<lens;j++)
    {
        idx = int(s[j]);
        // printf("%d",idx);
        if (out[idx-97]==-1)
        {
            out[idx-97]=j;
        }
    }
    for (int i=0;i<26;i++)
    {
        printf("%d ",out[i]);
    }
    return 0;
}
