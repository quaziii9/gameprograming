#include<iostream>

// 메모리 패딩현상

// 4바이트씩 끊어서 계산 , char가 int 사이에 있으면 4바이트, 4바이트, 4바이트, 4바이트
// char가 맨뒤에 있으면 4바이트 ,4바이트, 1바이트 + 2바이트 = 3바이트라 4바이트 총 12바이트

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
	std::cout << "테스트 : " << sizeof(s) << std::endl;
}

