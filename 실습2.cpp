#include<iostream>

int Attack(int power, int monsterHp);

int main()
{
	// 실습
	// 턴제를 만드는데
	// 1. 공격함수를 만든다
	// ㄴ 리턴하는 value는 타켓이 되는 상대방의 Hp 
	// ㄴ 결과로 출력해봐라.
	int monsterHp = 100;

	std::cout << "몬스터를 마주쳤다! 전투시작" << std::endl;
	for (int i = 0; i < 3; i++)
	{
		std::cout << i + 1 << "턴 입니다" << std::endl;
		int power;
		std::cout << "공격력을 입력하시오" << std::endl;
		std::cin >> power;
		monsterHp = Attack(power, monsterHp);
		std::cout << "현재 몬스터 체력 : " << monsterHp << std::endl << std::endl;
	}
	std::cout << "3턴 종료! 전투를 종료합니다 " << std::endl;
	std::cout << "몬스터의 체력 : " << monsterHp;
}


int Attack(int power, int Hp)
{
	Hp = Hp - power;
	return Hp;
}
