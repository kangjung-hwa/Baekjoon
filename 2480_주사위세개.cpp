/*
https://www.acmicpc.net/problem/2480
문제번호: 2480
문제이름: 주사위 세개
*/

#include <stdio.h>
#include <algorithm>
using namespace std;
//

int main() 
{
    int A,B,C;
    scanf("%d %d\n%d", &A,&B,&C);
    
    if (A==B && B==C) //다 같음
        printf("%d", 10000+A*1000);
    else if (A==B||B==C) //두개
        printf("%d", 1000+B*100);
    else if (C==A) //두개
        printf("%d", 1000+C*100);
    else
        printf("%d", max(A,max(B,C))*100);
    
    return 0;
}
