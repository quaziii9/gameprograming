#include<iostream>
#include <random>
// f12 

int main() {

#pragma region while_Loop

	/*
	while (true) // 기본동작 조건은 true인
	{
		// 여기에 반복할 코드가 들어간다
		// 기본적으로 종료 조건이 있어야한다
	}
	*/

	// 입력한 숫자만큼 출력한다
	/*
	int inputNum;
	int count = 0;
	std::cout << "숫자를 입력해봐라 : ";
	std::cin >> inputNum;
	while (count <inputNum)
	{
		std::cout << "돌려라 돌려라" << std::endl;
		count++;
	}
	*/

	/*
	int inputNum;
	int count = 0;
	while (true)
	{
		count++;
		std::cout << "돌려라돌려라" << std::endl;
		if (count == 5)break;
	}
	*/


	// 입력을 계속 받는다 .입력을 받은 숫자는 누적해서 더한다
	// 0을 입력하면 종료한다
	/*
	int input = 1;
	int total = 0;
	while (input != 0) // input이 0이 아닐때까지 돌려라
	{
		std::cout << "0보다 큰 숫자를 입력하시오";
		std::cin >> input; // 입력
		total += input; // 처리 total = total+input
	}
	std::cout << "숫자의 총합은 ? : " << total << std::endl;
	*/

	/*
	int gugudanInput;
	int gugudanNum = 1;
	std::cout << "원하는 단을 입력해 보아라 : ";
	std::cin >> gugudanInput;
	while (gugudanNum<10)
	{
		std::cout << gugudanInput << " * " << gugudanNum << " = " << gugudanInput * gugudanNum << std::endl;
		gugudanNum++;
	}
	*/

#pragma endregion

#pragma region for_Loop
	// 반복문
	// while 처럼 반복작업을 수행할때 사용한다
	// 반복횟수가 명확한 경우 유용함
	//
	//for (초기화; 조건; 증감)
	//{

	//}

	/*
	for (int i = 0; i < 3; i++)
	{
		std::cout << i << std::endl;
	}
	for (int i = 5; i >=0; i--)
	{
		std::cout << i << std::endl;
	}

	// 1부터 100까지 합을 구하려면?
	int res = 0;
	for (int i = 1; i <= 100; i++)
	{
		res += i;
	}
	std::cout << "1부터 100까지 합 : " << res << std::endl;

	for (int i = 1; i < 10; i++)
	{
		if (i % 2 != 0) // 만약에 i를 2로 나눴을때 나머지가 0 아니라면
		{
			continue; // 건너뛰어라
		}
		std::cout << i << std::endl; // 2 4 6 8
	}
	*/

	// 문제 1 : 1이상 20 미만을 출력하되 2의 배수와 3의 배수를 출력에서 제외해라

	/*
	for (int i = 1; i < 20; i++)
	{
		if (i % 2 == 0 || i % 3 == 0) continue;

		std::cout << i << std::endl;
	}
	*/
#pragma endregion


#pragma region random
	/*

		std::srand(std::time(NULL));

		int randomNum = std::rand() % 3; // 0~2

		std::cout << randomNum << std::endl;
		*/
		// C++11이상 
		// random  
	/*
		std::random_device rd;
		std::mt19937 mt(rd());
		std::uniform_int_distribution<int> dis(0, 10);

		int mtrandomNumber = dis(mt);
		std::cout << mtrandomNumber << std::endl;
		*/

#pragma endregion

#pragma region 실습1
		// 1. 컴퓨터는 0~999 까지의 수 중에 랜덤하게 하나를 갖는다
		// 2. 플레이어는 10번의 기회가 있다.
		// 3. 플레이어가 어떤 수를 입력을 하면 컴퓨터는 그 수가 큰지 작은지 정답인지 알려준다
		// 4. 당연히 입력값이 0~999를 벗어나게 되면 재입력하라는 문구를 띄운다. continue 사용
		// 5. 종료 조건은 10판이 넘어가거나 맞추면 종료문구를 띄운다. 


/*
	int playerNumber, chance = 1;
	std::random_device rd;
	std::mt19937 mt(rd());
	std::uniform_int_distribution<int> dis(0, 999);

	int comNumber = dis(mt);

	std::cout << comNumber << std::endl;

	for (chance = 1; chance < 11; chance++)
	{
		std::cout << "플레이어는 숫자를 입력해주세요" << std::endl;
		std::cin >> playerNumber;

		if (playerNumber > comNumber && playerNumber<1000)
		{
			std::cout << chance << "회 : 플레이어의 숫자가 컴퓨터 숫자보다 큽니다" << std::endl << std::endl;
		}
		else if (playerNumber < comNumber)
		{
			std::cout << chance << "회 : 플레이어의 숫자가 컴퓨터 숫자보다 작습니다" << std::endl << std::endl;
		}
		else if (playerNumber > 999)
		{
			std::cout << chance << "회 : 0~999 내에서 선택해주세요" << std::endl << std::endl;
		}
		else if (playerNumber = comNumber)
		{
			break;
		}
	}

	std::cout << "게임이 종료되었습니다" << std::endl;
	if (playerNumber == comNumber)
	{
		std::cout << chance << "회만에 정답을 맞추셨습니다!" << std::endl;
	}
	else if (chance == 11)
	{
		std::cout << "정답을 맞추시지 못하셨습니다" << std::endl;
		std::cout << "정답 : " << comNumber << std::endl;
	}
	*/
#pragma endregion


#pragma region 별찍기
	for (int i = 0; i < 5; i++) // star : 5 
	{
		for (int k = 0; k <= i; k++)
		{
			std::cout << "*";
		}
		std::cout << std::endl;
	}

	std::cout << std::endl;

	for (int i = 0; i < 5; i++)
	{
		for (int k = 5; k > i; k--)
		{
			std::cout << "*";
		}
		std::cout << std::endl;
	}

	std::cout << std::endl;


	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < i; j++)
		{
			std::cout << " ";
		}

		for (int k = 1; k <= 5 - i; k++)
		{
			std::cout << "*";
		}
		std::cout << std::endl;
	}

	std::cout << std::endl;

	for (int i = 1; i <= 5; i++)
	{

		for (int j = 5; j > i; j--)
		{
			std::cout << " ";
		}

		for (int k = 1; k <= i; k++)
		{
			std::cout << "*";
		}
		std::cout << std::endl;
	}
	std::cout << std::endl;


	for (int i = 0; i <= 5; i++)
	{
		for (int k = 0; k < 5 - i; k++)
		{
			std::cout << " ";
		}
		for (int j = 0; j < i * 2 + 1; j++)
		{
			std::cout << "*";
		}
		std::cout << std::endl;
	}
	for (int i = 4; i >= 0; i--)
	{
		for (int k = 0; k < 5 - i; k++)
		{
			std::cout << " ";
		}
		for (int j = 0; j < i * 2 + 1; j++)
		{
			std::cout << "*";
		}
		std::cout << std::endl;
	}

