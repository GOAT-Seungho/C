#include <stdio.h>

void MaxAndMin(int array[], int len, int **maxP, int **minP);

int main(void)
{
    int *maxPtr;
    int *minPtr;
    int arr[5] = {7, 1, 5, 2, 9};

    MaxAndMin(arr, sizeof(arr) / sizeof(int), &maxPtr, &minPtr);

    printf("max : %d, min : %d \n", *maxPtr, *minPtr);

    return 0;
}

void MaxAndMin(int array[], int len, int **maxP, int **minP)
{
    int i;
    int *max, *min;

    max = min = &array[0];

    for (i = 1; i < len; i++)
    {
        if (*max < array[i])
            max = &array[i];
        if (array[i] < *min)
            min = &array[i];
    }

    *maxP = max;
    *minP = min;
}