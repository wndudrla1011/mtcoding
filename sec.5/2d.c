#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int row, col;
    printf("박스 세로 길이 : ");
    scanf_s("%d", &row);

    printf("박스 가로 길이 : ");
    scanf_s("%d", &col);

    int **arr = (int **)malloc(sizeof(int) * row); // 세로 길이 할당

    // 가로 길이 할당
    for (int i = 0; i < row; i++)
    {
        arr[i] = (int *)malloc(sizeof(int) * col);
    }

    // 값 할당
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            arr[i][j] = i + j;
        }
    }

    // 2차원 출력
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("arr[%d][%d]: %d ", i, j, arr[i][j]);
        }
        printf("\n");
    }

    // 메모리 해제
    for (int i = 0; i < row; i++)
    {
        free(arr[i]);
    }

    free(arr);
}