#include<iostream>

/*
빙고게임
1. 5 * 5
2. 1~25
3. 만약에 2를 입력을하면
ㄴ 해당 숫자를 특수 기호로 바꾼다. * # 
ㄴ 체크를 가로 세로 대각선
1 2 3 4 5
6 7 8 9 10
11 12 13 14 15
16 17 18 19 20
21 22 23 24 25
[0] 번째
[6] 번째
빙고가 3줄 이상

플레이어 컴퓨터
*/

int Random(int arr[][5]);
int comRandom(int arr[25]);

void PlayerPrint(int arr[][5]);
void ComPrint(int arr[][5]);

int Check(int arr[][5], int checknum);

int ComCheck(int arr[][5], int checknum[25], int time);
int ComCheck2(int arr[][5], int checknum[25], int time);

bool Playing(int arr1[][5], int arr2[][5], int com[25], int time);

int main()
{
    srand(time(NULL));

    int playerBingo[5][5];
    int comBingo[5][5];
    int comNum[25];
    int random[25];
    bool playing = true;
    int playerNum;
    int time=1;
    

    Random(playerBingo);
    Random(comBingo);
    comRandom(random);

    PlayerPrint(playerBingo);
    ComPrint(comBingo);

    while (Playing(playerBingo, comBingo, random, time));

    std::cout << "게임이 종료되었습니다" << std::endl; 
}


int Random(int arr[][5])
{
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            arr[i][j] = (5*i)+(j+1);
        }
    }

    int dest, dest2, sour, sour2, temp;

    for (int i = 0; i < 10000; i++)
    {
        dest = rand() % 5;
        sour = rand() % 5;
        dest2 = rand() % 5;
        sour2 = rand() % 5;

        temp = arr[dest][sour];
        arr[dest][sour] = arr[dest2][sour2];
        arr[dest2][sour2] = temp;
    }
    
    return arr[5][5];

}

int comRandom(int arr[25])
{
   
        for (int i = 0; i < 25; i++)
        {
            arr[i] = i + 1;
        }

        int dest, sour, temp;
        for (int i = 0; i < 1000; i++)
        {
            dest = rand() % 25;
            sour = rand() % 25;

            temp = arr[dest];
            arr[dest] = arr[sour];
            arr[sour] = temp;
        }

        return arr[25];
    
}

void PlayerPrint(int arr[][5])
{
    std::cout << "플레이어 빙고" << std::endl;
    std::cout << "------------------------------------------" << std::endl;
    for (int i = 0; i < 5; i++)
    {
        
        for (int j = 0; j < 5; j++)
        {
            if (j == 0) std::cout << "| ";
                std::cout << arr[i][j] << "\t";
            if (j == 4) std::cout << " |";
        }
        std::cout << std::endl;
    }
    std::cout << "------------------------------------------" << std::endl;
}

void ComPrint(int arr[][5])
{
    std::cout << "컴퓨터 빙고" << std::endl;
    std::cout << "------------------------------------------" << std::endl;
    for (int i = 0; i < 5; i++)
    {

        for (int j = 0; j < 5; j++)
        {
            if (j == 0) std::cout << "| ";
            std::cout << arr[i][j] << "\t";
            if (j == 4) std::cout << " |";
        }
        std::cout << std::endl;
    }
    std::cout << "------------------------------------------" << std::endl;
}

int PlayerCheck(int arr[][5], int checknum)
{
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (checknum == arr[i][j])
            {
                arr[i][j] = 0;
            }
        }
    }
    return arr[5][5];
}

int ComCheck(int arr[][5], int checknum[25], int time)
{
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            for (int k = 0; k < time; k++)
            {
                if (checknum[k] == arr[i][j])
                {
                    std::cout << "컴퓨터 선택 : " << checknum[k] << std::endl;
                    arr[i][j] = 0;
                }
            }
        }
    }
    
    return arr[5][5];
}

int ComCheck2(int arr[][5], int checknum[25], int time)
{
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            for (int k = 0; k < time; k++)
            {
                if (checknum[k] == arr[i][j])
                {
                    arr[i][j] = 0;
                }
            }
        }
    }

    return arr[5][5];
}

bool Playing(int arr1[][5] , int arr2[][5] , int random[25],int time)
{
    while (Playing)
    {
        int playerNum;
        int playerbingo = 0;
        int combingo = 0;
        std::cout << "time : " << time << std::endl;
        std::cout << "번호를 입력하시오 ";
        std::cin >> playerNum;

        PlayerCheck(arr1, playerNum);
        PlayerCheck(arr2, playerNum);
        ComCheck(arr1, random, time);
        ComCheck2(arr2, random, time);
        PlayerPrint(arr1);
        ComPrint(arr2);
        
        for (int i = 0; i < 5; i++)
        {
            if (arr1[i][0] == 0 && arr1[i][1] == 0 && arr1[i][2] == 0 && arr1[i][3] == 0 && arr1[i][4] == 0) playerbingo++;
        }

        for (int i = 0; i < 5; i++)
        {
            if (arr1[0][i] == 0 && arr1[1][i] == 0 && arr1[2][i] == 0 && arr1[3][i] == 0 && arr1[4][i] == 0) playerbingo++;
        }

        if (arr1[0][0] == 0 && arr1[1][1] == 0 && arr1[2][2] == 0 && arr1[3][3] == 0 && arr1[4][4] == 0) playerbingo++;
        if (arr1[0][4] == 0 && arr1[1][3] == 0 && arr1[2][2] == 0 && arr1[3][1] == 0 && arr1[4][0] == 0) playerbingo++;

        // 

        for (int i = 0; i < 5; i++)
        {
            if (arr2[i][0] == 0 && arr2[i][1] == 0 && arr2[i][2] == 0 && arr2[i][3] == 0 && arr2[i][4] == 0) combingo++;
        }

        for (int i = 0; i < 5; i++)
        {
            if (arr2[0][i] == 0 && arr2[1][i] == 0 && arr2[2][i] == 0 && arr2[3][i] == 0 && arr2[4][i] == 0) combingo++;
        }

        if (arr2[0][0] == 0 && arr2[1][1] == 0 && arr2[2][2] == 0 && arr2[3][3] == 0 && arr2[4][4] == 0) combingo++;
        if (arr2[0][4] == 0 && arr2[1][3] == 0 && arr2[2][2] == 0 && arr2[3][1] == 0 && arr2[4][0] == 0) combingo++;

        std::cout << "현재 플레이어 빙고 수 : " << playerbingo << std::endl;
        std::cout << "현재 컴퓨터 빙고 수 : " << combingo << std::endl;
        time++;
        std::cout << "time : " << time << std::endl;
        std::cout << "=====================================================================================" << std::endl;

        if (playerbingo == 3 || combingo==3)
            return false;
    }
    return false;
}


