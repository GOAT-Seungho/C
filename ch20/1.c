#include <stdio.h>

void PrintArray(int arr[][4])
{
    int i, j;

    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
            printf("%4d", arr[i][j]);
        printf("\n");
    }
}

void RotateArrayRight90(int arr[][4])
{
    int i, j;
    int temp[4][4];

    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
            temp[j][3 - i] = arr[i][j];
    }

    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
            arr[i][j] = temp[i][j];
    }
}

int main(void)
{
    int arr2d[4][4];
    int i, j;
    int num = 1;

    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
            arr2d[i][j] = num++;
    }

    printf("원본 \n");
    PrintArray(arr2d);

    printf("\n\n");

    printf("오른쪽으로 90도 회전 \n");
    RotateArrayRight90(arr2d);
    PrintArray(arr2d);

    printf("\n\n");

    printf("오른쪽으로 90도 회전 \n");
    RotateArrayRight90(arr2d);
    PrintArray(arr2d);

    printf("\n\n");

    printf("오른쪽으로 90도 회전 \n");
    RotateArrayRight90(arr2d);
    PrintArray(arr2d);

    return 0;
}