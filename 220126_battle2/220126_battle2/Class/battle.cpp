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
	cout << "�����ڰ� �Ҹ�Ǿ����ϴ� " << endl;
}

void battle::Start_Theme()
{
	cout << "Hello, we will start the game" << endl;
	Sleep(666);
	system("cls");
	cout << "���� �̸��� �������ͽ� ������ �ְڽ��ϴ�" << endl;
	Sleep(600);

}

void battle::Bat_BeforeSetting(pokemon* e, int i)
{
	string tmp_name;
	int reroll_flag;
	if (i == 0)
	{
		cout << "�÷��̾��� �̸��� �Է��ϼ��� : ";
		cin >> tmp_name;
		e->SetName(tmp_name);
		cout << "����� �̸��� " << e->GetName() << "�Դϴ�." << endl;
		Sleep(600);
		system("cls");
		cout << "������ �ɷ�ġ  �����Դϴ�." << endl;
		Sleep(600);
		cout << "�÷��̾��� hp, mp�� 300, 100 ���� �����Ǿ��ְ� ��������ġ�� �����Դϴ�. " << endl;
		while (true)
		{
			e->SetStatus();
			e->SetHp(300);
			e->SetMp(100);
			e->GetStatus();
			cout << "�̴�� �ϰڽ��ϱ�? (1. �� 2. �ƴϿ�) :";
			cin >> reroll_flag;
			if (reroll_flag == 1)
			{
				cout << "�� �˰ڽ��ϴ�!" << endl;
				Sleep(600);
				system("cls");
				break;
			}
			else if (reroll_flag == 2)
			{
				cout << "�ٽ� �����ϰڽ��ϴ�" << endl;
				Sleep(600);
				system("cls");
			}
			else
			{
				cout << "�߸��� �����Դϴ�, �ٽ� �����ϰڽ��ϴ�." << endl;
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


	cout << "�߻��� " << e->GetName() << "�� �����ߴ�!!!!" << endl;
	Sleep(600);
	cout << "���� !! " << p->GetName() << "!!!";
	Sleep(600);
	system("cls");

	while (true)
	{
		if (p->GetHp() <= 0)
		{
			cout << p->GetName() << "�� ��������!!" << endl;
			Sleep(600);
			system("cls");
			this->battletoken = 2;
			break;
		}

		else if (e->GetHp() <= 0)
		{
			cout << "��" << e->GetName() << "��(��) ��������" << endl;
			Sleep(600);
			system("cls");
			this->battletoken = 1;
			break;
		}
		cout << "___________________________________________" << endl;
		cout << p->GetName() << "��(��) ������ �ؾ� �ұ�? " << endl;
		cout << "1. ���� 2. ȸ�� 3. �������ͽ�Ȯ��";
		cin >> this->skillselector;

		switch (skillselector)
		{
		case 1 :
		{
			cout << p->GetName() << "�� ����!";
			tmp_damage = p->GetAtk() - e->GetDef();
			e->SetHp(e->GetHp() - tmp_damage);
			cout << "�� " << e->GetName() << "��" << tmp_damage << " ��ŭ�� �������� �Ծ���." << endl;
			tmp_damage = 0;
			Sleep(600);
			cout << "���� ����!" << endl;
			Sleep(600);
			tmp_damage = e->GetAtk() - p->GetDef();
			p->SetHp(p->GetHp() - tmp_damage);
			cout << p->GetName() << "��" << tmp_damage << " ��ŭ�� �������� �Ծ���. " << endl;
			Sleep(800);
			tmp_damage = 0;
			break;
		}
		case 2 :
		{
			if (p->GetHp() == 300)
			{
				cout << "��ȿ���� ���� �ൿ�Դϴ�." << endl;
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
				cout << p->GetName() << "��" << tmp_heal << " ��ŭ ȸ���߽��ϴ�! " << endl;
				Sleep(600);
				cout << "���� ü�� : " << p->GetHp() << endl;
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
