#include<iostream>

/*
�������
1. 5 * 5
2. 1~25
3. ���࿡ 2�� �Է����ϸ�
�� �ش� ���ڸ� Ư�� ��ȣ�� �ٲ۴�. * #
�� üũ�� ���� ���� �밢��
1 2 3 4 5
6 7 8 9 10
11 12 13 14 15
16 17 18 19 20
21 22 23 24 25
[0] ��°
[6] ��°
���� 3�� �̻�

�÷��̾� ��ǻ��
*/

int Random(int arr[][5]);

void PlayerPrint(int arr[][5]);

int Check(int arr[][5], int checknum);

bool Playing(int arr[][5]);

int main()
{
    srand(time(NULL));

    int playerBingo[5][5];
    int comBingo[5][5];
    int random[25];
    bool playing = true;
    int playerNum;


    Random(playerBingo);

    PlayerPrint(playerBingo);

    while (Playing(playerBingo));

    std::cout << "������ ����Ǿ����ϴ�" << std::endl;
}


int Random(int arr[][5])
{
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            arr[i][j] = (5 * i) + (j + 1);
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

void PlayerPrint(int arr[][5])
{
    std::cout << "�÷��̾� ����" << std::endl;
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


int Check(int arr[][5], int checknum)
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

bool Playing(int arr[][5])
{
    {
        int playerNum;
        int bingo = 0;
        std::cout << "��ȣ�� �Է��Ͻÿ� ";
        std::cin >> playerNum;

        Check(arr, playerNum);

        PlayerPrint(arr);

        for (int i = 0; i < 5; i++)
        {
            if (arr[i][0] == 0 && arr[i][1] == 0 && arr[i][2] == 0 && arr[i][3] == 0 && arr[i][4] == 0) bingo++;
        }

        for (int i = 0; i < 5; i++)
        {
            if (arr[0][i] == 0 && arr[1][i] == 0 && arr[2][i] == 0 && arr[3][i] == 0 && arr[4][i] == 0) bingo++;
        }

        if (arr[0][0] == 0 && arr[1][1] == 0 && arr[2][2] == 0 && arr[3][3] == 0 && arr[4][4] == 0) bingo++;
        if (arr[0][4] == 0 && arr[1][3] == 0 && arr[2][2] == 0 && arr[3][1] == 0 && arr[4][0] == 0) bingo++;
        std::cout << "���� ���� �� : " << bingo << std::endl;
        std::cout << "==========================================" << std::endl;

        if (bingo == 3)
            return false;
    }
}


