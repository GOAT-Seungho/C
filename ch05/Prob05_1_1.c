#include <stdio.h>

int main(void) {
    int lx, ly, rx, ry;
    int result;

    printf("�� ����� x, y ��ǥ �Է� : ");
    scanf("%d %d", &lx, &ly);
    printf("�� �ϴ��� x, y ��ǥ �Է� : ");
    scanf("%d %d", &rx, &ry);

    result = (rx-lx) * (ry-ly);
    printf("%d", result);

    return 0;
}