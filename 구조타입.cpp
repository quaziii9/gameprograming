#include<iostream>

// 학생 정보를 담는 구조체
struct Student
{
	std::string name; // 학생이름 
	int age; // 멤버 변수 

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

Zerg LvUp(Zerg lv); //리턴 타입이 구조체 , 매개변수 타입이 구조체 


int main() {

	// 사용자 정의 자료형
	/*
		struct
		ㄴ 여러개의 변수를 묶어 하나의 데이터 단위로 정의하는 것.
		ㄴ 주로 관련있는 데이터를 묶어서 표현할때
	*/

	// 구조체 변수를 만들자.

	Student stu;

	stu.age = 10;
	stu.name = "경일이";

	std::cout << "이름 : " << stu.name << std::endl;
	std::cout << "나이 : " << stu.age << std::endl;
	stu.Print();

	Point p1 = { 10,20 }; // 생성과 동시에 초기화
	std::cout << "구조체 p1.x : " << p1.x << std::endl;
	std::cout << "구조체 p1.y : " << p1.y << std::endl;

	Zerg zergling = { 100, 20, 5 };
	std::cout << "=============================================" << std::endl;
	zergling = LvUp(zergling);

	std::cout << "챔버에서 업그레이드 1단계 완료" << std::endl;
	std::cout << "저글링 HP : " << zergling.hp << std::endl;
	std::cout << "저글링 공격력 : " << zergling.atk << std::endl;
	std::cout << "저글링 스피드 : " << zergling.speed << std::endl;

	Student sd[3];
	sd[0].name = "경일";
	sd[0].age = 10;
	sd[1].name = "김씨";
	sd[1].age = 20;

	Student sd2[3] = {
		{ "경일", 10 }, { "이순신", 20 }, {"세종대왕" , 5400 },
	};

	for (size_t i = 0; i < 3; i++)
	{
		std::cout << sd2[i].name << " , " << sd2[i].age << std::endl;
	}

	Family fm[3] = {
		{"석민" , "부" , 1975}, {"김단아" , "모" , 1977}, { "석준우" , "남동생" , 2004},
	};

	for (size_t i = 0; i < 3; i++)
	{
		std::cout << "이름 : " << fm[i].name << std::endl;
		std::cout << "관계 : " << fm[i].re << std::endl;
		std::cout << "년생 : " << fm[i].year << std::endl;
		std::cout << "============================================" << std::endl;
	}
}


void Student::Print()
{
	std::cout << "나는 학생 구조체의 멤버함수인 Print()" << std::endl;
}

Zerg LvUp(Zerg lv)
{
	lv.atk += 50;
	lv.hp += 100;
	lv.speed += 10;

	return lv;	// 구조체 리턴
}
