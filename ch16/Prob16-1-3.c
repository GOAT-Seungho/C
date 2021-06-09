#include <stdio.h>

int main(void)
{
    int i, j, sum;
    int arr[5][5];

    for (i = 0; i < 4; i++)
    {
        sum = 0;
        for (j = 0; j < 4; j++)
        {
            printf("성적 입력 : ");
            scanf("%d", &arr[i][j]);
            sum += arr[i][j];
        }
        arr[i][4] = sum;
    }

    for (i = 0; i < 5; i++)
    {
        sum = 0;
        for (j = 0; j < 4; j++)
        {
            sum += arr[j][i];
        }
        arr[4][i] = sum;
    }

    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}