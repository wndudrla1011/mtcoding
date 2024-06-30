#include <stdio.h>

int main(void)
{
    int height;
    printf("직각 삼각형 높이를 정해주세요 >>>");
    scanf("%d", &height);

    for (int i = 1; i <= height; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    printf("삼각형 높이를 정해주세요 >>>");
    scanf("%d", &height);

    for (int i = 1; i <= height; i++) // 행
    {
        for (int j = height - i; j >= 1; j--)
            printf(" ");
        for (int j = 1; j < i * 2; j++)
            printf("*");
        printf("\n");
    }

    printf("역삼각형 높이를 정해주세요 >>>");
    scanf("%d", &height);

    for (int i = height; i >= 1; i--) // 행
    {
        for (int j = height; j > i; j--)
            printf(" ");
        for (int j = 1; j < i * 2; j++)
            printf("*");
        printf("\n");
    }
}