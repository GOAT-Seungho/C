#include <stdio.h>

void PrintOdd(int *ptr)
{
    int i;
    printf("홀수 출력: ");
    for (i = 0; i < 10; i++)
    {
        if (ptr[i] % 2 != 0)
        {
            printf("%d", ptr[i]);
            if (i < 8)
                printf(", ");
        }
    }
    printf("\n");
}

void PrintEven(int *ptr)
{
    int i;
    printf("짝수 출력: ");
    for (i = 0; i < 10; i++)
    {
        if (ptr[i] % 2 == 0)
        {
            printf("%d", ptr[i]);
            if (i < 8)
                printf(", ");
        }
    }
    printf("\n");
}

int main(void)
{
    int arr[10];
    int i;

    printf("총 10개의 숫자 입력 \n");
    for (i = 0; i < 10; i++)
    {
        printf("입력: ");
        scanf("%d", &arr[i]);
    }

    PrintOdd(arr);
    PrintEven(arr);

    return 0;
}