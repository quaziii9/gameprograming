#include<iostream>
// :: 접근 지정자

//Acompany
//Bcompany
//Ccompany

// 기능이나 모듈에 따라서 namespace로 그룹핑, 코드의 구조 명확 유지보수 용이, 분리 
// namespace 중첩 가능 


#pragma region 수업
/*
namespace ACompany
{
	void Print() 
	{
		std::cout << "나는 A회사의 포린트 입니다.";
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
			std::cout << "나는 B회사의 포린트 입니다.";
		}
	}
}

namespace CCompany
{
	void Print()
	{
		std::cout << "나는 C회사의 포린트 입니다.";
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



// 메모리 패딩현상
struct MyStruct
{
	int a;	// 4
	int c;	// 4 
	char c1; // 1
	short s;	// 2
	
	// 4바이트씩 끊어서 계산 , char가 int 사이에 있으면 4바이트, 4바이트, 4바이트, 4바이트
	// char가 맨뒤에 있으면 4바이트 ,4바이트, 1바이트 + 2바이트 = 3바이트라 4바이트 총 12바이트
};

struct Point
{
	double x;
	double y;
};

// C#에서 구조체는 값에 의한 전달 
double Distance(Point &p1, Point p2)
{
	double deltax = p2.x - p1.x;
	double deltay = p2.y - p1.y;

	//sqrut : 제곱근
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
// 구조체는 기본적으로 public





class Rectangle {
	// 사각형의 넓이를 구하는 함수를 만들고 출력
public:
	void Area(int width, int height)
	{
		std::cout << "밑변 :" << width << ", 높이 :" << height << "의 사각형 넓이는 ? " << width * height << std::endl;
	}

	void Area()
	{
		std::cout << "밑변을 입력하시오 ";
		std::cin >> width;
		std::cout << "높이를 입력하시오 ";
		std::cin >> height;
		std::cout << "사각형 넓이는 : " << width * height << std::endl;
	}

private:
	int width;
	int height;
};
*/
#pragma endregion

// 내가 과일장수한테 사과 2개 구매함
// 객체 : 나, 과일장수 , 사과 

// 나는 과일장수한테 2000원을 주고 두개의 사과를 구했다.
// ㄴ 행동
// 과일장수는 과일을 판다.

// 상태
// 1. 사과 100개를 가지고 있고, 오렌지도 있고 .. 기타 등등 ...
// 2. 내가 얼마 팔아서 현재 누적된 수익은 천만원입니다.

int numApple;
int myMoney;


// 사과 구매 금액이 함수의 매개변수로 전달 
int Apple(int money)
{
	int num = money / 1000; //사과가 1000원임
	numApple -= num; // 사과의 갯수가 줄어듬
	myMoney += money;

	return num; // 실제 구매가 발생한 사과의 수를 return
}


class FruitSeller {
public:
	void Init(int price, int num, int money) // Init:초기화
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
		std::cout << "남은 사과 갯수 : " << numApple;
		std::cout << "내 돈 : " << myMoney;
	}
private:
	int applePrice;
	int numApple;
	int myMoney;
	
};


class Person {
public :
	std::string GetName() { return name; }
	int GetAge() const { return age; }	// const : 내부 안정성, 변경x, (c++에서는 const 사용)
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
#pragma region 수업
	/*
	ACompany::Print();
	BCompany::ABC::Print();
	BCompany::MyFunction(); 
	// BCompany::Print(); ->오류
	CCompany::Print();

	MyStruct m;
	std::cout << "테스트 : " << sizeof(m) << std::endl;

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
	p.SetName("경일이");
	p.Setage(10);

	std::cout << "이름 : " << p.GetName() << std::endl;
	std::cout << "나이 : " << p.GetAge() << std::endl;
}




#pragma region MyRegion
/*
private : 클래스 내부에서만 참조가능(정보은닉)
- 숨겨야할 멤버변수들을 이곳에 사용

public : 외부에서 자유롭게 참조가 가능하다
- 외부에서 직접적으로 멤버를 조작할 수 있기 때문에 공개할 기능들은 이곳에...
*/


/*
1. OOP에 대해 정리할것
2. 오랜만에 구현과제

빙고게임 
1. 5*5
2. 1~25
3. 만약에 2를 입력을하면 
	ㄴ 해당 숫자를 특수 기호로 바꾼다. * # 
	ㄴ 체크를 가로 세로 대각선
	1 2 3 4 5 
	6 7 8 9 10
	11 12 13 14 15
	16 17 18 19 20 
	21 22 23 24 25
	[0] 번째 
	[6] 번째 
	빙고가 3줄 이상

	플레이어 컴퓨터 
*/

#pragma endregion