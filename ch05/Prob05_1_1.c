#include <stdio.h>

int main(void) {
    int lx, ly, rx, ry;
    int result;

    printf("좌 상단의 x, y 좌표 입력 : ");
    scanf("%d %d", &lx, &ly);
    printf("우 하단의 x, y 좌표 입력 : ");
    scanf("%d %d", &rx, &ry);

    result = (rx-lx) * (ry-ly);
    printf("%d", result);

    return 0;
}