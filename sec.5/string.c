#include <stdio.h>

int main(void)
{
    char str[10];
    printf("입력 >> ");
    fgets(str, sizeof(str), stdin);

    printf("%s", str);

    return 0;
}