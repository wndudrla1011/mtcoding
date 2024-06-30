#include <stdio.h>

int main(void)
{
    int size;
    printf("몇 개를 저장하시겠습니까? : ");
    scanf_s("%d", &size);

    int *array = (int *)malloc(sizeof(int) * size);

    for (int i = 0; i < size; i++)
    {
        array[i] = i;
        printf("array[%d]: %d\n", i, array[i]);
    }

    free(array);

    return 0;
}