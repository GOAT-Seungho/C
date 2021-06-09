#include <stdio.h>

int main(void)
{
    int num;
    int idx, i, j;
    int s = 0;
    int w = -1;
    int inc = 1;
    int val = 0;
    int snailArray[50][50];

    printf("숫자를 입력하시오 : ");
    scanf("%d", &num);
    idx = num;

    while (1)
    {
        for (i = 0; i < idx; i++) // 가로 단위 그림
        {
            w += inc;
            snailArray[s][w] = ++val;
        }

        idx--;

        if (val == num * num)
            break;

        for (i = 0; i < idx; i++)
        {
            s += inc;
            snailArray[s][w] = ++val;
        }

        inc *= -1;
    }

    // 출력

    for (i = 0; i < num; i++)
    {
        for (j = 0; j < num; j++)
            printf("%5d", snailArray[i][j]);
        printf("\n");
    }

    return 0;
}