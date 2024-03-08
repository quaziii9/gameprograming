#include<iostream>

#pragma region name

#pragma endregion



/*
2024-02-21
if

*/

int main()
{
#pragma region if문 설명
	// 조건, 분기
	// 특정 조건에 의해서 선택적 실행이 가능하다

	//기본동작 조건은 참이면 실행
	//if (조건이 만족하면 -> 참이면 실행)
	//{
		// 여기를 실행
	//}

	/*
	int num = 10;
	if (num >= 10) // true
	{
		std::cout << "if문 조건이 참이므로 여기가 실행된다 첫번째" << std::endl;

		std::cout << "num값은 : " << num << std::endl;
	}
	if (num==10)
	{
		std::cout << "if문 조건이 참이므로 여기가 실행된다 두번째" << std::endl;
	}
	else if (num == 10)
	{
		std::cout << "if문 조건이 참이므로 여기가 실행된다 세번째" << std::endl;
	}
	if (num) //true : 컴퓨터는 0이 아닌 숫자는 true
	{
		std::cout << "if문 조건이 참이므로 여기가 실행된다 네번째" << std::endl;
	}
	if (true)
	{
		std::cout << "if문 조건이 참이므로 여기가 실행된다 다섯번째" << std::endl;
	}

	if (true)
	{
		// 참이면 여기를 실행
	}
	else if () // 단독으로 사용 불가능
	{

	}
	else      // 단독으로 사용 불가능
	{
		// 아니면 여기를 실행
	}
	int number = 20;

	if (number == 50)
	{
		std::cout << "만족";
	}
	else
	{
		std::cout << "위 if문이 거짓이므로 여기를 실행";
	}

	int input;
	std::cin >> input;

	//내가 입력한 값이 10보다 작다면
	if (input < 10)
	{
		std::cout << "내가 입력한 값 : " << input << std::endl;
	}
	else
	{
		std::cout << "내가 입력한 값은 input < 10이 아님 : " << input << std::endl;
	}

	if (조건)
	{

	}
	else if (조건)
	{
		// 만약 여기 조건을 만족한다면 아래에 있는 조건들을 전부 건너뛴다
		// else도 건너뛴다.
	}
	else if (조건)
	{

	}
	else if (조건)
	{

	}
	else
	{
		// 위 조건이 전부 만족하지 않으면 여기를 실행한다
	}

	std::cout << "내가 좋아하는 이상형의 나이를 입력";

	int age;
	std::cin >> age;

	if (age == 20)
	{
		std::cout << "응애";
	}
	bool isCheck = (age > 27 && age < 30) || (age > 27 && age < 30);
	if (isCheck)
	{

	}

	//28,29
	if (age > 27 && age < 30)
	{
		std::cout << "음";
	}
	else {
		std::cout << "나는 솔로 ";
	}


	if (true)
	{
		if (true)
		{

		}
		else
		{
			if ()
			{

			}
		}
	}
*/
#pragma endregion

#pragma region if문 실습1
// 입력을 두개를 받는다 (계산용)
// 사칙연산을 선택하는 입력용 변수
// 1. 덧셈, 2.뺄셈, 3. 곱셈, 4. 나눗셈

/*
	int num1, num2;
	char sym;
	std::cout << "숫자 두개를 입력해주세요";
	std::cin >> num1 >> num2;
	std::cout << "기호를 입력해주세요.";
	std::cin >> sym;

	if (sym == '+')
	{
		std::cout <<"계산결과 : " << num1 << " + " << num2 << " = " << num1 + num2;
	}
	else if (sym == '-')
	{
		std::cout << "계산결과 : " << num1 << " - " << num2 << " = " << num1 - num2;
	}
	else if (sym == '*')
	{
		std::cout << "계산결과 : " << num1 << " * " << num2 << " = " << num1 * num2;
	}
	else if (sym == '/')
	{
		std::cout << "계산결과 : " << num1 << " / " << num2 << " = " << num1 / num2;
	}
*/

// 교수님 버전
/*
	int select; // 덧셈, 뺄셈 등을 선택하는 변수
	int result = 0; // 결과를 담을 변수
	int inputNum, inputNum1; // 입력용 변수

	std::cout << "입력받는 두수의 사칙 연산을 해봅시다" << std::endl;
	std::cout << "1. 덧셈, 2. 뺄셈, 3.곱셈, 4.나눗셈" << std::endl;

	//입력
	std::cin >> select;
	std::cout << "두개의 숫자를 입력하자" << std::endl;
	std::cin >> inputNum;
	std::cin >> inputNum1;

	// 처리
	if (select == 1)result = inputNum + inputNum1;
	if (select == 2)result = inputNum - inputNum1;
	if (select == 3)result = inputNum * inputNum1;
	if (select == 4)result = inputNum / inputNum1;

	// 결과
	std::cout << "결과 : " << result << std::endl;

*/
#pragma endregion

#pragma region if문 실습2
//2번째 실습
//1. 두개의 정수를 입력받아서 두수의 차를 출력해라
//2. 단, 입력된 숫자가 순서에 상관없이 무조건 큰수에서 작은수를 뺀 결과를 출력

/*
	int num1, num2;
	int result = 0;

	std::cout << "두개의 정수를 입력하시오.";
	std::cin >> num1 >> num2;
	if (num1 > num2) result = num1 - num2;
	if (num2 > num1) result = num2 - num1;

	std::cout << "결과 : " << result << std::endl;



	int number1, number2;
	int res;

	std::cin >> number1 >> number2;
	res = (number1 > number2) ? number1-number2 : number2-number1;
	std::cout << res;
	*/

#pragma endregion






#pragma region 실습문제1
	/*
	1. 학생의 전체 평균 점수에 대한 학점을 출력해라
	ㄴ 90점 이상이면 A, 80점 이상이면 B, 70점 이상이면 C, 60점 이상이면 D, 나머지는 걍 F....
	ㄴ 과목은 3개 (국, 영, 수)
	*/

	/*

	int kor, eng, mat;
	int total = 0;
	char grade;
	std::cout << "점수를 입력하시오" << std::endl;
	std::cout << "국어 : ";
	std::cin >> kor;
	std::cout << "영어 : ";
	std::cin >> eng;
	std::cout << "수학 : ";
	std::cin >> mat;
	total = (kor + eng + mat) / 3;

	if (total >= 90) grade = 'A';
	else if (total >= 80) grade = 'B';
	else if (total >= 70) grade = 'C';
	else if (total >= 60) grade = 'D';
	else grade = 'F';

	std::cout << "학점 : " << grade << std::endl << "평균점수 :" << total << std::endl;

	*/

#pragma endregion

#pragma region 실습문제2

	/*
		2. 계절 출력하기
		봄(3-5), 여름(6~8), 가을(9~11), 겨울(12-2)
		ㄴ 3을 입력하면 -> 봄이에요 여러분~
		ㄴ
	*/

	/*
	int wth;
	std::cout << "몇월인가요~?" << std::endl;
	std::cin >> wth;

	if (3 <= wth && wth <= 5) std::cout << "봄이에요~";
	if (6 <= wth && wth <= 8) std::cout << "여름이에요~";
	if (9 <= wth && wth <= 11) std::cout << "가을이에요~";
	if (1 <= wth && wth <= 2 || wth ==12) std::cout << "겨울이에요~";
	*/
#pragma endregion

#pragma region 실습문제3
	/*
	3. 플레이어 vs 몬스터 (1턴)
	ㄴ 플레이어는 HP, Attack
	ㄴ 몬스터 HP, Attack
	ㄴ 몬스터의 생존여부 공격 , 공격X
	ㄴ 몬스터는 걍 자동으로 한대 공격
	ㄴ 플레이어는 키 입력을 받아 공격함!
	*/

	int playerHp = 100;
	int monsterHp = 100;
	int monsterAtk = 30;
	int playerAtk;


	if (monsterHp != 0)
	{
		std::cout << "살아있는 몬스터를 마주쳤다!" << std::endl;

		std::cout << "플레이어의 공격력을 입력하시오 : ";
		std::cin >> playerAtk;
		std::cout << std::endl;

		std::cout << "=== 플레이어 기본 스탯 ===" << std::endl;
		std::cout << "|    playerHP     " << playerHp << "    |" << std::endl;
		std::cout << "|    playerAtk    " << playerAtk << "     |" << std::endl;
		std::cout << "==========================" << std::endl << std::endl;

		std::cout << "===  몬스터 기본 스탯  ===" << std::endl;
		std::cout << "|    monsterHP     " << monsterHp << "   |" << std::endl;
		std::cout << "|    monsterAtk    " << monsterAtk << "    |" << std::endl;
		std::cout << "==========================" << std::endl << std::endl;

		playerHp = playerHp - monsterAtk;
		monsterHp = monsterHp - playerAtk;

		std::cout << "플레이어는 피해를 받았다! 플레이어의 남은 체력 : " << playerHp << std::endl;
		std::cout << "몬스터는 피해를 받았다! 몬스터의 남은 체력 : " << monsterHp << std::endl << std::endl;


		if (monsterHp == 0) std::cout << "몬스터는 쓰러졌다!" << std::endl;
	}
	else std::cout << "몬스터는 이미 죽어있는상태다";


	/*

	ex)
	===플레이어 기본 스탯===
	|playerHP : 100			|
	|                       |
	========================

	===몬스터 기본 스탯===
	|playerHP : 100			|
	|                       |
	========================

	플레이어의 남은 체력 : ???
	몬스터의 남은 체력 : ???

	ㄴ 한대씩 치고 결과
	*/
#pragma endregion




#pragma region 스위치문
	/*
	switch (switch_on)
	{
	default:
		break;
	}
	*/

	/*
		std::cout << "디아블로의 세계에 온걸 환영한다" << std::endl;
		std::cout << "직업을 골라봐라" << std::endl;
		std::cout << "1. 바바리안 2.소서리스 3.아마존 4.네크로맨서 5.팔라딘" << std::endl;

		int selectNum;
		std::cin >> selectNum;
		switch(selectNum)
		{
		case 1:	//if(selectNum == 1)
			std::cout << "바바리안을 선택함" << std::endl;
			break;
		case 2: //else if(selecNum ==2)
			std::cout << "소서리스 선택함" << std::endl;
			break;
		case 3: //else if(selecNum ==3)
			std::cout << "아마존 선택함" << std::endl;
			break;
		case 4: //else if(selecNum ==4)
			std::cout << "네크로맨서 선택함" << std::endl;
			break;
		case 5: //else if (selecNum =5)
			std::cout << "팔라딘 선택함" << std::endl;
			break;

		default:// else

			break;
		}
		*/
		// if문은 다양한 조건을 처리할때 유용
		// switch는 동등한 value의 조건을 판단할때 
		// case는 일치하는 값으로 분기처리 
		// 정수나 열거 타입에 적합

		/*
		int jobSelect;
		int skillSelect;

		std::cout << "직업을 선택해라(1: 전사, 2.마법사 3.도적 겸 서브잡 궁수) : ";
		std::cin >> jobSelect;

		switch (jobSelect)
		{	// 이 스위치는 직업을 선택
		case 1:
			std::cout << "전사를 선택함 어떤 공격을 하겠음?(1.강타 2.내려찍기) : ";

			std::cin >> skillSelect;
			switch (skillSelect)
			{
				// 스킬을 선택하는 곳(직업이 선택된 상황에서)
			case 1:
				std::cout << "전사가 강타를 시전";
				break;
			case 2:
				std::cout << "전사가 내려찍기를 시전";
				break;
			}
			break;
		case 2:
			std::cout << "마법사를 선택함 어떤 공격을 하겠음?(1.화염구 2.빙결) : ";

			std::cin >> skillSelect;
			switch (skillSelect)
			{
			case 1:
				std::cout << "마법사가 화염구를 시전";
				break;
			case 2:
				std::cout << "마법사가 빙결을 시전";
				break;
			}
			break;
		case 3:
			std::cout << "도적을 선택함 어떤 공격을 하겠음?(1.기습 2.표창던지기) : ";

			std::cin >> skillSelect;
			switch (skillSelect)
			{
			case 1:
				std::cout << "도적이 기습을 시전";
				break;
			case 2:
				std::cout << "도적이 표창던지기를 시전";
				break;
			}
			break;
		default:
			break;
		}
		*/
#pragma endregion


}