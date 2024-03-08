// 트럼프 카드 52장
// 스페이드, 클로버 , 다이아 , 하트 
// 1 , 2~10, J Q 13,
// 컴퓨터가 두장을 냈는데 , 다이아 2 , 하트 10, (첫번째 장과 세번째 장)
// 숫자만 확인 
// 사이에 들어오면 WIN , 벗어나거나 같은 숫자를 내면 LOSE 
// 카드 한번 사용하면 다시 사용 불가능 X 
// 총 17판 종료 , 배팅 금액 넣기
// 출력은 : 영문으로 (A, J , Q , K)

// 월남뽕
#include <iostream>

void PrintShape(int arrnum);
void PrintNum(int arrnum);
void PrintEnding(int totalnum, int playnum);
void Playing(int arr[], int total, int play, bool playing);
int Random(int arr[]);


// 배열로 써서 사용하고 그 배열 부분은 접근 x 
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

// Random 돌리기
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

// 모양 판별 함수
void PrintShape(int arrnum)
{
    if (arrnum >= 1 && arrnum <= 13)
    {
        std::cout << "스페이드";
        PrintNum(arrnum);
    }
    else if (arrnum >= 14 && arrnum <= 26)
    {
        std::cout << "클로버";
        PrintNum(arrnum);
    }
    else if (arrnum >= 27 && arrnum <= 39)
    {
        std::cout << "다이아";
        PrintNum(arrnum);
    }
    else if (arrnum >= 40 && arrnum <= 52)
    {
        std::cout << "하트";
        PrintNum(arrnum);
    }

}

// 1~12 판별 함수
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

// 게임 결과 출력 함수
void PrintEnding(int totalnum, int playnum)
{
    if (totalnum < 100)
    {
        std::cout << "배팅불가능으로 게임을 종료합니다" << std::endl;
    }
    if (playnum == 18)
    {
        std::cout << "카드를 다 소진하여 게임을 종료합니다" << std::endl;
    }
}

// 게임 과정 함수
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
            std::cout << play << "번째 판 ";
            std::cout << "현재 소지금 : " << total << std::endl;
            std::cout << "배팅할 금액을 선택하시오 : ";
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
                std::cout << "플레이어 승리!" << std::endl;
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
                std::cout << "플레이어 패배!" << std::endl;
                total -= bet * 2;
                std::cout << total << std::endl;
                std::cout << "=============================" << std::endl;
                play++;
            }
        }
    }
}
