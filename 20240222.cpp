#include<iostream>
#include <random>
// f12 

int main() {

#pragma region while_Loop

	/*
	while (true) // �⺻���� ������ true��
	{
		// ���⿡ �ݺ��� �ڵ尡 ����
		// �⺻������ ���� ������ �־���Ѵ�
	}
	*/

	// �Է��� ���ڸ�ŭ ����Ѵ�
	/*
	int inputNum;
	int count = 0;
	std::cout << "���ڸ� �Է��غ��� : ";
	std::cin >> inputNum;
	while (count <inputNum)
	{
		std::cout << "������ ������" << std::endl;
		count++;
	}
	*/

	/*
	int inputNum;
	int count = 0;
	while (true)
	{
		count++;
		std::cout << "�����󵹷���" << std::endl;
		if (count == 5)break;
	}
	*/


	// �Է��� ��� �޴´� .�Է��� ���� ���ڴ� �����ؼ� ���Ѵ�
	// 0�� �Է��ϸ� �����Ѵ�
	/*
	int input = 1;
	int total = 0;
	while (input != 0) // input�� 0�� �ƴҶ����� ������
	{
		std::cout << "0���� ū ���ڸ� �Է��Ͻÿ�";
		std::cin >> input; // �Է�
		total += input; // ó�� total = total+input
	}
	std::cout << "������ ������ ? : " << total << std::endl;
	*/

	/*
	int gugudanInput;
	int gugudanNum = 1;
	std::cout << "���ϴ� ���� �Է��� ���ƶ� : ";
	std::cin >> gugudanInput;
	while (gugudanNum<10)
	{
		std::cout << gugudanInput << " * " << gugudanNum << " = " << gugudanInput * gugudanNum << std::endl;
		gugudanNum++;
	}
	*/

#pragma endregion

#pragma region for_Loop
	// �ݺ���
	// while ó�� �ݺ��۾��� �����Ҷ� ����Ѵ�
	// �ݺ�Ƚ���� ��Ȯ�� ��� ������
	//
	//for (�ʱ�ȭ; ����; ����)
	//{

	//}

	/*
	for (int i = 0; i < 3; i++)
	{
		std::cout << i << std::endl;
	}
	for (int i = 5; i >=0; i--)
	{
		std::cout << i << std::endl;
	}

	// 1���� 100���� ���� ���Ϸ���?
	int res = 0;
	for (int i = 1; i <= 100; i++)
	{
		res += i;
	}
	std::cout << "1���� 100���� �� : " << res << std::endl;

	for (int i = 1; i < 10; i++)
	{
		if (i % 2 != 0) // ���࿡ i�� 2�� �������� �������� 0 �ƴ϶��
		{
			continue; // �ǳʶپ��
		}
		std::cout << i << std::endl; // 2 4 6 8
	}
	*/

	// ���� 1 : 1�̻� 20 �̸��� ����ϵ� 2�� ����� 3�� ����� ��¿��� �����ض�

	/*
	for (int i = 1; i < 20; i++)
	{
		if (i % 2 == 0 || i % 3 == 0) continue;

		std::cout << i << std::endl;
	}
	*/
#pragma endregion


#pragma region random
	/*

		std::srand(std::time(NULL));

		int randomNum = std::rand() % 3; // 0~2

		std::cout << randomNum << std::endl;
		*/
		// C++11�̻� 
		// random  
	/*
		std::random_device rd;
		std::mt19937 mt(rd());
		std::uniform_int_distribution<int> dis(0, 10);

		int mtrandomNumber = dis(mt);
		std::cout << mtrandomNumber << std::endl;
		*/

#pragma endregion

#pragma region �ǽ�1
		// 1. ��ǻ�ʹ� 0~999 ������ �� �߿� �����ϰ� �ϳ��� ���´�
		// 2. �÷��̾�� 10���� ��ȸ�� �ִ�.
		// 3. �÷��̾ � ���� �Է��� �ϸ� ��ǻ�ʹ� �� ���� ū�� ������ �������� �˷��ش�
		// 4. �翬�� �Է°��� 0~999�� ����� �Ǹ� ���Է��϶�� ������ ����. continue ���
		// 5. ���� ������ 10���� �Ѿ�ų� ���߸� ���Ṯ���� ����. 


/*
	int playerNumber, chance = 1;
	std::random_device rd;
	std::mt19937 mt(rd());
	std::uniform_int_distribution<int> dis(0, 999);

	int comNumber = dis(mt);

	std::cout << comNumber << std::endl;

	for (chance = 1; chance < 11; chance++)
	{
		std::cout << "�÷��̾�� ���ڸ� �Է����ּ���" << std::endl;
		std::cin >> playerNumber;

		if (playerNumber > comNumber && playerNumber<1000)
		{
			std::cout << chance << "ȸ : �÷��̾��� ���ڰ� ��ǻ�� ���ں��� Ů�ϴ�" << std::endl << std::endl;
		}
		else if (playerNumber < comNumber)
		{
			std::cout << chance << "ȸ : �÷��̾��� ���ڰ� ��ǻ�� ���ں��� �۽��ϴ�" << std::endl << std::endl;
		}
		else if (playerNumber > 999)
		{
			std::cout << chance << "ȸ : 0~999 ������ �������ּ���" << std::endl << std::endl;
		}
		else if (playerNumber = comNumber)
		{
			break;
		}
	}

	std::cout << "������ ����Ǿ����ϴ�" << std::endl;
	if (playerNumber == comNumber)
	{
		std::cout << chance << "ȸ���� ������ ���߼̽��ϴ�!" << std::endl;
	}
	else if (chance == 11)
	{
		std::cout << "������ ���߽��� ���ϼ̽��ϴ�" << std::endl;
		std::cout << "���� : " << comNumber << std::endl;
	}
	*/
#pragma endregion


#pragma region �����
	for (int i = 0; i < 5; i++) // star : 5 
	{
		for (int k = 0; k <= i; k++)
		{
			std::cout << "*";
		}
		std::cout << std::endl;
	}

	std::cout << std::endl;

	for (int i = 0; i < 5; i++)
	{
		for (int k = 5; k > i; k--)
		{
			std::cout << "*";
		}
		std::cout << std::endl;
	}

	std::cout << std::endl;


	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < i; j++)
		{
			std::cout << " ";
		}

		for (int k = 1; k <= 5 - i; k++)
		{
			std::cout << "*";
		}
		std::cout << std::endl;
	}

	std::cout << std::endl;

	for (int i = 1; i <= 5; i++)
	{

		for (int j = 5; j > i; j--)
		{
			std::cout << " ";
		}

		for (int k = 1; k <= i; k++)
		{
			std::cout << "*";
		}
		std::cout << std::endl;
	}
	std::cout << std::endl;


	for (int i = 0; i <= 5; i++)
	{
		for (int k = 0; k < 5 - i; k++)
		{
			std::cout << " ";
		}
		for (int j = 0; j < i * 2 + 1; j++)
		{
			std::cout << "*";
		}
		std::cout << std::endl;
	}
	for (int i = 4; i >= 0; i--)
	{
		for (int k = 0; k < 5 - i; k++)
		{
			std::cout << " ";
		}
		for (int j = 0; j < i * 2 + 1; j++)
		{
			std::cout << "*";
		}
		std::cout << std::endl;
	}

