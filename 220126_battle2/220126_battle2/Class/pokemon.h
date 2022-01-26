#pragma once
#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <windows.h>
using namespace std;

class pokemon
{
public:
	pokemon();
	~pokemon();
	
	void SetName(string _Name);
	string GetName() { return Name; }

	void SetHp(int _hp);
	int GetHp() { return hp; }

	void SetMp(int _mp);
	int GetMp() { return mp; }

	void SetAtk(int _atk);
	int GetAtk() { return atk; }

	void SetDef(int _def);
	int GetDef() { return def; }

	void SetMag(int _mag);
	int GetMag() { return mag; }

	void SetStatus();
	int GetStatus();


protected:
	string Name;
	int hp;
	int mp;
	int atk;
	int def;
	int mag;

};

