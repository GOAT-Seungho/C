#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    int i;
    srand((int)time(NULL)); // 현재 시간을 이용해서 seed 설정
    for (i = 1; i < 3; i++)
        printf("주사위 %d의 결과 : %d \n", i, (rand() % 6) + 1);

    return 0;
}