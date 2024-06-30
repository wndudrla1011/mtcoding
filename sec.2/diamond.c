#include <stdio.h>

int main(void)
{
    int input;
    printf("가장 긴 변의 길이를 입력하세요 >>> ");
    scanf("%d", &input);

    for (int i = 1; i <= input; i++)
    {
        for (int j = input; j >= i; j--)
            printf(" ");
        for (int j = 1; j < i * 2; j++)
            printf("*");
        printf("\n");

        if (i == input)
        {
            for (int i = input - 1; i >= 1; i--)
            {
                for (int j = input; j >= i; j--)
                    printf(" ");
                for (int j = 1; j < i * 2; j++)
                    printf("*");
                printf("\n");
            }
        }
    }
}