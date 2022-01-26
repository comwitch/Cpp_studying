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
	cout << "생성자가 소멸하였습니다! " << endl;
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
	cout << "이름은 : " << this->Name << endl;
	cout << "hp는 : " << this->hp << endl;
	cout << "mp는 : " << this->mp << endl;
	cout << "atk는 : " << this->atk << endl;
	cout << "def는 : " << this->def << endl;
	cout << "mag는 : " << this->mag << endl;

	return 0;
}
