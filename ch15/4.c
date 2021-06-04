#include <stdio.h>
#include <string.h>

int main(void)
{
    char word[20];
    int len, i;

    printf("문자열 입력: ");
    scanf("%s", word);

    len = strlen(word);

    for (i = 0; i < len; i++)
    {
        if (word[i] != word[len - 1 - i])
        {
            printf("Not Palindrome. \n");
            return 0;
        }
    }

    printf("Palinedrome. \n");

    return 0;
}