#include<iostream>

#pragma region name

#pragma endregion



/*
2024-02-21
if

*/

int main()
{
#pragma region if�� ����
	// ����, �б�
	// Ư�� ���ǿ� ���ؼ� ������ ������ �����ϴ�

	//�⺻���� ������ ���̸� ����
	//if (������ �����ϸ� -> ���̸� ����)
	//{
		// ���⸦ ����
	//}

	/*
	int num = 10;
	if (num >= 10) // true
	{
		std::cout << "if�� ������ ���̹Ƿ� ���Ⱑ ����ȴ� ù��°" << std::endl;

		std::cout << "num���� : " << num << std::endl;
	}
	if (num==10)
	{
		std::cout << "if�� ������ ���̹Ƿ� ���Ⱑ ����ȴ� �ι�°" << std::endl;
	}
	else if (num == 10)
	{
		std::cout << "if�� ������ ���̹Ƿ� ���Ⱑ ����ȴ� ����°" << std::endl;
	}
	if (num) //true : ��ǻ�ʹ� 0�� �ƴ� ���ڴ� true
	{
		std::cout << "if�� ������ ���̹Ƿ� ���Ⱑ ����ȴ� �׹�°" << std::endl;
	}
	if (true)
	{
		std::cout << "if�� ������ ���̹Ƿ� ���Ⱑ ����ȴ� �ټ���°" << std::endl;
	}

	if (true)
	{
		// ���̸� ���⸦ ����
	}
	else if () // �ܵ����� ��� �Ұ���
	{

	}
	else      // �ܵ����� ��� �Ұ���
	{
		// �ƴϸ� ���⸦ ����
	}
	int number = 20;

	if (number == 50)
	{
		std::cout << "����";
	}
	else
	{
		std::cout << "�� if���� �����̹Ƿ� ���⸦ ����";
	}

	int input;
	std::cin >> input;

	//���� �Է��� ���� 10���� �۴ٸ�
	if (input < 10)
	{
		std::cout << "���� �Է��� �� : " << input << std::endl;
	}
	else
	{
		std::cout << "���� �Է��� ���� input < 10�� �ƴ� : " << input << std::endl;
	}

	if (����)
	{

	}
	else if (����)
	{
		// ���� ���� ������ �����Ѵٸ� �Ʒ��� �ִ� ���ǵ��� ���� �ǳʶڴ�
		// else�� �ǳʶڴ�.
	}
	else if (����)
	{

	}
	else if (����)
	{

	}
	else
	{
		// �� ������ ���� �������� ������ ���⸦ �����Ѵ�
	}

	std::cout << "���� �����ϴ� �̻����� ���̸� �Է�";

	int age;
	std::cin >> age;

	if (age == 20)
	{
		std::cout << "����";
	}
	bool isCheck = (age > 27 && age < 30) || (age > 27 && age < 30);
	if (isCheck)
	{

	}

	//28,29
	if (age > 27 && age < 30)
	{
		std::cout << "��";
	}
	else {
		std::cout << "���� �ַ� ";
	}


	if (true)
	{
		if (true)
		{

		}
		else
		{
			if ()
			{

			}
		}
	}
*/
#pragma endregion

#pragma region if�� �ǽ�1
// �Է��� �ΰ��� �޴´� (����)
// ��Ģ������ �����ϴ� �Է¿� ����
// 1. ����, 2.����, 3. ����, 4. ������

/*
	int num1, num2;
	char sym;
	std::cout << "���� �ΰ��� �Է����ּ���";
	std::cin >> num1 >> num2;
	std::cout << "��ȣ�� �Է����ּ���.";
	std::cin >> sym;

	if (sym == '+')
	{
		std::cout <<"����� : " << num1 << " + " << num2 << " = " << num1 + num2;
	}
	else if (sym == '-')
	{
		std::cout << "����� : " << num1 << " - " << num2 << " = " << num1 - num2;
	}
	else if (sym == '*')
	{
		std::cout << "����� : " << num1 << " * " << num2 << " = " << num1 * num2;
	}
	else if (sym == '/')
	{
		std::cout << "����� : " << num1 << " / " << num2 << " = " << num1 / num2;
	}
*/

// ������ ����
/*
	int select; // ����, ���� ���� �����ϴ� ����
	int result = 0; // ����� ���� ����
	int inputNum, inputNum1; // �Է¿� ����

	std::cout << "�Է¹޴� �μ��� ��Ģ ������ �غ��ô�" << std::endl;
	std::cout << "1. ����, 2. ����, 3.����, 4.������" << std::endl;

	//�Է�
	std::cin >> select;
	std::cout << "�ΰ��� ���ڸ� �Է�����" << std::endl;
	std::cin >> inputNum;
	std::cin >> inputNum1;

	// ó��
	if (select == 1)result = inputNum + inputNum1;
	if (select == 2)result = inputNum - inputNum1;
	if (select == 3)result = inputNum * inputNum1;
	if (select == 4)result = inputNum / inputNum1;

	// ���
	std::cout << "��� : " << result << std::endl;

*/
#pragma endregion

#pragma region if�� �ǽ�2
//2��° �ǽ�
//1. �ΰ��� ������ �Է¹޾Ƽ� �μ��� ���� ����ض�
//2. ��, �Էµ� ���ڰ� ������ ������� ������ ū������ �������� �� ����� ���

/*
	int num1, num2;
	int result = 0;

	std::cout << "�ΰ��� ������ �Է��Ͻÿ�.";
	std::cin >> num1 >> num2;
	if (num1 > num2) result = num1 - num2;
	if (num2 > num1) result = num2 - num1;

	std::cout << "��� : " << result << std::endl;



	int number1, number2;
	int res;

	std::cin >> number1 >> number2;
	res = (number1 > number2) ? number1-number2 : number2-number1;
	std::cout << res;
	*/

#pragma endregion






#pragma region �ǽ�����1
	/*
	1. �л��� ��ü ��� ������ ���� ������ ����ض�
	�� 90�� �̻��̸� A, 80�� �̻��̸� B, 70�� �̻��̸� C, 60�� �̻��̸� D, �������� �� F....
	�� ������ 3�� (��, ��, ��)
	*/

	/*

	int kor, eng, mat;
	int total = 0;
	char grade;
	std::cout << "������ �Է��Ͻÿ�" << std::endl;
	std::cout << "���� : ";
	std::cin >> kor;
	std::cout << "���� : ";
	std::cin >> eng;
	std::cout << "���� : ";
	std::cin >> mat;
	total = (kor + eng + mat) / 3;

	if (total >= 90) grade = 'A';
	else if (total >= 80) grade = 'B';
	else if (total >= 70) grade = 'C';
	else if (total >= 60) grade = 'D';
	else grade = 'F';

	std::cout << "���� : " << grade << std::endl << "������� :" << total << std::endl;

	*/

#pragma endregion

#pragma region �ǽ�����2

	/*
		2. ���� ����ϱ�
		��(3-5), ����(6~8), ����(9~11), �ܿ�(12-2)
		�� 3�� �Է��ϸ� -> ���̿��� ������~
		��
	*/

	/*
	int wth;
	std::cout << "����ΰ���~?" << std::endl;
	std::cin >> wth;

	if (3 <= wth && wth <= 5) std::cout << "���̿���~";
	if (6 <= wth && wth <= 8) std::cout << "�����̿���~";
	if (9 <= wth && wth <= 11) std::cout << "�����̿���~";
	if (1 <= wth && wth <= 2 || wth ==12) std::cout << "�ܿ��̿���~";
	*/
#pragma endregion

#pragma region �ǽ�����3
	/*
	3. �÷��̾� vs ���� (1��)
	�� �÷��̾�� HP, Attack
	�� ���� HP, Attack
	�� ������ �������� ���� , ����X
	�� ���ʹ� �� �ڵ����� �Ѵ� ����
	�� �÷��̾�� Ű �Է��� �޾� ������!
	*/

	int playerHp = 100;
	int monsterHp = 100;
	int monsterAtk = 30;
	int playerAtk;


	if (monsterHp != 0)
	{
		std::cout << "����ִ� ���͸� �����ƴ�!" << std::endl;

		std::cout << "�÷��̾��� ���ݷ��� �Է��Ͻÿ� : ";
		std::cin >> playerAtk;
		std::cout << std::endl;

		std::cout << "=== �÷��̾� �⺻ ���� ===" << std::endl;
		std::cout << "|    playerHP     " << playerHp << "    |" << std::endl;
		std::cout << "|    playerAtk    " << playerAtk << "     |" << std::endl;
		std::cout << "==========================" << std::endl << std::endl;

		std::cout << "===  ���� �⺻ ����  ===" << std::endl;
		std::cout << "|    monsterHP     " << monsterHp << "   |" << std::endl;
		std::cout << "|    monsterAtk    " << monsterAtk << "    |" << std::endl;
		std::cout << "==========================" << std::endl << std::endl;

		playerHp = playerHp - monsterAtk;
		monsterHp = monsterHp - playerAtk;

		std::cout << "�÷��̾�� ���ظ� �޾Ҵ�! �÷��̾��� ���� ü�� : " << playerHp << std::endl;
		std::cout << "���ʹ� ���ظ� �޾Ҵ�! ������ ���� ü�� : " << monsterHp << std::endl << std::endl;


		if (monsterHp == 0) std::cout << "���ʹ� ��������!" << std::endl;
	}
	else std::cout << "���ʹ� �̹� �׾��ִ»��´�";


	/*

	ex)
	===�÷��̾� �⺻ ����===
	|playerHP : 100			|
	|                       |
	========================

	===���� �⺻ ����===
	|playerHP : 100			|
	|                       |
	========================

	�÷��̾��� ���� ü�� : ???
	������ ���� ü�� : ???

	�� �Ѵ뾿 ġ�� ���
	*/
#pragma endregion




#pragma region ����ġ��
	/*
	switch (switch_on)
	{
	default:
		break;
	}
	*/

	/*
		std::cout << "��ƺ���� ���迡 �°� ȯ���Ѵ�" << std::endl;
		std::cout << "������ ������" << std::endl;
		std::cout << "1. �ٹٸ��� 2.�Ҽ����� 3.�Ƹ��� 4.��ũ�θǼ� 5.�ȶ��" << std::endl;

		int selectNum;
		std::cin >> selectNum;
		switch(selectNum)
		{
		case 1:	//if(selectNum == 1)
			std::cout << "�ٹٸ����� ������" << std::endl;
			break;
		case 2: //else if(selecNum ==2)
			std::cout << "�Ҽ����� ������" << std::endl;
			break;
		case 3: //else if(selecNum ==3)
			std::cout << "�Ƹ��� ������" << std::endl;
			break;
		case 4: //else if(selecNum ==4)
			std::cout << "��ũ�θǼ� ������" << std::endl;
			break;
		case 5: //else if (selecNum =5)
			std::cout << "�ȶ�� ������" << std::endl;
			break;

		default:// else

			break;
		}
		*/
		// if���� �پ��� ������ ó���Ҷ� ����
		// switch�� ������ value�� ������ �Ǵ��Ҷ� 
		// case�� ��ġ�ϴ� ������ �б�ó�� 
		// ������ ���� Ÿ�Կ� ����

		/*
		int jobSelect;
		int skillSelect;

		std::cout << "������ �����ض�(1: ����, 2.������ 3.���� �� ������ �ü�) : ";
		std::cin >> jobSelect;

		switch (jobSelect)
		{	// �� ����ġ�� ������ ����
		case 1:
			std::cout << "���縦 ������ � ������ �ϰ���?(1.��Ÿ 2.�������) : ";

			std::cin >> skillSelect;
			switch (skillSelect)
			{
				// ��ų�� �����ϴ� ��(������ ���õ� ��Ȳ����)
			case 1:
				std::cout << "���簡 ��Ÿ�� ����";
				break;
			case 2:
				std::cout << "���簡 ������⸦ ����";
				break;
			}
			break;
		case 2:
			std::cout << "�����縦 ������ � ������ �ϰ���?(1.ȭ���� 2.����) : ";

			std::cin >> skillSelect;
			switch (skillSelect)
			{
			case 1:
				std::cout << "�����簡 ȭ������ ����";
				break;
			case 2:
				std::cout << "�����簡 ������ ����";
				break;
			}
			break;
		case 3:
			std::cout << "������ ������ � ������ �ϰ���?(1.��� 2.ǥâ������) : ";

			std::cin >> skillSelect;
			switch (skillSelect)
			{
			case 1:
				std::cout << "������ ����� ����";
				break;
			case 2:
				std::cout << "������ ǥâ�����⸦ ����";
				break;
			}
			break;
		default:
			break;
		}
		*/
#pragma endregion


}