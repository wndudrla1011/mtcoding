#include <stdio.h>

int main(void)
{
    for (int i = 1; i < 5; i++)
    {
        printf("%d번째 수행\n", i);
        if (i == 4)
            goto next;
    }

next:
    printf("루프를 빠져나왔습니다.");
}