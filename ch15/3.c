#include <stdio.h>

int main(void)
{
    int arr[10];
    int i, num;
    int o = 0;
    int e = 9;

    for (i = 0; i < 10; i++)
    {
        printf("입력: ");
        scanf("%d", &num);

        if (num % 2 == 0)
            arr[e--] = num;
        else
            arr[o++] = num;
    }

    printf("배열 요소의 출력 : ");
    for (i = 0; i < 10; i++)
        printf("%d ", arr[i]);
    printf("\n");

    return 0;
}