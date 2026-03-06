/*
https://www.acmicpc.net/problem/5622
문제번호: 5622
문제이름: 다이얼
*/

#include <stdio.h>
#include <sstream>
#include <string>
#include <iostream>
using namespace std;

int main() 
{
	string s;
	int time = 0;
	cin >> s;
    
    for (int i=0;i<s.length();i++)
    {
        if (s[i]=='A'||s[i]=='B'||s[i]=='C')
        {
            time += 3;
        }
        if (s[i]=='D'||s[i]=='E'||s[i]=='F')
        {
            time += 4;
        }
        if (s[i]=='G'||s[i]=='H'||s[i]=='I')
        {
            time += 5;
        }
        if (s[i]=='J'||s[i]=='K'||s[i]=='L')
        {
            time += 6;
        }
        if (s[i]=='M'||s[i]=='N'||s[i]=='O')
        {
            time += 7;
        }
        if (s[i]=='P'||s[i]=='Q'||s[i]=='R'||s[i]=='S')
        {
            time += 8;
        }
        if (s[i]=='T'||s[i]=='U'||s[i]=='V')
        {
            time += 9;
        }
        if (s[i]=='W'||s[i]=='X'||s[i]=='Y'||s[i]=='Z')
        {
            time += 10;
        }
    }
    printf("%d",time);
    return 0;
}
