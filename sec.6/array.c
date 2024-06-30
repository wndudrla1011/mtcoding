#include <stdio.h>
void changeArr(int *arr);

int main(void)
{
    int arr[] = {5, 10, 15};
    int *ptr = arr;
    for (int i = 0; i < sizeof(arr) / sizeof(int); i++)
    {
        printf("arr[%d] : %d\n", i, arr[i]);
    }

    for (int i = 0; i < sizeof(arr) / sizeof(int); i++)
    {
        printf("ptr[%d] : %d\n", i, ptr[i]);
    }

    printf("ptr을 통해 arr 값 변경\n");

    ptr[0] = 100;
    ptr[1] = 200;
    ptr[2] = 300;

    for (int i = 0; i < sizeof(arr) / sizeof(int); i++)
    {
        printf("arr[%d] : %d\n", i, *(arr + i)); // arr[i] == *(arr + i)
    }

    for (int i = 0; i < sizeof(arr) / sizeof(int); i++)
    {
        printf("ptr[%d] : %d\n", i, *(ptr + i));
    }

    // arr 주소 == arr[0] 주소
    printf("arr 자체의 주소 : %d\n", arr);
    printf("arr[0]의 주소 : %d\n", &arr[0]);

    printf("arr 자체의 값 : %d\n", *arr);
    printf("arr[0]의 값 : %d\n", arr[0]);

    // changeArr(arr);
    changeArr(&arr[0]);

    printf("변경된 arr 값\n\n");
    for (int i = 0; i < sizeof(arr) / sizeof(int); i++)
    {
        printf("arr[%d] : %d\n", i, arr[i]);
    }

    return 0;
}

void changeArr(int *arr)
{
    arr[2] = 50;
}