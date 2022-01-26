#include <stdio.h>
#include <iostream>
#include "card.h"

using namespace std;

void swap(int* a, int* b)
{
	int tmp;
	tmp = *a;
	*a = *b;
	*b = tmp;
	
}
int main()
{
	int a = 3;
	int b = 7;
	card c;
	card d(5);
	int(card:: * f)(int&,int&) = &card::swap;
	c.PrintCard();
	d.PrintCard();
	
	c.swap(a, b);
	c.swap2();
	cout << a << ',' << b << endl;
	cout << c.GetCard1()  << endl;
	





	return 0;
}