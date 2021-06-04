#include <stdio.h>

void ConvertDecimalToBinary(int *ptr)
{
    int i;
    int temp[4];

    for (i = 3; i >= 0; i--)
    {
        temp[i] = *ptr % 2;
        *ptr = *ptr / 2;
    }

    for (i = 0; i < 4; i++)
        printf("%d", temp[i]);
    printf("\n");
}

int main(void)
{
    int num;
    int i;

    printf("10진수 정수 입력: ");
    scanf("%d", &num);

    ConvertDecimalToBinary(&num);

    return 0;
}