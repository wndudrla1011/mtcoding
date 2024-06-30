#include <stdio.h>

int main(void)
{
    /* for (int i = 0; i < 10; i++)
    {
        printf("Hello World\n");
    } */

    int i = 1;
    /*while (i++ <= 10)
    {
        printf("Hello World\n");
    } */

    do
    {
        printf("Hello World\n");
    } while (i++ < 10);

    return 0;
}