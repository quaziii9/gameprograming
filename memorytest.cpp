#include<iostream>

// �޸� �е�����

// 4����Ʈ�� ��� ��� , char�� int ���̿� ������ 4����Ʈ, 4����Ʈ, 4����Ʈ, 4����Ʈ
// char�� �ǵڿ� ������ 4����Ʈ ,4����Ʈ, 1����Ʈ + 2����Ʈ = 3����Ʈ�� 4����Ʈ �� 12����Ʈ

struct MyStruct
{
	int a;	// 4
	char c1; // 1
	int c;	// 4 
	short s;	// 2
};

int main() 
{
	MyStruct s;
	std::cout << "�׽�Ʈ : " << sizeof(s) << std::endl;
}

