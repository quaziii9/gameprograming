#include<iostream>

void Value(int n);
void Address(int* n);
void Reference(int& n);

// call by value  : 값에 의한 전달
// call by reference : 참조에 의한 전달

void Swap(int a, int b);
void Swap_Address(int* a, int* b);
void Swap_Reference(int& a, int& b);

int main() {

	// 포인터 : 주소를 저장하는 변수 
	// 기존의 변수는 데이터를 저장하지만 포인터는 메모리 공간의 주소를 저장
	// 포인터 변수가 주소를 저장하려면 변수의 주소를 알아야한다
	// 변수 이름 앞에 &연산자를 붙이면 해당 변수의 주소를 반환한다

	// 포인터 변수가 저장하는 변수의 주소에 저장된 값을 참조하려면 
	// *

	/*
	int number = 10; // 데이터 저장
	int* ptr = &number;

	std::cout << "변수 number의 값 : " << number << std::endl;
	std::cout << "변수 number의 주소 값 : " << &number << std::endl;
	std::cout << "포인터 변수 ptr의 값 : " << ptr << std::endl;
	std::cout << "포인터 변수 ptr이 가리키는 값 : " << *ptr << std::endl;
	*/

#pragma region point
	
	
	int num = 10;
	std::cout << "num의 값 : " << num << std::endl;
	std::cout << "num의 주소값 : " << &num << std::endl;

	int* p = &num;
	std::cout << "p의 값 : " << p << std::endl;
	// 포인터 변수도 결국엔 변수이기 때문에 주소값이 있음
	std::cout << "p의 주소값 : " << &p << std::endl;

	std::cout << "p의 값(num) : " << *p << std::endl;

	*p = 777;
	// 메모리의 주소값을 알고있으면 데이터를 변경 가능
	// 성능최적화 64비트에서는 8바이트
	std::cout << "p의 값(num) : " << *p << std::endl;

	int* ptr = nullptr; // NULL; 아무것도 가리키지 않겠다

	int** pp; // 포인터 변수의 주소를 담음
	pp = &p;
	std::cout << "pp의 값 : (p의 주소값) : " << pp << std::endl;
	std::cout << "*pp가 가르키고 있는 값(num의 주소 값): " << *pp << std::endl;

	**pp = 1234; // num의 값을 바꿈
	std::cout << "num의 값 : " << num << std::endl;
	
	
#pragma endregion

	// 참조는 직접 접근, 변경가능
	/*
	int num = 30; // call by value;
	Value(num); // n = num 형태로 복사
	std::cout << "num 값 : " << num << std::endl;
	std::cout << "num의 주소값 : " << &num << std::endl;

	int num1 = 30;
	Address(&num1);
	std::cout << "num1 값 : " << num1 << std::endl;
	std::cout << "num1의 주소값 : " << &num1 << std::endl;

	int num2 = 30;
	Reference(num2);
	std::cout << "num2 값 : " << num2 << std::endl;
	std::cout << "num2의 주소값 : " << &num2 << std::endl;
	

	/*
	int num1 = 10;
	int num2 = 20;

	std::cout << "스왑전 데이터 : " << num1 << " , " << num2 << std::endl;
	Swap(num1, num2);
	std::cout << "스왑 후 데이터 : " << num1 << " , " << num2 << std::endl;

	std::cout << "===========================================" << std::endl;

	int swapAddrNum1 = 10;
	int swapAddrNum2 = 20;
	std::cout << "스왑전 데이터 : " << swapAddrNum1 << " , " << swapAddrNum1 << std::endl;
	Swap_Address(&swapAddrNum1, &swapAddrNum2);
	std::cout << "스왑 후 데이터 : " << swapAddrNum1 << " , " << swapAddrNum2 << std::endl;

	std::cout << "===========================================" << std::endl;

	int swapRefNum1 = 10;
	int swapRefNum2 = 20;
	std::cout << "스왑전 데이터 : " << swapRefNum1 << " , " << swapRefNum2 << std::endl;
	Swap_Reference(swapRefNum1, swapRefNum2);
	std::cout << "스왑 후 데이터 : " << swapRefNum1 << " , " << swapRefNum2 << std::endl;
	*/

}

void Value(int n)
{
	n = 10;
	std::cout << "n의 값 : " << n << std::endl;
	std::cout << "n의 주소값 : " << &n << std::endl;

}

void Address(int* n)
{
	*n = 10;
	std::cout << "n의 값 : " << *n << std::endl;
	std::cout << "n의 주소값 : " << &n << std::endl;
}

void Reference(int& n)
{
	n = 10;
	std::cout << "n의 값 : " << n << std::endl;
	std::cout << "n의 주소 값 : " << &n << std::endl;
}


// 아래와 같은 형태는 전달이 아니라 복사가 된다
// num1, num2에 각각 저장된 10,20에 복사됨. 
// swap 내부에서만 값변경이 이루어지고 main함수에 있는 num1, num2는 영향을 받지 않는다.
void Swap(int a, int b)
{
	int temp = a;
	a = b;
	b = temp;
	std::cout << "Swap()함수 내부의 값 : ";
	std::cout << a << " , " << b << std::endl;
}

// 주소값을 매개변수로 전달해서 스왑하려는 변수에 직접접근
void Swap_Address(int* a, int* b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

// 참조방식
// 주소 리턴 x, 참조는 변수의 별명 -> 스왑하려는 메모리를 공유
// 즉, 별명이 바뀌면(참조자) 참조하는 변수의 값이 변경
void Swap_Reference(int& a, int& b)
{
	int temp = a;
	a = b;
	b = temp;
}
