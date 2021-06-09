#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    int user, com;
    int win = 0, draw = 0;

    while (1)
    {
        printf("바위는 1, 가위는 2, 보는 3 : ");
        scanf("%d", &user);

        srand((int)time(NULL));
        com = rand() % 3 + 1;

        if (user == 1)
        {
            if (com == 1)
            {
                printf("당신은 바위 선택, 컴퓨터는 바위 선택, 비겼습니다! \n");
                draw++;
            }
            else if (com == 2)
            {
                printf("당신은 바위 선택, 컴퓨터는 가위 선택, 이겼습니다! \n");
                win++;
            }
            else
            {
                printf("당신은 바위 선택, 컴퓨터는 보 선택, 당신이 졌습니다! \n");
                break;
            }
        }

        else if (user == 2)
        {
            if (com == 1)
            {
                printf("당신은 가위 선택, 컴퓨터는 바위 선택, 당신이 졌습니다! \n");
                break;
            }
            else if (com == 2)
            {
                printf("당신은 가위 선택, 컴퓨터는 가위 선택, 비겼습니다! \n");
                draw++;
            }
            else
            {
                printf("당신은 가위 선택, 컴퓨터는 보 선택, 이겼습니다! \n");
                win++;
            }
        }

        else
        {
            if (com == 1)
            {
                printf("당신은 보 선택, 컴퓨터는 바위 선택, 이겼습니다! \n");
                win++;
            }
            else if (com == 2)
            {
                printf("당신은 보 선택, 컴퓨터는 가위 선택, 당신이 졌습니다! \n");
                break;
            }
            else
            {
                printf("당신은 보 선택, 컴퓨터는 보 선택, 비겼습니다! \n");
                draw++;
            }
        }
    }

    printf("게임의 결과 : %d승, %d무 \n", win, draw);

    return 0;
}