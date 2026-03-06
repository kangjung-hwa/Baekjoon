/*
https://www.acmicpc.net/problem/3052
문제번호: 3052
문제이름: 나머지
*/

#include <stdio.h>

#define NUM_COUNT (10)

void GetInput(int* b)
{
    int a;

    for (int i = 0; i < NUM_COUNT; i++)
    {
        scanf("%d", &a);
        b[i]=a%42;
    }
}

int Solve(int* b)
{
    /*
    1.   Index 0부터 10까지 도는데
    2.   중복 체크 안된 것만 (false)
    3-1. count+=1
    3-2. 다음 index부터 끝까지 돌면서 같은 숫자 다 중복체크하기 (true)
    */

    bool abChecklist[NUM_COUNT] = { false, };
    int count = 0;

    // 1
    for (int i = 0; i < NUM_COUNT; i++)
    {
        // 2
        if (false == abChecklist[i])
        {
            // 3-1
            count++;

            int compare_num = b[i];
            abChecklist[i] = true;

            // 3-2
            for (int j = i + 1; j < NUM_COUNT; j++)
            {
                if (b[j] == compare_num)
                {
                    abChecklist[j] = true;
                }
            }
        }
    }

    return count;
}

int main() 
{
    int b[10];

    GetInput(b);

    int count = Solve(b);

    printf("%d", count);

    return 0;
}
