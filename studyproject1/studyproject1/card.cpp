#include "card.h"


card::card()
{
	card1 = 0;
	card2 = 1;
	card3 = 3;
}

card::card(int k)
{
	card1 = 0;
	card2 = k;
	card3 = 3;
}

void card::SetCard1(int a)
{
	this->card1 = a;
}

int card::GetCard1()
{
	return card1;
}


void card::PrintCard()
{
	cout << card1 << " " << card2 << endl;
}

int card::swap(int& a, int& b)
{
	int tmp;
	tmp = a;
	a = b;
	b = tmp;
	this->card3 = b;
	return 0;
}


void card::swap2()
{
	int tmp;
	tmp = card1;
	card1 = card2;
	card2 = tmp;
	
}


