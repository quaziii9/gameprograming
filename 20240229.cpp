#include <iostream>

// C++ ����Ʈ�� �ε� ��� ����ũ 
// C# ����Ʈ 

// �ݺ���(����),
#include <vector>
// ������, �Լ� ��Ÿ ��� ... Ư�� ���������� ����ϴ� ��ü���� ��κ��� �����ϱ� �䱸.
// ���������� �޶����ٰ� �ϴ��� ������ �ڵ带 ���� ��찡 �������� ����

// ���ø� (ũ�� �Լ����ø�, Ŭ���� ���ø�) <>

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
	std::cout << "������ : " << data << std::endl;
}

template <typename T>	// typename�� �ϳ��ΰ�� : ������ Ÿ���� �ٸ��� ����, �����ؾ���
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

	Output("���ø� ������ 3�� ��");
	Output1(1, 2);
	Output2(1, "����");

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

	// ���������� �̷���� : �迭��� �����̳�
	for (size_t i = 0; i < v.size(); i++)
	{
		std::cout << v[i] << std::endl;
	}

	std::cout << "���� v�� ���Ұ��� :" << v.size() << std::endl;
	std::cout << "���� v�� �ִ����� :" << v.max_size() << std::endl;
	std::cout << "���� v�� �뷮 : " << v.capacity() << std::endl;

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
	{	// ������� ������ �ȵǴ� �ϳ��� ������ ���� (�߰� ���Ի����� ����ϰ� �Ͼ�� �����͵��� ���ͷ� ����ϸ� �ӵ��� ����)
		std::cout << *iter << std::endl;
	}

	

	// auto a = 1; // c++ 
	// var c# Ÿ���߷� (���������θ�)
}

