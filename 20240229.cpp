#include <iostream>

// C++ 리스트는 로드 기반 더블링크 
// C# 리스트 

// 반복자(바톤),
#include <vector>
// 변수나, 함수 기타 등등 ... 특정 데이터형을 사용하는 실체들의 대부분을 선언하길 요구.
// 데이터형이 달라진다고 하더라도 동일한 코드를 갖는 경우가 생각보다 많음

// 템플릿 (크게 함수템플릿, 클래스 템플릿) <>

/*
int GetMax(int x, int y) {
	if (x > y) return x;
	else return y;
}

float GetMax(float x, float y)
{
	if (x > y) return x;
	else return y;
}
*/
template <typename T> 
T GetMax(T x, T y)
{
	if (x > y) return x;
	else return y;
}

template <typename T> 
void Output(T data)
{
	std::cout << "데이터 : " << data << std::endl;
}

template <typename T>	// typename이 하나인경우 : 데이터 타입이 다르면 오류, 동일해야함
void Output1(T a, T b)
{
	std::cout << a << " , " << b << std::endl;
}

template<typename T1, typename T2>
void Output2(T1 a, T2 b)
{
	std::cout << a << " , " << b << std::endl;
}

template<typename T>
class Box 
{
private:
	T data;
public:
	void SetData(T d) { data = d; }
	T GetData() { return data; }

	//void Print();
};


template<typename T1, typename T2>
class Box2
{
private:
	T1 firstData;
	T2 secondData;
public:
	T1 GetFirst();
	T2 GetSecond();

	void SetFirst(T1 val) { firstData = val; }
	void SetSecond(T2 val) { secondData = val; }
};

template<typename T1, typename T2>
T1 Box2<T1, T2>::GetFirst()
{
	return firstData();
}

template<typename T1, typename T2>
T2 Box2<T1, T2>::GetSecond()
{
	return secondData();
}


/*
template<typename T>
void Box<T>::Print()
{
}
*/

int main()
{
	std::cout << GetMax(1, 2) << std::endl;
	std::cout << GetMax(1.5, 2.5) << std::endl;

	Output("오늘만 지나면 3일 쉼");
	Output1(1, 2);
	Output2(1, "ㅎㅎ");

	std::cout << "==============================================" << std::endl;

	Box<int> box;
	box.SetData(100);
	std::cout << box.GetData() << std::endl;

	Box2<int, double > b2;

	b2.SetFirst(10);
	b2.SetSecond(10.5);
	
	std::vector<int> v;

	v.push_back(1);
	v.push_back(2);
	v.push_back(3);
	v.push_back(4);
	v.push_back(5);
	v.push_back(6);
	v.push_back(7);
	v.push_back(8);
	v.push_back(9);
	v.push_back(10);

	// 연속적으로 이루어짐 : 배열기반 컨테이너
	for (size_t i = 0; i < v.size(); i++)
	{
		std::cout << v[i] << std::endl;
	}

	std::cout << "벡터 v의 원소갯수 :" << v.size() << std::endl;
	std::cout << "벡터 v의 최대저장 :" << v.max_size() << std::endl;
	std::cout << "벡터 v의 용량 : " << v.capacity() << std::endl;

	v.pop_back();
	for (size_t i = 0; i < v.size(); i++)
	{
		std::cout << v[i] << std::endl;
	}

	std::vector<int> v1;
	v1.push_back(10);
	v1.push_back(10);
	v1.push_back(10);
	v1.push_back(10);
	v1.push_back(10);

	//iterator 
	std::vector<int>::iterator iter;

	for (iter = v1.begin(); iter != v1.end(); ++iter)
	{	// 빈공간이 없으면 안되니 하나씩 앞으로 땡김 (중간 삽입삭제가 빈번하게 일어나는 데이터들을 벡터로 사용하면 속도가 느림)
		std::cout << *iter << std::endl;
	}

	

	// auto a = 1; // c++ 
	// var c# 타입추론 (지역변수로만)
}

