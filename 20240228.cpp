#include<iostream>
// :: ���� ������

//Acompany
//Bcompany
//Ccompany

// ����̳� ��⿡ ���� namespace�� �׷���, �ڵ��� ���� ��Ȯ �������� ����, �и� 
// namespace ��ø ���� 


#pragma region ����
/*
namespace ACompany
{
	void Print() 
	{
		std::cout << "���� Aȸ���� ����Ʈ �Դϴ�.";
	}
}

namespace BCompany
{
	void MyFunction()
	{

	}
	namespace ABC 
	{
		void Print()
		{
			std::cout << "���� Bȸ���� ����Ʈ �Դϴ�.";
		}
	}
}

namespace CCompany
{
	void Print()
	{
		std::cout << "���� Cȸ���� ����Ʈ �Դϴ�.";
	}
}

namespace A {
	enum MyEnum
	{

	};

}

int Student::Sum(int a, int b)
{
	return a + b;
}



// �޸� �е�����
struct MyStruct
{
	int a;	// 4
	int c;	// 4 
	char c1; // 1
	short s;	// 2
	
	// 4����Ʈ�� ��� ��� , char�� int ���̿� ������ 4����Ʈ, 4����Ʈ, 4����Ʈ, 4����Ʈ
	// char�� �ǵڿ� ������ 4����Ʈ ,4����Ʈ, 1����Ʈ + 2����Ʈ = 3����Ʈ�� 4����Ʈ �� 12����Ʈ
};

struct Point
{
	double x;
	double y;
};

// C#���� ����ü�� ���� ���� ���� 
double Distance(Point &p1, Point p2)
{
	double deltax = p2.x - p1.x;
	double deltay = p2.y - p1.y;

	//sqrut : ������
	return std::sqrt(deltax * deltax + deltay * deltay);

}
*/
/*
struct Circle
{
	int radius;
	double CalcArea()
	{
		return 3.14 * radius * radius;
	}
};
// ����ü�� �⺻������ public





class Rectangle {
	// �簢���� ���̸� ���ϴ� �Լ��� ����� ���
public:
	void Area(int width, int height)
	{
		std::cout << "�غ� :" << width << ", ���� :" << height << "�� �簢�� ���̴� ? " << width * height << std::endl;
	}

	void Area()
	{
		std::cout << "�غ��� �Է��Ͻÿ� ";
		std::cin >> width;
		std::cout << "���̸� �Է��Ͻÿ� ";
		std::cin >> height;
		std::cout << "�簢�� ���̴� : " << width * height << std::endl;
	}

private:
	int width;
	int height;
};
*/
#pragma endregion

// ���� ����������� ��� 2�� ������
// ��ü : ��, ������� , ��� 

// ���� ����������� 2000���� �ְ� �ΰ��� ����� ���ߴ�.
// �� �ൿ
// ��������� ������ �Ǵ�.

// ����
// 1. ��� 100���� ������ �ְ�, �������� �ְ� .. ��Ÿ ��� ...
// 2. ���� �� �ȾƼ� ���� ������ ������ õ�����Դϴ�.

int numApple;
int myMoney;


// ��� ���� �ݾ��� �Լ��� �Ű������� ���� 
int Apple(int money)
{
	int num = money / 1000; //����� 1000����
	numApple -= num; // ����� ������ �پ��
	myMoney += money;

	return num; // ���� ���Ű� �߻��� ����� ���� return
}


class FruitSeller {
public:
	void Init(int price, int num, int money) // Init:�ʱ�ȭ
	{
		applePrice = price;
		numApple = num;
		myMoney = money;
	}
	int SaleApple(int money)
	{
		int num = money / applePrice;
		numApple -= num;
		myMoney += money;
		return num;
	}
	void Show() {
		std::cout << "���� ��� ���� : " << numApple;
		std::cout << "�� �� : " << myMoney;
	}
private:
	int applePrice;
	int numApple;
	int myMoney;
	
};


class Person {
public :
	std::string GetName() { return name; }
	int GetAge() const { return age; }	// const : ���� ������, ����x, (c++������ const ���)
public: 
	void SetName(std::string strname)
	{
		name = strname;
	}
	void Setage(int a)
	{
		age = a;
	}

private:
	std::string name;
	int age;
};


int main() 
{
#pragma region ����
	/*
	ACompany::Print();
	BCompany::ABC::Print();
	BCompany::MyFunction(); 
	// BCompany::Print(); ->����
	CCompany::Print();

	MyStruct m;
	std::cout << "�׽�Ʈ : " << sizeof(m) << std::endl;

	Point p1 = { 1.0, 2.0 };
	Point p2 = { 4.0, 6.0 };

	double dis = Distance(p1,p2);
	


	Student s;

	//s.Print();
	//s.Print(1, 2);

	Rectangle a;
	a.Area(2, 4);
	a.Area();
	*/
#pragma endregion

	Person p;
	p.SetName("������");
	p.Setage(10);

	std::cout << "�̸� : " << p.GetName() << std::endl;
	std::cout << "���� : " << p.GetAge() << std::endl;
}




#pragma region MyRegion
/*
private : Ŭ���� ���ο����� ��������(��������)
- ���ܾ��� ����������� �̰��� ���

public : �ܺο��� �����Ӱ� ������ �����ϴ�
- �ܺο��� ���������� ����� ������ �� �ֱ� ������ ������ ��ɵ��� �̰���...
*/


/*
1. OOP�� ���� �����Ұ�
2. �������� ��������

������� 
1. 5*5
2. 1~25
3. ���࿡ 2�� �Է����ϸ� 
	�� �ش� ���ڸ� Ư�� ��ȣ�� �ٲ۴�. * # 
	�� üũ�� ���� ���� �밢��
	1 2 3 4 5 
	6 7 8 9 10
	11 12 13 14 15
	16 17 18 19 20 
	21 22 23 24 25
	[0] ��° 
	[6] ��° 
	���� 3�� �̻�

	�÷��̾� ��ǻ�� 
*/

#pragma endregion