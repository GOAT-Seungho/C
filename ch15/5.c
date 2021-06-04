#include <stdio.h>

void BubbleSort(int ary[], int len);

int main(void)
{
    int arr[7];
    int i;

    for (i = 0; i < 7; i++)
    {
        printf("입력 : ");
        scanf("%d", &arr[i]);
    }

    BubbleSort(arr, 7);

    for (i = 0; i < 7; i++)
        printf("%d ", arr[i]);
    printf("\n");

    return 0;
}

void BubbleSort(int ary[], int len)
{
    int i, j, temp;

    for (i = 0; i < len - 1; i++)
    {
        for (j = 0; j < len - 1 - i; j++)
        {
            if (ary[j] < ary[j + 1])
            {
                temp = ary[j];
                ary[j] = ary[j + 1];
                ary[j + 1] = temp;
            }
        }
    }
}