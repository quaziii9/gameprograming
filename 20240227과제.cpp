// Ʈ���� ī�� 52��
// �����̵�, Ŭ�ι� , ���̾� , ��Ʈ 
// 1 , 2~10, J Q 13,
// ��ǻ�Ͱ� ������ �´µ� , ���̾� 2 , ��Ʈ 10, (ù��° ��� ����° ��)
// ���ڸ� Ȯ�� 
// ���̿� ������ WIN , ����ų� ���� ���ڸ� ���� LOSE 
// ī�� �ѹ� ����ϸ� �ٽ� ��� �Ұ��� X 
// �� 17�� ���� , ���� �ݾ� �ֱ�
// ����� : �������� (A, J , Q , K)

// ������
#include <iostream>

void PrintShape(int arrnum);
void PrintNum(int arrnum);
void PrintEnding(int totalnum, int playnum);
void Playing(int arr[], int total, int play, bool playing);
int Random(int arr[]);


// �迭�� �Ἥ ����ϰ� �� �迭 �κ��� ���� x 
int main()
{
    srand(time(NULL));
    int Card[52];
    int total = 3000;
    int play = 1;
    bool playing = true;
    
    Random(Card);

    Playing(Card, total, play, playing);
  
    PrintEnding(total,  play);
}

// Random ������
int Random(int arr[])
{
    for (int i = 0; i < 52; i++)
    {
        arr[i] = i + 1;
    }

    int dest, sour, temp;
    for (int i = 0; i < 1000; i++)
    {
        dest = rand() % 52;
        sour = rand() % 52;

        temp = arr[dest];
        arr[dest] = arr[sour];
        arr[sour] = temp;
    }
    return arr[52];
}

// ��� �Ǻ� �Լ�
void PrintShape(int arrnum)
{
    if (arrnum >= 1 && arrnum <= 13)
    {
        std::cout << "�����̵�";
        PrintNum(arrnum);
    }
    else if (arrnum >= 14 && arrnum <= 26)
    {
        std::cout << "Ŭ�ι�";
        PrintNum(arrnum);
    }
    else if (arrnum >= 27 && arrnum <= 39)
    {
        std::cout << "���̾�";
        PrintNum(arrnum);
    }
    else if (arrnum >= 40 && arrnum <= 52)
    {
        std::cout << "��Ʈ";
        PrintNum(arrnum);
    }

}

// 1~12 �Ǻ� �Լ�
void PrintNum(int arrnum)
{
    switch (arrnum % 14)
    {
    case 0:
    case 1: std::cout << "1 ";
        break;
    case 2: std::cout << "2 ";
        break;
    case 3: std::cout << "3 ";
        break;
    case 4: std::cout << "4 ";
        break;
    case 5: std::cout << "5 ";
        break;
    case 6: std::cout << "6 ";
        break;
    case 7: std::cout << "7 ";
        break;
    case 8: std::cout << "8 ";
        break;
    case 9: std::cout << "9 ";
        break;
    case 10: std::cout << "10 ";
        break;
    case 11: std::cout << "J ";
        break;
    case 12:std::cout << "Q ";
        break;
    case 13:std::cout << "K ";
        break;
    }
}

// ���� ��� ��� �Լ�
void PrintEnding(int totalnum, int playnum)
{
    if (totalnum < 100)
    {
        std::cout << "���úҰ������� ������ �����մϴ�" << std::endl;
    }
    if (playnum == 18)
    {
        std::cout << "ī�带 �� �����Ͽ� ������ �����մϴ�" << std::endl;
    }
}

// ���� ���� �Լ�
void Playing(int arr[], int total, int play, bool playing)
{
    int bet;

    while (playing) {
        for (int i = 0; i < 52; i = i + 3)
        {
            if (total < 100 || play == 18)
            {
                playing = false;
                break;
            }
            std::cout << play << "��° �� ";
            std::cout << "���� ������ : " << total << std::endl;
            std::cout << "������ �ݾ��� �����Ͻÿ� : ";
            std::cin >> bet;


            if ((arr[i] % 14 + 1 < arr[i + 1] % 14 + 1 && arr[i + 1] % 14 + 1 < arr[i + 2] % 14 + 1) ||
                (arr[i] % 14 + 1 > arr[i + 1] % 14 + 1 && arr[i + 1] % 14 + 1 > arr[i + 2] % 14 + 1))
            {
                PrintShape(arr[i]);
                std::cout << " : " << arr[i] % 14 << std::endl;
                PrintShape(arr[i + 1]);
                std::cout << " : " << arr[i + 1] % 14 << std::endl;
                PrintShape(arr[i + 2]);
                std::cout << " : " << arr[i + 2] % 14 << std::endl;
                std::cout << "�÷��̾� �¸�!" << std::endl;
                total += bet * 2;
                std::cout << total << std::endl;
                std::cout << "=============================" << std::endl;
                play++;
            }
            else
            {
                PrintShape(arr[i]);
                std::cout << " : " << arr[i] % 14 << std::endl;
                PrintShape(arr[i + 1]);
                std::cout << " : " << arr[i + 1] % 14 << std::endl;
                PrintShape(arr[i + 2]);
                std::cout << " : " << arr[i + 2] % 14 << std::endl;
                std::cout << "�÷��̾� �й�!" << std::endl;
                total -= bet * 2;
                std::cout << total << std::endl;
                std::cout << "=============================" << std::endl;
                play++;
            }
        }
    }
}
