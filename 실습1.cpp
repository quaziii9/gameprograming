#include<iostream>

/*
	+ , -, * / �Լ��� ����� ���ƶ� .

	�� �Լ����� �����͸� �ְ� ��±��� �غ�����
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

	std::cout << "�� ���� ���ڸ� �Է��Ͻÿ�" << std::endl;
	std::cin >> inputNum1 >> inputNum2;
	std::cout << "1.���ϱ�, 2.����, 3. ���ϱ�, 4. ������" << std::endl;
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