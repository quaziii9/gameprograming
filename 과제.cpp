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
void PrintShape(int arr);
void PrintNum(int arr);
void PrintEnding(int total, int play);


// �迭�� �Ἥ ����ϰ� �� �迭 �κ��� ���� x 
int main()
{
    srand(time(NULL));
    int Card[52];
    int dest, sour, temp;
    int total = 3000;
    int bet;
    bool playing = true;
    int play = 1;

    for (int i = 0; i < 52; i++)
    {
        Card[i] = i + 1;
    }

    for (int i = 0; i < 500; i++)
    {
        dest = rand() % 52;
        sour = rand() % 52;

        temp = Card[dest];
        Card[dest] = Card[sour];
        Card[sour] = temp;
    }

    /*
    for (int i = 0; i < 52; i++)
    {
        // Card[i] = Card[i] + 1;
       // std::cout << i << "��° �迭 : ";
       // PrintShape(Card[i]);
    }
    */
   
    while (playing) {
            for (int i = 0; i < 52; i = i + 3)
            {
                if (total < 100 || play==18)
                {
                    playing = false;
                    break;
                }
                std::cout << play << "��° �� ";
                std::cout << "���� ������ : " << total << std::endl;
                std::cout << "������ �ݾ��� �����Ͻÿ� : ";
                std::cin >> bet;
            

                if (    (Card[i] % 14+1 < Card[i + 1] % 14+1     &&      Card[i + 1] % 14+1 < Card[i + 2] % 14+1) || 
                        (Card[i] % 14+1 > Card[i + 1] % 14+1     &&      Card[i + 1] % 14+1 > Card[i + 2] % 14+1)    )
                {
                    PrintShape(Card[i]);
                    std::cout << " : " << Card[i] % 14 << std::endl;
                    PrintShape(Card[i + 1]);
                    std::cout << " : " << Card[i+1] % 14 << std::endl;
                    PrintShape(Card[i + 2]);
                    std::cout << " : " << Card[i+2] % 14 << std::endl;
                    std::cout << "�÷��̾� �¸�!" << std::endl;
                    total += bet * 2;
                    std::cout << total << std::endl;
                    std::cout << "=============================" << std::endl;
                    play++;
                }
                else
                {
                    PrintShape(Card[i]);
                    std::cout << " : " << Card[i] % 14 << std::endl;
                    PrintShape(Card[i + 1]);
                    std::cout << " : " << Card[i+1] % 14 << std::endl;
                    PrintShape(Card[i + 2]);
                    std::cout << " : " << Card[i+2] % 14 << std::endl;
                    std::cout << "�÷��̾� �й�!" << std::endl;
                    total -= bet * 2;
                    std::cout << total << std::endl;
                    std::cout << "=============================" << std::endl;
                    play++;
                }
             }
    }

    void PrintEnding(int total, int play);
}



// ��� �Ǻ� �Լ�
void PrintShape(int arr)
{
    if (arr >= 1 && arr <= 13)
    {
        std::cout << "�����̵�";
        PrintNum(arr);
    }
    else if (arr >= 14 && arr <= 26)
    {
        std::cout << "Ŭ�ι�";
        PrintNum(arr);
    }
    else if (arr >= 27 && arr <= 39)
    {
        std::cout << "���̾�";
        PrintNum(arr);
    }
    else if (arr >= 40 && arr <= 52)
    {
        std::cout << "��Ʈ";
        PrintNum(arr);
    }

}

// 1~12 �Ǻ� �Լ�
void PrintNum(int arr)
{
    switch (arr % 14)
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
void PrintEnding(int total, int play)
{
    if (total < 100)
    {
        std::cout << "���úҰ������� ������ �����մϴ�" << std::endl;
    }
    if (play == 18)
    {
        std::cout << "ī�带 �� �����Ͽ� ������ �����մϴ�" << std::endl;
    }
}



