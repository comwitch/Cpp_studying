#include "pokemon.h"
#include "battle.h"

using namespace std;

battle::battle()
{
	enemyflag = 0;
	skillselector = 0;
	battletoken = 0;
}

battle::~battle()
{
	cout << "생성자가 소멸되었습니다 " << endl;
}

void battle::Start_Theme()
{
	cout << "Hello, we will start the game" << endl;
	Sleep(666);
	system("cls");
	cout << "먼저 이름및 스테이터스 생성이 있겠습니다" << endl;
	Sleep(600);

}

void battle::Bat_BeforeSetting(pokemon* e, int i)
{
	string tmp_name;
	int reroll_flag;
	if (i == 0)
	{
		cout << "플레이어의 이름을 입력하세요 : ";
		cin >> tmp_name;
		e->SetName(tmp_name);
		cout << "당신의 이름은 " << e->GetName() << "입니다." << endl;
		Sleep(600);
		system("cls");
		cout << "다음은 능력치  설정입니다." << endl;
		Sleep(600);
		cout << "플레이어의 hp, mp는 300, 100 으로 고정되어있고 나머지수치는 랜덤입니다. " << endl;
		while (true)
		{
			e->SetStatus();
			e->SetHp(300);
			e->SetMp(100);
			e->GetStatus();
			cout << "이대로 하겠습니까? (1. 예 2. 아니오) :";
			cin >> reroll_flag;
			if (reroll_flag == 1)
			{
				cout << "네 알겠습니다!" << endl;
				Sleep(600);
				system("cls");
				break;
			}
			else if (reroll_flag == 2)
			{
				cout << "다시 설정하겠습니다" << endl;
				Sleep(600);
				system("cls");
			}
			else
			{
				cout << "잘못된 결정입니다, 다시 설정하겠습니다." << endl;
				Sleep(600);
				system("cls");
			}
		}
	}
	else
	{
		tmp_name = i;
		e->SetStatus();
		e->SetHp(200);
		e->SetMp(100);
	}
}

void battle::Bat_Start(pokemon* p, pokemon* e)
{
	int tmp_damage = 0;
	int tmp_heal = 0;


	cout << "야생의 " << e->GetName() << "을 조우했다!!!!" << endl;
	Sleep(600);
	cout << "가랏 !! " << p->GetName() << "!!!";
	Sleep(600);
	system("cls");

	while (true)
	{
		if (p->GetHp() <= 0)
		{
			cout << p->GetName() << "이 쓰러졋다!!" << endl;
			Sleep(600);
			system("cls");
			this->battletoken = 2;
			break;
		}

		else if (e->GetHp() <= 0)
		{
			cout << "적" << e->GetName() << "이(가) 쓰러졌다" << endl;
			Sleep(600);
			system("cls");
			this->battletoken = 1;
			break;
		}
		cout << "___________________________________________" << endl;
		cout << p->GetName() << "은(는) 무엇을 해야 할까? " << endl;
		cout << "1. 공격 2. 회복 3. 스테이터스확인";
		cin >> this->skillselector;

		switch (skillselector)
		{
		case 1 :
		{
			cout << p->GetName() << "의 공격!";
			tmp_damage = p->GetAtk() - e->GetDef();
			e->SetHp(e->GetHp() - tmp_damage);
			cout << "적 " << e->GetName() << "은" << tmp_damage << " 만큼의 데미지를 입었다." << endl;
			tmp_damage = 0;
			Sleep(600);
			cout << "적의 공격!" << endl;
			Sleep(600);
			tmp_damage = e->GetAtk() - p->GetDef();
			p->SetHp(p->GetHp() - tmp_damage);
			cout << p->GetName() << "은" << tmp_damage << " 만큼의 데미지를 입었다. " << endl;
			Sleep(800);
			tmp_damage = 0;
			break;
		}
		case 2 :
		{
			if (p->GetHp() == 300)
			{
				cout << "유효하지 않은 행동입니다." << endl;
				Sleep(600);
				break;
			}
			else
			{
				tmp_heal = p->GetMag();
				p->SetHp(p->GetHp() + tmp_heal);
				if (p->GetHp() > 300)
				{
					p->SetHp(300);
				}
				cout << p->GetName() << "은" << tmp_heal << " 만큼 회복했습니다! " << endl;
				Sleep(600);
				cout << "현재 체력 : " << p->GetHp() << endl;
				Sleep(600);
				system("cls");
				tmp_heal = 0;
				break;
			}
		}
		case 3 :
		{
			p->GetStatus();
			
			break;
		}
		}

	}
}

void battle::battletime(pokemon* p, pokemon* e)
{
}
