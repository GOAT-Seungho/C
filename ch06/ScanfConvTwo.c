#include <stdio.h>

int main(void) {
    float num1;
    double num2;
    long double num3;

    printf("실수 입력 1 (e 표기법으로) : ");
    scanf("%f", &num1);
    printf("입력된 실수 %f \n", num1);

    printf("실수 입력 2 (e 표기법으로) : ");
    scanf("%lf", &num2);
    printf("입력된 실수 %f \n", num2);

    printf("실수 입력 3 (e 표기법으로) : ");
    scanf("%Lf", &num3);
    printf("입력된 실수 %Lf \n", num3);

    return 0;
}