#pragma endregion


	// 1. 별찍기 (다이아 포함)
	// 2. 가위바위보 게임 
	// ㄴ 플레이어
	// ㄴ 컴퓨터
	// ㄴ 가위(1), 바위(2), 보(3)
	// 3. 컴퓨터는 가위, 바위, 보를 랜덤하게 낸다.
	// 4. 결과에 따라 승, 패, 무승부를 출력한다.
	// 5. 10판만할 수 있다
	// 6. 플레이어는 베팅을 할 수 있다.(소지금)
	// 7. 베팅할 수 있는 금액은 최소단위가 있어야 한다.
	// ㄴ 플레이어가 승리할 경우 내가 건 베팅금액에 *2
	// ㄴ 플레이어가 패배할 경우 내가 건 베팅금액의 *2만큼 차감
	// ㄴ 무승부일 경우 내가 건 베팅금액만 잃는다.
	// 종료조건 : 
	// - 10판
	// - 소지금이 아예 없는 경우
	// - 베팅금액이 소지금보다 아래인 경우

#pragma region 배팅가위바위보

	std::random_device rd;
	std::mt19937 mt(rd());
	std::uniform_int_distribution<int> dis(1, 3);


	int player, bet; // 가위바위보숫자 , 배팅액
	int money = 1500; // 소지금
	int min = 100; // 최소 배팅금액
	int game = 1;

	std::cout << "가위바위보 게임을 시작하겠습니다" << std::endl;

	while (game < 11 || money < 100)
	{

		if (money < min || money == 0)
		{
			break;
		}
		std::cout << game << "번째 판 배팅할 금액을 선택하시오.(최소배팅금액 100) 내 소지금 : " << money << std::endl;
		std::cin >> bet;
		if (bet < 100)
		{
			std::cout << "최소배팅금액은 100 입니다" << std::endl;
			continue;
		}
		if (bet > money)
		{
			std::cout << "배팅금액이 부족합니다" << std::endl;
			continue;
		}

		int com = dis(mt);
		std::cout << com << std::endl;
		std::cout << "가위(1), 바위(2), 보(3)를 선택하시오.";
		std::cin >> player;

		if (player == 1) // 플레이어 : 가위
		{
			if (com == 1)
			{
				money = money - bet;
				std::cout << "비겼습니다!" << std::endl;
				std::cout << "플레이어 : 가위 VS 컴퓨터 : 가위" << std::endl;
				std::cout << "현재 플레이어 소지금 : " << money << std::endl << std::endl;
				game++;

			}
			else if (com == 2)
			{
				money = money - bet * 2;
				std::cout << "졌습니다!" << std::endl;
				std::cout << "플레이어 : 가위 VS 컴퓨터 : 바위" << std::endl;
				std::cout << "현재 플레이어 소지금 : " << money << std::endl << std::endl;
				game++;
			}
			else if (com == 3)
			{
				money = money + bet * 2;
				std::cout << "이겼습니다!" << std::endl;
				std::cout << "플레이어 : 가위 VS 컴퓨터 : 보" << std::endl;
				std::cout << "현재 플레이어 소지금 : " << money << std::endl << std::endl;
				game++;
			}
		}

		if (player == 2) // 플레이어 : 바위
		{
			if (com == 1)
			{
				money = money + bet * 2;;
				std::cout << "이겼습니다!" << std::endl;
				std::cout << "플레이어 : 바위 VS 컴퓨터 : 가위" << std::endl;
				std::cout << "현재 플레이어 소지금 : " << money << std::endl << std::endl;
				game++;
			}
			else if (com == 2)
			{
				money = money - bet;
				std::cout << "비겼습니다!" << std::endl;
				std::cout << "플레이어 : 바위 VS 컴퓨터 : 바위" << std::endl;
				std::cout << "현재 플레이어 소지금 : " << money << std::endl << std::endl;
				game++;
			}
			else if (com == 3)
			{
				money = money - bet * 2;
				std::cout << "졌습니다!" << std::endl;
				std::cout << "플레이어 : 바위 VS 컴퓨터 : 보" << std::endl;
				std::cout << "현재 플레이어 소지금 : " << money << std::endl << std::endl;
				game++;
			}
		}

		if (player == 3) // 플레이어 : 보
		{
			if (com == 1)
			{
				money = money - bet * 2;;
				std::cout << "졌습니다!" << std::endl;
				std::cout << "플레이어 : 보 VS 컴퓨터 : 가위" << std::endl;
				std::cout << "현재 플레이어 소지금 : " << money << std::endl << std::endl;
				game++;
			}
			else if (com == 2)
			{
				money = money + bet * 2;
				std::cout << "이겼습니다!" << std::endl;
				std::cout << "플레이어 : 보 VS 컴퓨터 : 바위" << std::endl;
				std::cout << "현재 플레이어 소지금 : " << money << std::endl << std::endl;
				game++;
			}
			else if (com == 3)
			{
				money = money - bet;
				std::cout << "비겼습니다!" << std::endl;
				std::cout << "플레이어 : 보 VS 컴퓨터 : 보" << std::endl;
				std::cout << "현재 플레이어 소지금 : " << money << std::endl << std::endl;
				game++;
			}
		}
	}
	if (money < 100)
		std::cout << "배팅 불가능으로 게임이 종료됩니다 소지금 : " << money;
	else
		std::cout << "10판이 종료되었습니다 " << std::endl << "플레이어 소지금 : " << money;

#pragma endregion



#pragma region 예시
	std::cout << "hello";
#pragma endregion
}







