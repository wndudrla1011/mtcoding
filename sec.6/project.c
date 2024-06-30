#include <stdio.h>
#include <time.h>

int level;
int arrayFish[6];
int *cursor;

void initData();
void printFishes();
void decreaseWater(long elapsed);
int checkFishAlive();

int main(void)
{
    long start = 0;            // 게임 시작 시간
    long totalElapsedTime = 0; // 총 경과 시간
    long prevElapsedTime = 0;  // 직전 경과 시간(직전에 물을 준 시간 간격)

    int num; // 물을 줄 어항 번호
    initData();

    cursor = arrayFish; // 어항 접근

    start = clock(); // 현재 시간을 millisecond 단위로 반환
    while (1)
    {
        printFishes();
        printf("몇 번 어항에 물을 주시겠어요? ");
        scanf_s("%d", &num);

        if (num < 1 || num > 6)
        {
            printf("\n입력값이 잘못되었습니다.\n");
            continue;
        }

        totalElapsedTime = (clock() - start) / CLOCKS_PER_SEC;
        printf("총 경과 시간 %ld 초\n", totalElapsedTime);

        // 직전에 물을 준 시간 이후로 흐른 시간
        prevElapsedTime = totalElapsedTime - prevElapsedTime;
        printf("최근 경과 시간 : %ld 초\n", prevElapsedTime);

        // 어항의 물 감소/증발
        decreaseWater(prevElapsedTime);

        // 사용자가 입력한 어항에 물 채우기
        if (cursor[num - 1] <= 0)
            printf("%d번 물고기는 이미 죽었습니다... 물을 주지 않습니다.\n", num);
        else if (cursor[num - 1] < 100)
        {
            printf("%d번 어항에 물을 줍니다.\n\n", num);
            cursor[num - 1] += 1;
        }

        // 20초마다 Level Up
        if (totalElapsedTime / 20 > level - 1)
        {
            level++;
            printf(" *** LEVEL UP! %d -> %d *** \n\n", level - 1, level);

            if (level == 5)
            {
                printf("\n\n You are Master Level\n <Game Clear>\n");
                exit(0);
            }
        }

        // 모든 물고기의 생존 확인
        if (checkFishAlive() == 0)
        {
            printf("모든 물고기가 죽었습니다.\n");
            exit(0);
        }

        prevElapsedTime = totalElapsedTime; // 간격을 구해야 하기 때문에 갱신
    }

    return 0;
}

void initData()
{
    level = 1; // 게임 레벨 1 ~ 5
    for (int i = 0; i < 6; i++)
    {
        arrayFish[i] = 100; // 어항의 물높이 (0 ~ 100)
    }
}

void printFishes()
{
    printf("%3d번 %3d번 %3d번 %3d번 %3d번 %3d번\n", 1, 2, 3, 4, 5, 6);
    for (int i = 0; i < 6; i++)
    {
        printf(" %4d ", arrayFish[i]);
    }
    printf("\n\n");
}

void decreaseWater(long elapsed)
{
    for (int i = 0; i < 6; i++)
    {
        arrayFish[i] -= (level * 3 * (elapsed)); // 3은 임의값
        if (arrayFish[i] < 0)
            arrayFish[i] = 0;
    }
}

int checkFishAlive()
{
    for (int i = 0; i < 6; i++)
    {
        if (arrayFish[i] > 0)
            return 1;
    }

    return 0;
}