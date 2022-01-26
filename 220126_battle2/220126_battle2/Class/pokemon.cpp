#include "pokemon.h"



using namespace std;

pokemon::pokemon()
{
	Name = "";
	hp = 0;
	mp = 0;
	atk = 0;
	def = 0;
	mag = 0;
}

pokemon::~pokemon()
{
	cout << "�����ڰ� �Ҹ��Ͽ����ϴ�! " << endl;
}

void pokemon::SetName(string _Name) 
{
	this->Name = _Name;
}

void pokemon::SetHp(int _hp)
	
{
	this->hp = _hp;
}

void pokemon::SetMp(int _mp)
{
	this->mp = _mp;
}

void pokemon::SetAtk(int _atk)
{
	this->atk = _atk;
}

void pokemon::SetDef(int _def)
{
	this->def = _def;
}

void pokemon::SetMag(int _mag)
{
	this->mag = _mag;
}

void pokemon::SetStatus()
{
	srand(time(NULL));
	this->atk = rand() % 19 + 11;
	this->def = rand() % 10 + 1;
	this->mag = rand() % 19 + 11;
}

int pokemon::GetStatus()
{
	cout << "___________________________" << endl;
	cout << "�̸��� : " << this->Name << endl;
	cout << "hp�� : " << this->hp << endl;
	cout << "mp�� : " << this->mp << endl;
	cout << "atk�� : " << this->atk << endl;
	cout << "def�� : " << this->def << endl;
	cout << "mag�� : " << this->mag << endl;

	return 0;
}
