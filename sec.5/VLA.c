#include <stdio.h>

int main(void)
{
    int len;
    printf("몇 개를 저장하시겠습니까? : ");
    scanf("%d", &len);

    int array[len];
    for (int i = 1; i <= len; i++)
    {
        array[i] = i;
        printf("%d ", array[i]);
    }

    return 0;
}