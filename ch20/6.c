#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    srand((int)time(NULL));

    int i;
    int n1, n2, n3;
    int strike, ball;
    int count = 1;

    int com1 = rand() % 10;
    int com2 = rand() % 10;
    int com3 = rand() % 10;

    printf("Start Game ! \n");

    while (1)
    {
        printf("3개의 숫자 선택 : ");
        scanf("%d %d %d", &n1, &n2, &n3);

        strike = 0;
        ball = 0;

        if (n1 == com1 || n2 == com1 || n3 == com1)
        {
            if (n1 == com1)
                strike++;
            else
                ball++;
        }

        if (n1 == com2 || n2 == com2 || n3 == com2)
        {
            if (n2 == com2)
                strike++;
            else
                ball++;
        }

        if (n1 == com3 || n2 == com3 || n3 == com3)
        {
            if (n3 == com3)
                strike++;
            else
                ball++;
        }

        printf("%d번째 도전 결과 : %d strike, %d ball ! \n", count++, strike, ball);

        if (n1 == com1 && n2 == com2 && n3 == com3)
            break;
    }

    printf("\nGame Over ! \n");

    return 0;
}