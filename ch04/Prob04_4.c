#include <stdio.h>

int main(void) {
    int num1 = -3;
    int num2 = 5;

    int result1 = ~num1 + 1;
    int result2 = ~num2 + 1;

    printf("%d 의 부호를 바꾼 결과 : %d \n", num1, result1);
    printf("%d 의 부호를 바꾼 결과 : %d \n", num2, result2);

    return 0;
}