#include <stdio.h>

int SquareByValue(int n)
{
    return n * n;
}

void SquareByReference(int *ptr)
{
    *ptr *= *ptr;
}

int main(void)
{
    int num;

    scanf("%d", &num);

    printf("%d \n", SquareByValue(num));

    SquareByReference(&num);
    printf("%d \n", num);

    return 0;
}