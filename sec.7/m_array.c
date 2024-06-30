#include <stdio.h>

int main(void)
{
    int arr[][5] = {{1, 2, 3, 4, 5},
                    {1, 2, 3, 4, 5}};

    // sizeof(arr) : 배열 전체 크기 (10 * 4)bytes
    // sizeof(arr[0]) : 배열 한 줄 크기 (5 * 4)bytes
    for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
    {
        for (int j = 0; j < sizeof(arr[0]) / sizeof(int); j++)
        {
            if (j == sizeof(arr[0]) / sizeof(int) - 1)
                printf("arr[%d][%d] : %d ", i, j, arr[i][j]);
            else
                printf("arr[%d][%d] : %d, ", i, j, arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}