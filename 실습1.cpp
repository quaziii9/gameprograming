#include<iostream>

/*
	+ , -, * / 함수를 만들어 보아라 .

	각 함수마다 데이터를 넣고 출력까지 해보세용
*/


void sum(int a, int b)
{
	int result = a + b;
	std::cout << a << " + " << b << " = " << result;
}

void min(int a, int b)
{
	int result = a - b;
	std::cout << a << " - " << b << " = " << result;
}

void mul(int a, int b)
{
	int result = a * b;
	std::cout << a << " * " << b << " = " << result;
}

void di(int a, int b)
{
	int result = a / b;
	std::cout << a << " / " << b << " = " << result;
}



int main()
{
	int inputNum1, inputNum2, Select;

	std::cout << "두 개의 숫자를 입력하시오" << std::endl;
	std::cin >> inputNum1 >> inputNum2;
	std::cout << "1.더하기, 2.빼기, 3. 곱하기, 4. 나누기" << std::endl;
	std::cin >> Select;

	switch (Select)
	{
	case 1:
		sum(inputNum1, inputNum2);
		break;
	case 2:
		min(inputNum1, inputNum2);
		break;
	case 3:
		mul(inputNum1, inputNum2);
		break;
	case 4:
		di(inputNum1, inputNum2);
		break;

	}




}