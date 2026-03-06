/*
https://www.acmicpc.net/problem/2753
문제번호: 2753
문제이름: 윤년
*/

#include <stdio.h>
//

int main() 
{
    int A;
    scanf("%d", &A);
    if (((A%4==0)&&(A%100!=0))||(A%400==0))
        printf("1");
    else
        printf("0");    
    return 0;
}