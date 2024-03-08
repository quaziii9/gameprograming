#include <iostream>

//함수 
// 수학에서의 함수 : x값이 정해지면 특정수식에 의해 y값이 정해지는 관계
// 프로그래밍 : 특정값이 입력이되면(x), 그 입력값을 처리해서(수식) 결과값을(y) 산출한다고 보면됨

// 함수를 사용하는 이유
//1. 반복적인 프로그래밍을 피할 수 있음
//2. 재사용이 가능
//3. 유지보수가 수월, 코드가 간략화된다
//4. 볼륨이 커지는 프로그램일수록 수정 또는 유지보수가 쉽지 않기 때문에 기능별로 세분화하는것이 필요

/*
	함수는 기본적으로 매개변수의 유무와 반환값의 유무에 따라
	네 개의 형태로 나눌수 있다
	1. 매개변수와 반환값이 모두 있는 경우
	int Sum(int a, int b)
	{
		//입력변수 a,b를 더해서 변수 result에 저장하고
		int result = a + b;

		// return문이 result를 반환
		return result;
	}

	2. 매개변수가 있고 반환값이 없는 경우
	void Print(int num)
	{
		std::cout << num << std::endl;
	}

	3. 매개변수가 없고 반환값이 있는 경우
	int ReadNum()
	{
		int num;
		std::cin >> num;
		return num;
	}

	4. 매개변수도 없고 반환값도 없는경우
	void Print()
	{
		std::cout << "나는 반환값도 없고 매개변수도 없다";
	}
*/
/////////////////////////////////////////////////////////

//1. 매개변수와 반환값이 모두 있는 경우
int Sum(int a, int b); // 함수 첫번째는 대문자 

int Sum(int a, int b, int c);
//2. 매개변수가 있고 반환값이 없는 경우
void Print(int num);

//3. 매개변수가 없고 반환값이 있는 경우
int ReadNum();

//4. 매개변수가 없고 반환값도 없는 경우
void Print();

/////////////////////////////////////////////////////////

void PrintValue(int num)
{
	std::cout << "정수 : " << num << std::endl;
}
void PrintValue(int a, int b)
{
	std::cout << a << " , " << b << std::endl;
}
void PrintValue(double num)
{
	std::cout << "실수 값 : " << num << std::endl;
}
int PrintValue(int a, int b, int c)
{
	return a + b + c;
}

/*
함수 오버로딩
 - 동일한 함수 이름을 사용하여 매개변수의 타입, 갯수를 다르게 정의하는것.
 - 편의성 제공
 ㄴ 비슷한 작업을 수행하는 여러 함수가 있을 때,
 ex) sum()이라는 함수
각 함수의 다른 이름을 부여하는 대신에
sum()
sum1()
오버로딩을 사용하면 가독성 향상, 사용자는 하나의 함수이름으로 다양한 형태의 함수를 호출 가능하다
**성립조건**
- 함수이름은 반드시 동일
- 매개변수의 데이터 타입이 다르거나 갯수가 달라야 한다.
*/


// 함수내부에서 다른 함수를 호출할 수 있다
// 입력된 수 중 절대값이 큰 수 구하기

int GetAbsValue(int num);	// Get : 값을 가져온다, Set : 값을 넣어준다 
int AbsCompare(int a, int b);			// 절대값 비교 함수

// 지역변수는 중괄호 내에 선언되는 변수는 모두 지역변수

void MyFunctionOne() {
	int num = 10;
	num++;
	std::cout << "지역변수 num의 데이터 : " << num << std::endl;
}


void myFunctionTwo()
{
	int num1 = 10;
	int num2 = 20;

	num1++;
	num2--;
	std::cout << "지역변수 num1의 데이터 : " << num1 << std::endl;
	std::cout << "지역변수 num2의 데이터 : " << num2 << std::endl;
}

int main()
{
	/*
	//1.
	int num = Sum(3, 4);
	std::cout << num <<std::endl;

	//2,
	Print(5);

	//3.
	int result;
	result = ReadNum();
	std::cout << result << std::endl;

	//4.
	Print();

	===============================================================================
	std::cout << "두개의 정수를 입력해라 : ";
	int inputNum1;
	int inputNum2;

	std::cin >> inputNum1 >> inputNum2;

	int result = AbsCompare(inputNum1, inputNum2);

	std::cout << "두 개의 수 중 절대값이 큰 수는? : " << result << std::endl;
	===============================================================================
	*/

	int num = 100; // 메인함수에서의 지역변수

	// 스택 구조 : FILO
	MyFunctionOne();
	myFunctionTwo();

	std::cout << "메인함수에서의 num데이터 : " << num << std::endl;

	PrintValue(5);
	PrintValue(5.5);
	std::cout << PrintValue(5, 7, 8) << std::endl;
	PrintValue(1, 2);
}


// void 공허하다 : 반환값이 x 
// 반환값이 int 이어야함 
// 반환값 함수이름 입력형태
// 매개변수 (파라미터)

int Sum(int a, int b)
{
	//입력변수 a,b를 더해서 변수 result에 저장하고
	int result = a + b;

	// return문이 result를 반환
	return result;
}

int Sum(int a, int b, int c)
{
	return a + b + c;
}

void Print(int num)
{
	std::cout << num << std::endl;
}

int ReadNum()
{
	int num;
	std::cin >> num;
	return num;
}

void Print()
{
	std::cout << "나는 반환값도 없고 매개변수도 없다";
}

int GetAbsValue(int num)
{
	//만약 num이 0보다 작으면 -1을 곱해서 리턴해라
	if (num < 0)
	{
		return num * (-1);
	}
	else
	{
		return num;
	}
}

int AbsCompare(int a, int b)
{
	if (GetAbsValue(a) > GetAbsValue(b))
	{
		return a;
	}
	else if (GetAbsValue(a) < GetAbsValue(b))
	{
		return b;
	}
}