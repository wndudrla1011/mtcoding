#include <stdio.h>

int main()
{
    /* int age = 12;
    printf("%d\n", age);
    age = 13;
    printf("%d\n", age); */

    printf("1\n");
    // printf("2\n"); Single Comment
    printf("3\n");

    /*-----------------정수형 변수---------------------*/

    float f = 46.5;
    printf("%.1f\n", f);
    double d = 4.428;
    printf("%.2lf\n", d); // EOM 가능성 있어 double은 %lf

    /*-----------------실수---------------------*/

    const int YEAR = 1994;
    printf("태어난 년도 : %d\n", YEAR);
    // YEAR = 2000; -> error

    /*-----------------상수---------------------*/

    int add = 3 + 7;
    printf("3 + 7 = %d\n", add);
    printf("%d + %d = %d\n", 3, 7, 3 + 7);

    /*-----------------printf---------------------*/

    /* int input;
    printf("정수 입력하세요 : ");
    scanf_s("%d", &input);
    printf("입력한 값은 %d 입니다.", input); */

    char str[256];
    printf("문자열을 입력하세요 : ");
    scanf_s("%s", str);
    printf("=> %s\n", str);
}