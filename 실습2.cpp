#include<iostream>

int Attack(int power, int monsterHp);

int main()
{
	// �ǽ�
	// ������ ����µ�
	// 1. �����Լ��� �����
	// �� �����ϴ� value�� Ÿ���� �Ǵ� ������ Hp 
	// �� ����� ����غ���.
	int monsterHp = 100;

	std::cout << "���͸� �����ƴ�! ��������" << std::endl;
	for (int i = 0; i < 3; i++)
	{
		std::cout << i + 1 << "�� �Դϴ�" << std::endl;
		int power;
		std::cout << "���ݷ��� �Է��Ͻÿ�" << std::endl;
		std::cin >> power;
		monsterHp = Attack(power, monsterHp);
		std::cout << "���� ���� ü�� : " << monsterHp << std::endl << std::endl;
	}
	std::cout << "3�� ����! ������ �����մϴ� " << std::endl;
	std::cout << "������ ü�� : " << monsterHp;
}


int Attack(int power, int Hp)
{
	Hp = Hp - power;
	return Hp;
}