#pragma endregion


	// 1. ����� (���̾� ����)
	// 2. ���������� ���� 
	// �� �÷��̾�
	// �� ��ǻ��
	// �� ����(1), ����(2), ��(3)
	// 3. ��ǻ�ʹ� ����, ����, ���� �����ϰ� ����.
	// 4. ����� ���� ��, ��, ���ºθ� ����Ѵ�.
	// 5. 10�Ǹ��� �� �ִ�
	// 6. �÷��̾�� ������ �� �� �ִ�.(������)
	// 7. ������ �� �ִ� �ݾ��� �ּҴ����� �־�� �Ѵ�.
	// �� �÷��̾ �¸��� ��� ���� �� ���ñݾ׿� *2
	// �� �÷��̾ �й��� ��� ���� �� ���ñݾ��� *2��ŭ ����
	// �� ���º��� ��� ���� �� ���ñݾ׸� �Ҵ´�.
	// �������� : 
	// - 10��
	// - �������� �ƿ� ���� ���
	// - ���ñݾ��� �����ݺ��� �Ʒ��� ���

#pragma region ���ð���������

	std::random_device rd;
	std::mt19937 mt(rd());
	std::uniform_int_distribution<int> dis(1, 3);


	int player, bet; // �������������� , ���þ�
	int money = 1500; // ������
	int min = 100; // �ּ� ���ñݾ�
	int game = 1;

	std::cout << "���������� ������ �����ϰڽ��ϴ�" << std::endl;

	while (game < 11 || money < 100)
	{

		if (money < min || money == 0)
		{
			break;
		}
		std::cout << game << "��° �� ������ �ݾ��� �����Ͻÿ�.(�ּҹ��ñݾ� 100) �� ������ : " << money << std::endl;
		std::cin >> bet;
		if (bet < 100)
		{
			std::cout << "�ּҹ��ñݾ��� 100 �Դϴ�" << std::endl;
			continue;
		}
		if (bet > money)
		{
			std::cout << "���ñݾ��� �����մϴ�" << std::endl;
			continue;
		}

		int com = dis(mt);
		std::cout << com << std::endl;
		std::cout << "����(1), ����(2), ��(3)�� �����Ͻÿ�.";
		std::cin >> player;

		if (player == 1) // �÷��̾� : ����
		{
			if (com == 1)
			{
				money = money - bet;
				std::cout << "�����ϴ�!" << std::endl;
				std::cout << "�÷��̾� : ���� VS ��ǻ�� : ����" << std::endl;
				std::cout << "���� �÷��̾� ������ : " << money << std::endl << std::endl;
				game++;

			}
			else if (com == 2)
			{
				money = money - bet * 2;
				std::cout << "�����ϴ�!" << std::endl;
				std::cout << "�÷��̾� : ���� VS ��ǻ�� : ����" << std::endl;
				std::cout << "���� �÷��̾� ������ : " << money << std::endl << std::endl;
				game++;
			}
			else if (com == 3)
			{
				money = money + bet * 2;
				std::cout << "�̰���ϴ�!" << std::endl;
				std::cout << "�÷��̾� : ���� VS ��ǻ�� : ��" << std::endl;
				std::cout << "���� �÷��̾� ������ : " << money << std::endl << std::endl;
				game++;
			}
		}

		if (player == 2) // �÷��̾� : ����
		{
			if (com == 1)
			{
				money = money + bet * 2;;
				std::cout << "�̰���ϴ�!" << std::endl;
				std::cout << "�÷��̾� : ���� VS ��ǻ�� : ����" << std::endl;
				std::cout << "���� �÷��̾� ������ : " << money << std::endl << std::endl;
				game++;
			}
			else if (com == 2)
			{
				money = money - bet;
				std::cout << "�����ϴ�!" << std::endl;
				std::cout << "�÷��̾� : ���� VS ��ǻ�� : ����" << std::endl;
				std::cout << "���� �÷��̾� ������ : " << money << std::endl << std::endl;
				game++;
			}
			else if (com == 3)
			{
				money = money - bet * 2;
				std::cout << "�����ϴ�!" << std::endl;
				std::cout << "�÷��̾� : ���� VS ��ǻ�� : ��" << std::endl;
				std::cout << "���� �÷��̾� ������ : " << money << std::endl << std::endl;
				game++;
			}
		}

		if (player == 3) // �÷��̾� : ��
		{
			if (com == 1)
			{
				money = money - bet * 2;;
				std::cout << "�����ϴ�!" << std::endl;
				std::cout << "�÷��̾� : �� VS ��ǻ�� : ����" << std::endl;
				std::cout << "���� �÷��̾� ������ : " << money << std::endl << std::endl;
				game++;
			}
			else if (com == 2)
			{
				money = money + bet * 2;
				std::cout << "�̰���ϴ�!" << std::endl;
				std::cout << "�÷��̾� : �� VS ��ǻ�� : ����" << std::endl;
				std::cout << "���� �÷��̾� ������ : " << money << std::endl << std::endl;
				game++;
			}
			else if (com == 3)
			{
				money = money - bet;
				std::cout << "�����ϴ�!" << std::endl;
				std::cout << "�÷��̾� : �� VS ��ǻ�� : ��" << std::endl;
				std::cout << "���� �÷��̾� ������ : " << money << std::endl << std::endl;
				game++;
			}
		}
	}
	if (money < 100)
		std::cout << "���� �Ұ������� ������ ����˴ϴ� ������ : " << money;
	else
		std::cout << "10���� ����Ǿ����ϴ� " << std::endl << "�÷��̾� ������ : " << money;

#pragma endregion



#pragma region ����
	std::cout << "hello";
#pragma endregion
}







