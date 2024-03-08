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
void PrintShape(int arr);
void PrintNum(int arr);
void PrintEnding(int total, int play);


// 배열로 써서 사용하고 그 배열 부분은 접근 x 
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
       // std::cout << i << "번째 배열 : ";
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
                std::cout << play << "번째 판 ";
                std::cout << "현재 소지금 : " << total << std::endl;
                std::cout << "배팅할 금액을 선택하시오 : ";
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
                    std::cout << "플레이어 승리!" << std::endl;
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
                    std::cout << "플레이어 패배!" << std::endl;
                    total -= bet * 2;
                    std::cout << total << std::endl;
                    std::cout << "=============================" << std::endl;
                    play++;
                }
             }
    }

    void PrintEnding(int total, int play);
}



// 모양 판별 함수
void PrintShape(int arr)
{
    if (arr >= 1 && arr <= 13)
    {
        std::cout << "스페이드";
        PrintNum(arr);
    }
    else if (arr >= 14 && arr <= 26)
    {
        std::cout << "클로버";
        PrintNum(arr);
    }
    else if (arr >= 27 && arr <= 39)
    {
        std::cout << "다이아";
        PrintNum(arr);
    }
    else if (arr >= 40 && arr <= 52)
    {
        std::cout << "하트";
        PrintNum(arr);
    }

}

// 1~12 판별 함수
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

// 게임 결과 출력 함수
void PrintEnding(int total, int play)
{
    if (total < 100)
    {
        std::cout << "배팅불가능으로 게임을 종료합니다" << std::endl;
    }
    if (play == 18)
    {
        std::cout << "카드를 다 소진하여 게임을 종료합니다" << std::endl;
    }
}



