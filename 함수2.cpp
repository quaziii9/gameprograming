#include <iostream>

//������
enum COLOR
{
	RED = 1, BLUE, BLACK
};

enum class DIRECTION
{
	LEFT, RIGHT, UP, DOWN
};
// ������ ��Ÿ���� �Լ��� ....


void Move(DIRECTION direction);

// �迭�� �޾ư����� �� ���ڸ� ���ϴ� �Լ� ?
int SumNumber(int number[]) {
	return number[0] + number[1];
}

// �� �迭�� �޾ư����� �� �ε����� ���� ���ϴ°� ����ٸ� ?

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
		std::cout << "ĳ���� ���ʹ�����";
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

	// ���࿡ ĳ���Ͱ� ���������� ���� ���� , ���� ����Ű�� ������ ������ �������� �ٲ����

	/*
	if (����Ű�� ������)
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

	// �ǽ�
	// ������ ����µ�
	// 1. �����Լ��� �����
	// �� �����ϴ� value�� Ÿ���� �Ǵ� ������ Hp 
	// �� ����� ����غ���.
}

void Move(DIRECTION direction)
{
	switch (direction)
	{
	case DIRECTION::LEFT:
		std::cout << "����" << std::endl;;
		break;
	case DIRECTION::RIGHT:
		std::cout << "������" << std::endl;;
		break;
	case DIRECTION::UP:
		std::cout << "��" << std::endl;;
		break;
	case DIRECTION::DOWN:
		std::cout << "�Ʒ�" << std::endl;;
		break;
	default:
		break;
	}
}