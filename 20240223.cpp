#include<iostream>

int main()
{
#pragma region �迭

	/*
	// �迭�� ������� �˸� ȿ�������� �����͸� ������ �� ����
	// �迭 ���� : ǥ�� �׸��� ����
	// �迭�� ������ ���� : ǥ���ٰ� ���ڳ� ���ڸ� ���
	// ������ ����� �����͸� ���� : ǥ�� ��ȣ�� ���ڿ� ���ڸ� ����
	// �迭 : ���� �ڷ����� ���� ���ӵ� �޸� �������� �̷���� �ڷ� ����
	// ���� �ڷ����� ���� �������� ������ �ʿ��� �� ���, ���� ���� �����͸� ó���Ҷ� ����
	// �迭 ����� �迭 ���̿� ����X, ������� ���� (const�� ����)

	// �ڷ��� , �迭�� �̸� , �迭�� ����
	int arr[10]; //�迭 ����(int�� Ÿ���� �迭)

	arr[0] = 1;

	std::cout << "int�� Ÿ���� �迭 arr[0]�� ����Ǿ� �ִ� ������" << arr[0] << std::endl;
	std::cout << "int�� Ÿ���� �迭 arr[1]�� ����Ǿ� �ִ� ������" << arr[1] << std::endl;	// �����Ⱚ

	// �迭�� �����ϴ� ���
	// 1. ũ�⸦ ����ϰ� �ʱ�ȭ
	int arr1[4] = { 1,2,3,4 };
	std::cout << arr1[0] << std::endl;
	std::cout << arr1[1] << std::endl;
	std::cout << arr1[2] << std::endl;
	std::cout << arr1[3] << std::endl;
	std::cout << "==========================" << std::endl;

	// 2. �迭�� ũ�⸦ �����ϰ� �ʱ�ȭ
	int arr2[] = { 1,2,3 }; // ���̰� 3
	std::cout << arr2[0] << std::endl;
	std::cout << arr2[1] << std::endl;
	std::cout << arr2[2] << std::endl;
	std::cout << "==========================" << std::endl;

	// 3. ũ�⸦ ����� �����ϰ� �Ϻ� ��Ҹ� �ʱ�ȭ
	int arr3[5] = { 10, 31, 41 };
	std::cout << arr3[0] << std::endl;
	std::cout << arr3[1] << std::endl;
	std::cout << arr3[2] << std::endl;
	std::cout << arr3[3] << std::endl;	// 0 : �����Ⱚ �ȵ����� 0���� �ʱ�ȭ
	std::cout << arr3[4] << std::endl;	// 0
	std::cout << "==========================" << std::endl;

	int arr4[5] = { };	// int arr4[5] = {0, };
	std::cout << arr4[0] << std::endl;	// 0
	std::cout << arr4[1] << std::endl;
	std::cout << arr4[2] << std::endl;
	std::cout << arr4[3] << std::endl;
	std::cout << arr4[4] << std::endl;
	std::cout << "==========================" << std::endl;

	int myArr[5] = { 1,2,3,4,5 };
	std::cout << myArr << std::endl;	// �޸� �ּ�(16����)
	std::cout << &myArr[0] << std::endl;	// �޸� �ε��� 0��° �ּҴ� ���� �ּҸ� �ǹ�
	std::cout << &myArr[1] << std::endl;	// �޸� �ּҰ� 4�� ���� ���ӵ� �޸�
	std::cout << &myArr[2] << std::endl;
	std::cout << &myArr[3] << std::endl;
	std::cout << &myArr[4] << std::endl;

	int number[5];

	for (int i = 0; i < 5; i++)
	{
		number[i] = i;

		std::cout << number[i] << std::endl;
	}

	//���࿡ 10���� �л� ������ �Է�, �迭�� �����ϰ� ������ ����� ���Ϸ��� ?

	int jumsu[10]; // ������ �Է¹��� �迭 10�� ����
	int sum = 0;   // ���� ������(��)

	// �Է��� �غ���
	for (int i = 0; i < 10; i++)
	{
		std::cout << "���� �Է��� �л��� ������ ? :" << std::endl;
		std::cout << i + 1 << " ��° �л� : ";
		std::cin >>jumsu[i];
	}
	//�����ϴ� �κ�
	for (int i = 0; i < 10; i++)
	{
		sum += jumsu[i];
	}
	// ���(����ϴ� �κ�)
	std::cout << "���� : " << sum << " " << "��� : " << sum  / 10;
	*/
#pragma endregion


#pragma region �迭 2
	/*
	srand(time(NULL));
	int number[10];
	int dest, sour, temp;
	for (int i = 0; i < 10; i++)
	{
		number[i] = i;
	}
	for (int i = 0; i < 10; i++)
	{
		std::cout << "number[" << i << "]�ε��� : " << number[i]  << std::endl;
	}

	std::cout << "====================================" << std::endl;

	for (int i = 0; i < 1000; i++)
	{
		dest = rand() % 10;	// 0~9���� ������
		sour = rand() % 10; // 0~9���� ������

		temp = number[dest];
		number[dest] = number[sour];
		number[sour] = temp;
	}

	for (int i = 0; i < 10; i++)
	{
		std::cout << "number[" << i << "]�ε��� : " << number[i] << std::endl;
	}
	*/
#pragma endregion


#pragma region Lotto
	/*
	// �ζ� �����
	// 1~45 �迭 45��
	// 6���� �̱�
	int Lotto[45];
	int dest, sour, temp;
	for (int i = 0; i < 45; i++)
	{
		Lotto[i] = i;
	}
	for (int i = 0; i < 45; i++)
	{
		std::cout << "Lotto" << i << "]�ε��� : " << Lotto[i] << std::endl;
	}

	std::cout << "====================================" << std::endl;

	for (int i = 0; i < 1000; i++)
	{
		dest = rand() % 45;
		sour = rand() % 45;

		temp = Lotto[dest] ;
		Lotto[dest] = Lotto[sour] ;
		Lotto[sour] = temp;
	}

	for (int i = 0; i < 45; i++)
	{
		Lotto[i] = Lotto[i] + 1;
	}

	for (int i = 0; i < 45; i++)
	{
		std::cout << "�ζǹ�ȣ " << i+1 << "��° ��ȣ : " <<  Lotto[i] << std::endl;
	}

	std::cout << "====================================" << std::endl;

	for (int i = 0; i < 6; i++)
	{
		std::cout << "��÷�� �ζǹ�ȣ " << i + 1 << "��° ��ȣ : " << Lotto[i] << std::endl;
	}

	*/
#pragma endregion


#pragma region 2�����迭
	/*
		int arr[4][3];
		arr[0][0] = 1;
		arr[0][1] = 2;
		arr[0][2] = 3;

		arr[1][0] = 4;
		arr[1][1] = 5;
		arr[1][2] = 6;

		arr[2][0] = 7;
		arr[2][1] = 8;
		arr[2][2] = 9;

		arr[3][0] = 10;
		arr[3][1] = 11;
		arr[3][2] = 12;

		std::cout << std::endl << std::endl;

		std::cout << "0�� ��� ��� : " << &arr[0][0] << " , " << &arr[0][1] << " , " << &arr[0][2] << std::endl;
		std::cout << "1�� ��� ��� : " << &arr[1][0] << " , " << &arr[1][1] << " , " << &arr[1][2] << std::endl;
		std::cout << "2�� ��� ��� : " << arr[2][0] << " , " << arr[2][1] << " , " << arr[2][2] << std::endl;
		std::cout << "3�� ��� ��� : " << arr[3][0] << " , " << arr[3][1] << " , " << arr[3][2] << std::endl;

		int arr1[4][3] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12 };

		for (int i = 0; i < 4; i++)
		{
			std::cout << std::endl;
			for (int k = 0; k < 3; k++)
			{
				std::cout << arr[i][k] << " ";
			}
		}
		*/


#pragma endregion

		/*
				���ھ߱� ���� �����
				1.�÷��̾� VS ��ǻ��
				2.��ǻ�ʹ� ������ ���� 3���� ���ش�.
				3.�÷��̾�� ���� 3���� �Է��Ѵ�.
				4.������ ������ ����.

				��ǻ��)			1,2,3
				�÷��̾�)			1,5,2

				���)1strike, 1ball
				��, ���ڿ� �ڸ����� ���ٸ� 1s
				���ڴ� ���� �ڸ��� �ٸ���� 1b

				���� ���� �߻��� 1~10������� �Ұ�� 1~10���� ���ڸ� �Է��Ѵٸ� ���Է��϶�� ����ó���� �Ѵ�.

				�����ڴ� ����Ȯ���� ��� �޴´�.(��, ����� 100~1000����)
		*/


	bool playing = true;
	int chance = 1;
	int out = 0;
	int money = 0;	// ������ ������ 

	while (playing)
	{
		srand(time(NULL));
		int random[10];
		int comNum[3];
		int playerNum[3];
		int dest, sour, temp; // ��ǻ�� ���� ���� ������
		int dest2, sour2, temp2; // ������ ���� ���� ������
		int strike = 0;
		int ball = 0;
		int looker = 0;			// ������ Ȯ�� ����
		int bet = 0;		// ������ ���� ���

		std::cout << chance << " ��° �� (" << out << "�ƿ�)" << std::endl;


#pragma region ��ǻ�� ���� ����
		for (int i = 0; i < 9; i++)	random[i] = i;

		for (int i = 0; i < 1000; i++)
		{
			dest = rand() % 9;	// 0~9���� ������
			sour = rand() % 9; // 0~9���� ������

			temp = random[dest];
			random[dest] = random[sour];
			random[sour] = temp;
		}

		for (int i = 0; i < 3; i++)	comNum[i] = random[i] + 1;

		std::cout << "��ǻ�� : ";

		for (int i = 0; i < 3; i++)	std::cout << comNum[i] << " ";
#pragma endregion

		std::cout << std::endl;




#pragma region �÷��̾� ���� �Է�
		std::cout << "�÷��̾� : ";

		bool cout = false;
		while (true)
		{
			if (cout == true) std::cout << "1~9 ������ ���ڸ� �Է��Ͻÿ�" << std::endl;
			int count = 0;
			for (int i = 0; i < 3; i++)
			{

				std::cin >> playerNum[i];

				if (playerNum[i] < 1 || playerNum[i]>9)
				{
					cout = true;
				}
				else if (playerNum[i] >= 1 || playerNum[i] <= 9)
				{
					count++;
				}
			}
			if (count == 3) break;
		}
#pragma endregion

#pragma region ���� ��� ó��
		for (int i = 0; i < 3; i++)
		{
			for (int k = 0; k < 3; k++)
			{
				if (comNum[i] == playerNum[k] && i == k) strike++;

				else if (comNum[i] == playerNum[k] && i != k) ball++;
			}
		}
		chance++;
#pragma endregion


#pragma region 1�Ǵ� ���� ���
		if (strike == 3) out++;
		std::cout << "��Ʈ����ũ : " << strike << ", �� : " << ball << std::endl << std::endl;

#pragma region ������ ���� ���� + ������ ���
		for (int i = 0; i < 1000; i++)
		{
			dest2 = rand() % 9;	// 0~9���� ������
			sour2 = rand() % 9; // 0~9���� ������

			temp2 = random[dest2];
			random[dest2] = random[sour2];
			random[sour2] = temp2;
		}

		looker = random[0] + 1;
		bet = random[1] + 1;
		std::cout << "������ ���� ���� : " << looker << std::endl;
		std::cout << "������ ���� ��� ���� : " << bet << std::endl;

		if (strike >= 2 && looker >= 5)	// ������
		{
			std::cout << bet << "�� ���� ����!   ";
			money += bet * 100;
		}
		else if (strike >= 2 && looker < 5)	std::cout << "���� ����!   ";


		std::cout << "������ ������ : " << money << std::endl;
		std::cout << "===========================================" << std::endl;
#pragma endregion


#pragma endregion

		if (chance == 11) playing = false;
		if (out == 3) playing = false;
	}

	if (out == 3) std::cout << "3�� �ƿ�! ������ �����մϴ�";
	if (chance == 11) std::cout << "������ 10ȸ ���� �߽��ϴ� ������ �����մϴ� (" << out << "�ƿ�)";
}
