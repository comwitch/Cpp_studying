#pragma once
class battle
{
public:
	battle();
	~battle();

	void Start_Theme();
	void Bat_BeforeSetting(pokemon* e, int i);
	void Bat_Start(pokemon* p, pokemon* e);
	void battletime(pokemon* p, pokemon* e);
	

private:
	int enemyflag;
	int skillselector;
	int battletoken;

};

