#include <iostream>

//열거형
enum COLOR
{
	RED = 1, BLUE, BLACK
};

enum class DIRECTION
{
	LEFT, RIGHT, UP, DOWN
};
// 방향을 나타내는 함수를 ....


void Move(DIRECTION direction);

// 배열을 받아가지고 두 숫자를 더하는 함수 ?
int SumNumber(int number[]) {
	return number[0] + number[1];
}

// 두 배열을 받아가지고 각 인덱스의 값을 더하는걸 만든다면 ?

void SumArray(int arr1[], int arr2[], int size)
{
	for (size_t i = 0; i < size; i++)
	{
		std::cout << arr1[i] + arr2[i] << std::endl;
	}
}




int main()
{
	COLOR c = RED;
	switch (c)
	{
	case RED:
		break;
	case BLUE:
		break;
	case BLACK:
		break;
	default:
		break;
	}

	/*
	DIRECTION dir = DIRECTION::DOWN; //

	switch (dir)
	{
	case DIRECTION::LEFT:
		std::cout << "캐릭터 왼쪽방향임";
		break;
	case DIRECTION::RIGHT:
		break;
	case DIRECTION::UP:
		break;
	case DIRECTION::DOWN:
		break;
	default:
		break;
	}
	*/

	Move(DIRECTION::UP);
	Move(DIRECTION::DOWN);
	Move(DIRECTION::LEFT);
	Move(DIRECTION::RIGHT);

	// 만약에 캐릭터가 오른쪽으로 가고 있음 , 내가 왼쪽키를 누르면 방향을 왼쪽으로 바꿔야함

	/*
	if (왼쪽키를 누르면)
	{
		move(DIRECTION::LEFT);
	}
	*/

	int num[] = { 1,2 };

	int result = SumNumber(num);

	std::cout << result << std::endl;


	const int size = 3;
	int num1[size] = { 1,2,3 };
	int num2[size] = { 5,7,9 };

	SumArray(num1, num2, size);

	// 실습
	// 턴제를 만드는데
	// 1. 공격함수를 만든다
	// ㄴ 리턴하는 value는 타켓이 되는 상대방의 Hp 
	// ㄴ 결과로 출력해봐라.
}

void Move(DIRECTION direction)
{
	switch (direction)
	{
	case DIRECTION::LEFT:
		std::cout << "왼쪽" << std::endl;;
		break;
	case DIRECTION::RIGHT:
		std::cout << "오른쪽" << std::endl;;
		break;
	case DIRECTION::UP:
		std::cout << "위" << std::endl;;
		break;
	case DIRECTION::DOWN:
		std::cout << "아래" << std::endl;;
		break;
	default:
		break;
	}
}