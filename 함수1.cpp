#include <iostream>

//�Լ� 
// ���п����� �Լ� : x���� �������� Ư�����Ŀ� ���� y���� �������� ����
// ���α׷��� : Ư������ �Է��̵Ǹ�(x), �� �Է°��� ó���ؼ�(����) �������(y) �����Ѵٰ� �����

// �Լ��� ����ϴ� ����
//1. �ݺ����� ���α׷����� ���� �� ����
//2. ������ ����
//3. ���������� ����, �ڵ尡 ����ȭ�ȴ�
//4. ������ Ŀ���� ���α׷��ϼ��� ���� �Ǵ� ���������� ���� �ʱ� ������ ��ɺ��� ����ȭ�ϴ°��� �ʿ�

/*
	�Լ��� �⺻������ �Ű������� ������ ��ȯ���� ������ ����
	�� ���� ���·� ������ �ִ�
	1. �Ű������� ��ȯ���� ��� �ִ� ���
	int Sum(int a, int b)
	{
		//�Էº��� a,b�� ���ؼ� ���� result�� �����ϰ�
		int result = a + b;

		// return���� result�� ��ȯ
		return result;
	}

	2. �Ű������� �ְ� ��ȯ���� ���� ���
	void Print(int num)
	{
		std::cout << num << std::endl;
	}

	3. �Ű������� ���� ��ȯ���� �ִ� ���
	int ReadNum()
	{
		int num;
		std::cin >> num;
		return num;
	}

	4. �Ű������� ���� ��ȯ���� ���°��
	void Print()
	{
		std::cout << "���� ��ȯ���� ���� �Ű������� ����";
	}
*/
/////////////////////////////////////////////////////////

//1. �Ű������� ��ȯ���� ��� �ִ� ���
int Sum(int a, int b); // �Լ� ù��°�� �빮�� 

int Sum(int a, int b, int c);
//2. �Ű������� �ְ� ��ȯ���� ���� ���
void Print(int num);

//3. �Ű������� ���� ��ȯ���� �ִ� ���
int ReadNum();

//4. �Ű������� ���� ��ȯ���� ���� ���
void Print();

/////////////////////////////////////////////////////////

void PrintValue(int num)
{
	std::cout << "���� : " << num << std::endl;
}
void PrintValue(int a, int b)
{
	std::cout << a << " , " << b << std::endl;
}
void PrintValue(double num)
{
	std::cout << "�Ǽ� �� : " << num << std::endl;
}
int PrintValue(int a, int b, int c)
{
	return a + b + c;
}

/*
�Լ� �����ε�
 - ������ �Լ� �̸��� ����Ͽ� �Ű������� Ÿ��, ������ �ٸ��� �����ϴ°�.
 - ���Ǽ� ����
 �� ����� �۾��� �����ϴ� ���� �Լ��� ���� ��,
 ex) sum()�̶�� �Լ�
�� �Լ��� �ٸ� �̸��� �ο��ϴ� ��ſ�
sum()
sum1()
�����ε��� ����ϸ� ������ ���, ����ڴ� �ϳ��� �Լ��̸����� �پ��� ������ �Լ��� ȣ�� �����ϴ�
**��������**
- �Լ��̸��� �ݵ�� ����
- �Ű������� ������ Ÿ���� �ٸ��ų� ������ �޶�� �Ѵ�.
*/


// �Լ����ο��� �ٸ� �Լ��� ȣ���� �� �ִ�
// �Էµ� �� �� ���밪�� ū �� ���ϱ�

int GetAbsValue(int num);	// Get : ���� �����´�, Set : ���� �־��ش� 
int AbsCompare(int a, int b);			// ���밪 �� �Լ�

// ���������� �߰�ȣ ���� ����Ǵ� ������ ��� ��������

void MyFunctionOne() {
	int num = 10;
	num++;
	std::cout << "�������� num�� ������ : " << num << std::endl;
}


void myFunctionTwo()
{
	int num1 = 10;
	int num2 = 20;

	num1++;
	num2--;
	std::cout << "�������� num1�� ������ : " << num1 << std::endl;
	std::cout << "�������� num2�� ������ : " << num2 << std::endl;
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
	std::cout << "�ΰ��� ������ �Է��ض� : ";
	int inputNum1;
	int inputNum2;

	std::cin >> inputNum1 >> inputNum2;

	int result = AbsCompare(inputNum1, inputNum2);

	std::cout << "�� ���� �� �� ���밪�� ū ����? : " << result << std::endl;
	===============================================================================
	*/

	int num = 100; // �����Լ������� ��������

	// ���� ���� : FILO
	MyFunctionOne();
	myFunctionTwo();

	std::cout << "�����Լ������� num������ : " << num << std::endl;

	PrintValue(5);
	PrintValue(5.5);
	std::cout << PrintValue(5, 7, 8) << std::endl;
	PrintValue(1, 2);
}


// void �����ϴ� : ��ȯ���� x 
// ��ȯ���� int �̾���� 
// ��ȯ�� �Լ��̸� �Է�����
// �Ű����� (�Ķ����)

int Sum(int a, int b)
{
	//�Էº��� a,b�� ���ؼ� ���� result�� �����ϰ�
	int result = a + b;

	// return���� result�� ��ȯ
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
	std::cout << "���� ��ȯ���� ���� �Ű������� ����";
}

int GetAbsValue(int num)
{
	//���� num�� 0���� ������ -1�� ���ؼ� �����ض�
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