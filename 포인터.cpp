#include<iostream>

void Value(int n);
void Address(int* n);
void Reference(int& n);

// call by value  : ���� ���� ����
// call by reference : ������ ���� ����

void Swap(int a, int b);
void Swap_Address(int* a, int* b);
void Swap_Reference(int& a, int& b);

int main() {

	// ������ : �ּҸ� �����ϴ� ���� 
	// ������ ������ �����͸� ���������� �����ʹ� �޸� ������ �ּҸ� ����
	// ������ ������ �ּҸ� �����Ϸ��� ������ �ּҸ� �˾ƾ��Ѵ�
	// ���� �̸� �տ� &�����ڸ� ���̸� �ش� ������ �ּҸ� ��ȯ�Ѵ�

	// ������ ������ �����ϴ� ������ �ּҿ� ����� ���� �����Ϸ��� 
	// *

	/*
	int number = 10; // ������ ����
	int* ptr = &number;

	std::cout << "���� number�� �� : " << number << std::endl;
	std::cout << "���� number�� �ּ� �� : " << &number << std::endl;
	std::cout << "������ ���� ptr�� �� : " << ptr << std::endl;
	std::cout << "������ ���� ptr�� ����Ű�� �� : " << *ptr << std::endl;
	*/

#pragma region point
	
	
	int num = 10;
	std::cout << "num�� �� : " << num << std::endl;
	std::cout << "num�� �ּҰ� : " << &num << std::endl;

	int* p = &num;
	std::cout << "p�� �� : " << p << std::endl;
	// ������ ������ �ᱹ�� �����̱� ������ �ּҰ��� ����
	std::cout << "p�� �ּҰ� : " << &p << std::endl;

	std::cout << "p�� ��(num) : " << *p << std::endl;

	*p = 777;
	// �޸��� �ּҰ��� �˰������� �����͸� ���� ����
	// ��������ȭ 64��Ʈ������ 8����Ʈ
	std::cout << "p�� ��(num) : " << *p << std::endl;

	int* ptr = nullptr; // NULL; �ƹ��͵� ����Ű�� �ʰڴ�

	int** pp; // ������ ������ �ּҸ� ����
	pp = &p;
	std::cout << "pp�� �� : (p�� �ּҰ�) : " << pp << std::endl;
	std::cout << "*pp�� ����Ű�� �ִ� ��(num�� �ּ� ��): " << *pp << std::endl;

	**pp = 1234; // num�� ���� �ٲ�
	std::cout << "num�� �� : " << num << std::endl;
	
	
#pragma endregion

	// ������ ���� ����, ���氡��
	/*
	int num = 30; // call by value;
	Value(num); // n = num ���·� ����
	std::cout << "num �� : " << num << std::endl;
	std::cout << "num�� �ּҰ� : " << &num << std::endl;

	int num1 = 30;
	Address(&num1);
	std::cout << "num1 �� : " << num1 << std::endl;
	std::cout << "num1�� �ּҰ� : " << &num1 << std::endl;

	int num2 = 30;
	Reference(num2);
	std::cout << "num2 �� : " << num2 << std::endl;
	std::cout << "num2�� �ּҰ� : " << &num2 << std::endl;
	

	/*
	int num1 = 10;
	int num2 = 20;

	std::cout << "������ ������ : " << num1 << " , " << num2 << std::endl;
	Swap(num1, num2);
	std::cout << "���� �� ������ : " << num1 << " , " << num2 << std::endl;

	std::cout << "===========================================" << std::endl;

	int swapAddrNum1 = 10;
	int swapAddrNum2 = 20;
	std::cout << "������ ������ : " << swapAddrNum1 << " , " << swapAddrNum1 << std::endl;
	Swap_Address(&swapAddrNum1, &swapAddrNum2);
	std::cout << "���� �� ������ : " << swapAddrNum1 << " , " << swapAddrNum2 << std::endl;

	std::cout << "===========================================" << std::endl;

	int swapRefNum1 = 10;
	int swapRefNum2 = 20;
	std::cout << "������ ������ : " << swapRefNum1 << " , " << swapRefNum2 << std::endl;
	Swap_Reference(swapRefNum1, swapRefNum2);
	std::cout << "���� �� ������ : " << swapRefNum1 << " , " << swapRefNum2 << std::endl;
	*/

}

void Value(int n)
{
	n = 10;
	std::cout << "n�� �� : " << n << std::endl;
	std::cout << "n�� �ּҰ� : " << &n << std::endl;

}

void Address(int* n)
{
	*n = 10;
	std::cout << "n�� �� : " << *n << std::endl;
	std::cout << "n�� �ּҰ� : " << &n << std::endl;
}

void Reference(int& n)
{
	n = 10;
	std::cout << "n�� �� : " << n << std::endl;
	std::cout << "n�� �ּ� �� : " << &n << std::endl;
}


// �Ʒ��� ���� ���´� ������ �ƴ϶� ���簡 �ȴ�
// num1, num2�� ���� ����� 10,20�� �����. 
// swap ���ο����� �������� �̷������ main�Լ��� �ִ� num1, num2�� ������ ���� �ʴ´�.
void Swap(int a, int b)
{
	int temp = a;
	a = b;
	b = temp;
	std::cout << "Swap()�Լ� ������ �� : ";
	std::cout << a << " , " << b << std::endl;
}

// �ּҰ��� �Ű������� �����ؼ� �����Ϸ��� ������ ��������
void Swap_Address(int* a, int* b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

// �������
// �ּ� ���� x, ������ ������ ���� -> �����Ϸ��� �޸𸮸� ����
// ��, ������ �ٲ��(������) �����ϴ� ������ ���� ����
void Swap_Reference(int& a, int& b)
{
	int temp = a;
	a = b;
	b = temp;
}
