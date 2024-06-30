#include <stdio.h>

int main(void)
{
    int a = 1;
    int b = 2;
    int c = 3;

    printf("a 주소: %d, 값: %d\n", &a, a);
    printf("b 주소: %d, 값: %d\n", &b, b);
    printf("c 주소: %d, 값: %d\n", &c, c);

    int *mission_man;
    mission_man = &a;
    printf("mission_man 방문 주소 : %d, 값: %d\n", mission_man, *mission_man);

    mission_man = &b;
    printf("mission_man 방문 주소 : %d, 값: %d\n", mission_man, *mission_man);

    mission_man = &c;
    printf("mission_man 방문 주소 : %d, 값: %d\n", mission_man, *mission_man);

    mission_man = &a;
    *mission_man = *mission_man * 3;
    printf("변경할 값이 저장된 주소 : %d, 변경된 값: %d\n", mission_man, *mission_man);

    int *spy = mission_man;
    printf("\n... spy is working\n\n");

    spy = &a;
    *spy = *spy * 2;
    printf("spy 방문 주소 : %d, 값: %d\n", spy, *spy);

    printf("a 주소: %d, 값: %d\n", &a, a);
    printf("b 주소: %d, 값: %d\n", &b, b);
    printf("c 주소: %d, 값: %d\n", &c, c);

    printf("mission_man의 주소: %d\n", mission_man);
    printf("spy의 주소: %d\n", spy);

    return 0;
}