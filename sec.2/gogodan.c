#include <stdio.h>

int main(void)
{
    for (int i = 2; i < 10; i++)
    {
        printf("%d단\n", i);
        printf("-------------------\n");
        for (int j = 1; j < 10; j++)
        {
            printf("%d x %d = %d\n", i, j, i * j);
        }
        printf("*********%d단 종료*********\n", i);
    }
}