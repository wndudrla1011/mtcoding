#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *referee(char *my, int AI)
{
    if (strcmp(my, "가위") == 0)
    {
        if (AI == 0)
            return "Draw!";
        else if (AI == 1)
            return "AI win!";
        else
            return "You Win!";
    }
    else if (strcmp(my, "바위") == 0)
    {
        if (AI == 0)
            return "You Win!";
        else if (AI == 1)
            return "Draw!";
        else
            return "AI win!";
    }
    else if (strcmp(my, "보") == 0)
    {
        if (AI == 0)
            return "AI win!";
        else if (AI == 1)
            return "You Win!";
        else
            return "Draw!";
    }
}

int main(void)
{
    // 가위 0, 바위 1, 보 2
    int myTurn;  // 0 1 2
    char my[10]; // 가위 or 바위 or 보

    printf("가위 0 바위 1 보 2 ! => ");
    scanf("%d", &myTurn);

    if (myTurn == 0)
    {
        printf("나: 가위\n");
        strcpy_s(my, 10, "가위");
    }
    else if (myTurn == 1)
    {
        printf("나: 바위\n");
        strcpy_s(my, 10, "바위");
    }
    else if (myTurn == 2)
    {
        printf("나: 보\n");
        strcpy_s(my, 10, "보");
    }
    else
    {
        printf("잘못 입력하셨습니다.\n");
        return 0;
    }

    int AI = rand() % 3;
    switch (AI)
    {
    case 0:
        printf("AI : 가위\n");
        break;
    case 1:
        printf("AI : 바위\n");
        break;
    case 2:
        printf("AI : 보\n");
        break;
    default:
        printf("에러\n");
        break;
    }

    printf(referee(my, AI));

    return 0;
}