/*
https://www.acmicpc.net/problem/2908
문제번호: 2908
문제이름: 상수
*/

#include <stdio.h>
#include <sstream>
#include <string>
#include <iostream>
using namespace std;

int main() 
{
	string x, y;
	cin >> x >> y;

    string bigger;
    
	for (int i = 2; i >= 0; i--) {
		if (x[i] > y[i]) {
			bigger = x; break;
		}
		else if (x[i] < y[i]) {
			bigger = y; break;
		}
	}

	cout << bigger[2] << bigger[1] << bigger[0];
	return 0;
}
