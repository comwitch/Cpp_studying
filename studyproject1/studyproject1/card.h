#pragma once
#include <iostream>
#include <stdio.h>
using namespace std;


class card
{
public:
	card();

	card(int k);

	void SetCard1(int a);
	int GetCard1();
	void PrintCard();
	int swap(int&a , int&b);
	void swap2();


private:
	int card1;
	int card2;
	int card3;

};

