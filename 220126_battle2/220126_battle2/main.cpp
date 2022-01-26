#include<iostream>
#include<stdio.h>
#include<windows.h>
#include"Class/pokemon.h"
#include"Class/battle.h"

int main()
{
	pokemon* player;
	pokemon* enemy;
	battle b;

	player = new pokemon();
	enemy = new pokemon();

	b.Start_Theme();
	b.Bat_BeforeSetting(player, 0);
	b.Bat_BeforeSetting(enemy, 1);
	b.Bat_Start(player, enemy);

	delete player;
	delete enemy;

}