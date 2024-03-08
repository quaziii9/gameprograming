#include<iostream>

// �л� ������ ��� ����ü
struct Student
{
	std::string name; // �л��̸� 
	int age; // ��� ���� 

	void Print();
};

struct Point
{
	int x;
	int y;
};

struct Unit
{
	std::string name;
	int hp;
	int atk;
	int isDie;
};

struct Zerg
{
	int atk;
	int hp;
	int speed;
};

struct Family
{
	std::string name;
	std::string re;
	int year;
};

Zerg LvUp(Zerg lv); //���� Ÿ���� ����ü , �Ű����� Ÿ���� ����ü 


int main() {

	// ����� ���� �ڷ���
	/*
		struct
		�� �������� ������ ���� �ϳ��� ������ ������ �����ϴ� ��.
		�� �ַ� �����ִ� �����͸� ��� ǥ���Ҷ�
	*/

	// ����ü ������ ������.

	Student stu;

	stu.age = 10;
	stu.name = "������";

	std::cout << "�̸� : " << stu.name << std::endl;
	std::cout << "���� : " << stu.age << std::endl;
	stu.Print();

	Point p1 = { 10,20 }; // ������ ���ÿ� �ʱ�ȭ
	std::cout << "����ü p1.x : " << p1.x << std::endl;
	std::cout << "����ü p1.y : " << p1.y << std::endl;

	Zerg zergling = { 100, 20, 5 };
	std::cout << "=============================================" << std::endl;
	zergling = LvUp(zergling);

	std::cout << "è������ ���׷��̵� 1�ܰ� �Ϸ�" << std::endl;
	std::cout << "���۸� HP : " << zergling.hp << std::endl;
	std::cout << "���۸� ���ݷ� : " << zergling.atk << std::endl;
	std::cout << "���۸� ���ǵ� : " << zergling.speed << std::endl;

	Student sd[3];
	sd[0].name = "����";
	sd[0].age = 10;
	sd[1].name = "�达";
	sd[1].age = 20;

	Student sd2[3] = {
		{ "����", 10 }, { "�̼���", 20 }, {"�������" , 5400 },
	};

	for (size_t i = 0; i < 3; i++)
	{
		std::cout << sd2[i].name << " , " << sd2[i].age << std::endl;
	}

	Family fm[3] = {
		{"����" , "��" , 1975}, {"��ܾ�" , "��" , 1977}, { "���ؿ�" , "������" , 2004},
	};

	for (size_t i = 0; i < 3; i++)
	{
		std::cout << "�̸� : " << fm[i].name << std::endl;
		std::cout << "���� : " << fm[i].re << std::endl;
		std::cout << "��� : " << fm[i].year << std::endl;
		std::cout << "============================================" << std::endl;
	}
}


void Student::Print()
{
	std::cout << "���� �л� ����ü�� ����Լ��� Print()" << std::endl;
}

Zerg LvUp(Zerg lv)
{
	lv.atk += 50;
	lv.hp += 100;
	lv.speed += 10;

	return lv;	// ����ü ����
}
