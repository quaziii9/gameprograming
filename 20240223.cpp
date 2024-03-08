#include<iostream>

int main()
{
#pragma region 배열

	/*
	// 배열을 사용할줄 알면 효과적으로 데이터를 관리할 수 있음
	// 배열 선언 : 표를 그리는 행위
	// 배열에 데이터 저장 : 표에다가 문자나 숫자를 기록
	// 베열에 저장된 데이터를 참조 : 표의 번호로 숫자와 문자를 구분
	// 배열 : 같은 자료형을 가진 연속된 메모리 공간으로 이루어진 자료 구조
	// 같은 자료형을 가진 변수들이 여러개 필요할 때 사용, 많은 양의 데이터를 처리할때 유용
	// 배열 선언시 배열 길이에 변수X, 상수값만 가능 (const는 가능)

	// 자료형 , 배열의 이름 , 배열의 길이
	int arr[10]; //배열 선언(int형 타입의 배열)

	arr[0] = 1;

	std::cout << "int형 타입의 배열 arr[0]에 저장되어 있는 데이터" << arr[0] << std::endl;
	std::cout << "int형 타입의 배열 arr[1]에 저장되어 있는 데이터" << arr[1] << std::endl;	// 쓰레기값

	// 배열을 선언하는 방법
	// 1. 크기를 명시하고 초기화
	int arr1[4] = { 1,2,3,4 };
	std::cout << arr1[0] << std::endl;
	std::cout << arr1[1] << std::endl;
	std::cout << arr1[2] << std::endl;
	std::cout << arr1[3] << std::endl;
	std::cout << "==========================" << std::endl;

	// 2. 배열의 크기를 생략하고 초기화
	int arr2[] = { 1,2,3 }; // 길이가 3
	std::cout << arr2[0] << std::endl;
	std::cout << arr2[1] << std::endl;
	std::cout << arr2[2] << std::endl;
	std::cout << "==========================" << std::endl;

	// 3. 크기를 명시적 지정하고 일부 요소만 초기화
	int arr3[5] = { 10, 31, 41 };
	std::cout << arr3[0] << std::endl;
	std::cout << arr3[1] << std::endl;
	std::cout << arr3[2] << std::endl;
	std::cout << arr3[3] << std::endl;	// 0 : 쓰레기값 안들어오고 0으로 초기화
	std::cout << arr3[4] << std::endl;	// 0
	std::cout << "==========================" << std::endl;

	int arr4[5] = { };	// int arr4[5] = {0, };
	std::cout << arr4[0] << std::endl;	// 0
	std::cout << arr4[1] << std::endl;
	std::cout << arr4[2] << std::endl;
	std::cout << arr4[3] << std::endl;
	std::cout << arr4[4] << std::endl;
	std::cout << "==========================" << std::endl;

	int myArr[5] = { 1,2,3,4,5 };
	std::cout << myArr << std::endl;	// 메모리 주소(16진수)
	std::cout << &myArr[0] << std::endl;	// 메모리 인덱스 0번째 주소는 시작 주소를 의미
	std::cout << &myArr[1] << std::endl;	// 메모리 주소가 4씩 증가 연속된 메모리
	std::cout << &myArr[2] << std::endl;
	std::cout << &myArr[3] << std::endl;
	std::cout << &myArr[4] << std::endl;

	int number[5];

	for (int i = 0; i < 5; i++)
	{
		number[i] = i;

		std::cout << number[i] << std::endl;
	}

	//만약에 10명의 학생 성적을 입력, 배열에 저장하고 총점과 평균을 구하려면 ?

	int jumsu[10]; // 점수를 입력받을 배열 10개 선언
	int sum = 0;   // 점수 누적용(합)

	// 입력을 해보자
	for (int i = 0; i < 10; i++)
	{
		std::cout << "내가 입력할 학생의 점수는 ? :" << std::endl;
		std::cout << i + 1 << " 번째 학생 : ";
		std::cin >>jumsu[i];
	}
	//연산하는 부분
	for (int i = 0; i < 10; i++)
	{
		sum += jumsu[i];
	}
	// 결과(출력하는 부분)
	std::cout << "총점 : " << sum << " " << "평균 : " << sum  / 10;
	*/
#pragma endregion


#pragma region 배열 2
	/*
	srand(time(NULL));
	int number[10];
	int dest, sour, temp;
	for (int i = 0; i < 10; i++)
	{
		number[i] = i;
	}
	for (int i = 0; i < 10; i++)
	{
		std::cout << "number[" << i << "]인덱스 : " << number[i]  << std::endl;
	}

	std::cout << "====================================" << std::endl;

	for (int i = 0; i < 1000; i++)
	{
		dest = rand() % 10;	// 0~9까지 무작위
		sour = rand() % 10; // 0~9까지 무작위

		temp = number[dest];
		number[dest] = number[sour];
		number[sour] = temp;
	}

	for (int i = 0; i < 10; i++)
	{
		std::cout << "number[" << i << "]인덱스 : " << number[i] << std::endl;
	}
	*/
#pragma endregion


#pragma region Lotto
	/*
	// 로또 만들기
	// 1~45 배열 45개
	// 6개만 뽑기
	int Lotto[45];
	int dest, sour, temp;
	for (int i = 0; i < 45; i++)
	{
		Lotto[i] = i;
	}
	for (int i = 0; i < 45; i++)
	{
		std::cout << "Lotto" << i << "]인덱스 : " << Lotto[i] << std::endl;
	}

	std::cout << "====================================" << std::endl;

	for (int i = 0; i < 1000; i++)
	{
		dest = rand() % 45;
		sour = rand() % 45;

		temp = Lotto[dest] ;
		Lotto[dest] = Lotto[sour] ;
		Lotto[sour] = temp;
	}

	for (int i = 0; i < 45; i++)
	{
		Lotto[i] = Lotto[i] + 1;
	}

	for (int i = 0; i < 45; i++)
	{
		std::cout << "로또번호 " << i+1 << "번째 번호 : " <<  Lotto[i] << std::endl;
	}

	std::cout << "====================================" << std::endl;

	for (int i = 0; i < 6; i++)
	{
		std::cout << "당첨된 로또번호 " << i + 1 << "번째 번호 : " << Lotto[i] << std::endl;
	}

	*/
#pragma endregion


#pragma region 2차원배열
	/*
		int arr[4][3];
		arr[0][0] = 1;
		arr[0][1] = 2;
		arr[0][2] = 3;

		arr[1][0] = 4;
		arr[1][1] = 5;
		arr[1][2] = 6;

		arr[2][0] = 7;
		arr[2][1] = 8;
		arr[2][2] = 9;

		arr[3][0] = 10;
		arr[3][1] = 11;
		arr[3][2] = 12;

		std::cout << std::endl << std::endl;

		std::cout << "0행 출력 결과 : " << &arr[0][0] << " , " << &arr[0][1] << " , " << &arr[0][2] << std::endl;
		std::cout << "1행 출력 결과 : " << &arr[1][0] << " , " << &arr[1][1] << " , " << &arr[1][2] << std::endl;
		std::cout << "2행 출력 결과 : " << arr[2][0] << " , " << arr[2][1] << " , " << arr[2][2] << std::endl;
		std::cout << "3행 출력 결과 : " << arr[3][0] << " , " << arr[3][1] << " , " << arr[3][2] << std::endl;

		int arr1[4][3] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12 };

		for (int i = 0; i < 4; i++)
		{
			std::cout << std::endl;
			for (int k = 0; k < 3; k++)
			{
				std::cout << arr[i][k] << " ";
			}
		}
		*/


#pragma endregion

		/*
				숫자야구 게임 만들기
				1.플레이어 VS 컴퓨터
				2.컴퓨터는 임의의 숫자 3개를 내준다.
				3.플레이어는 숫자 3개를 입력한다.
				4.조건은 다음과 같다.

				컴퓨터)			1,2,3
				플레이어)			1,5,2

				결과)1strike, 1ball
				즉, 숫자와 자리까지 같다면 1s
				숫자는 같고 자리가 다를경우 1b

				만약 난수 발생이 1~10까지라고 할경우 1~10외의 숫자를 입력한다면 재입력하라는 예외처리를 한다.

				관전자는 일정확률로 뽀찌를 받는다.(단, 뽀찌는 100~1000사이)
		*/


	bool playing = true;
	int chance = 1;
	int out = 0;
	int money = 0;	// 관전자 소지금 

	while (playing)
	{
		srand(time(NULL));
		int random[10];
		int comNum[3];
		int playerNum[3];
		int dest, sour, temp; // 컴퓨터 랜덤 숫자 돌리기
		int dest2, sour2, temp2; // 관전자 랜덤 숫자 돌리기
		int strike = 0;
		int ball = 0;
		int looker = 0;			// 관전자 확률 숫자
		int bet = 0;		// 관전자 뽀찌 배수

		std::cout << chance << " 번째 판 (" << out << "아웃)" << std::endl;


#pragma region 컴퓨터 랜덤 숫자
		for (int i = 0; i < 9; i++)	random[i] = i;

		for (int i = 0; i < 1000; i++)
		{
			dest = rand() % 9;	// 0~9까지 무작위
			sour = rand() % 9; // 0~9까지 무작위

			temp = random[dest];
			random[dest] = random[sour];
			random[sour] = temp;
		}

		for (int i = 0; i < 3; i++)	comNum[i] = random[i] + 1;

		std::cout << "컴퓨터 : ";

		for (int i = 0; i < 3; i++)	std::cout << comNum[i] << " ";
#pragma endregion

		std::cout << std::endl;




#pragma region 플레이어 숫자 입력
		std::cout << "플레이어 : ";

		bool cout = false;
		while (true)
		{
			if (cout == true) std::cout << "1~9 사이의 숫자를 입력하시오" << std::endl;
			int count = 0;
			for (int i = 0; i < 3; i++)
			{

				std::cin >> playerNum[i];

				if (playerNum[i] < 1 || playerNum[i]>9)
				{
					cout = true;
				}
				else if (playerNum[i] >= 1 || playerNum[i] <= 9)
				{
					count++;
				}
			}
			if (count == 3) break;
		}
#pragma endregion

#pragma region 게임 결과 처리
		for (int i = 0; i < 3; i++)
		{
			for (int k = 0; k < 3; k++)
			{
				if (comNum[i] == playerNum[k] && i == k) strike++;

				else if (comNum[i] == playerNum[k] && i != k) ball++;
			}
		}
		chance++;
#pragma endregion


#pragma region 1판당 게임 출력
		if (strike == 3) out++;
		std::cout << "스트라이크 : " << strike << ", 볼 : " << ball << std::endl << std::endl;

#pragma region 관전자 랜덤 숫자 + 관전자 결과
		for (int i = 0; i < 1000; i++)
		{
			dest2 = rand() % 9;	// 0~9까지 무작위
			sour2 = rand() % 9; // 0~9까지 무작위

			temp2 = random[dest2];
			random[dest2] = random[sour2];
			random[sour2] = temp2;
		}

		looker = random[0] + 1;
		bet = random[1] + 1;
		std::cout << "관중자 랜덤 숫자 : " << looker << std::endl;
		std::cout << "관중자 뽀찌 배수 숫자 : " << bet << std::endl;

		if (strike >= 2 && looker >= 5)	// 관전자
		{
			std::cout << bet << "배 배팅 성공!   ";
			money += bet * 100;
		}
		else if (strike >= 2 && looker < 5)	std::cout << "배팅 실패!   ";


		std::cout << "관전자 소지금 : " << money << std::endl;
		std::cout << "===========================================" << std::endl;
#pragma endregion


#pragma endregion

		if (chance == 11) playing = false;
		if (out == 3) playing = false;
	}

	if (out == 3) std::cout << "3진 아웃! 게임을 종료합니다";
	if (chance == 11) std::cout << "게임을 10회 진행 했습니다 게임을 종료합니다 (" << out << "아웃)";
}
