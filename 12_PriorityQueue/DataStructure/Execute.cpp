#pragma once
#include "PQueue.h"
#include <iostream>

using namespace std;

int main()
{
	PQueue<string> queue(20);
	queue.Insert(PQueue<string>::Node(76, "±è°æÅÂ"));
	queue.Insert(PQueue<string>::Node(89, "±èµµÈÆ"));
	queue.Insert(PQueue<string>::Node(7, "±èµ¿¿ø"));
	queue.Insert(PQueue<string>::Node(23, "±è¿µÇÏ"));
	queue.Insert(PQueue<string>::Node(79, "±èÁØ¼·"));
	queue.Insert(PQueue<string>::Node(37, "±èÁöÈÆ"));
	queue.Insert(PQueue<string>::Node(38, "¹ÚºÎÇö"));
	queue.Insert(PQueue<string>::Node(28, "ºóÇö¿í"));
	queue.Insert(PQueue<string>::Node(12, "¼ÛÈ£¿µ"));
	queue.Insert(PQueue<string>::Node(8, "¾öÀÍ±Ô"));
	queue.Insert(PQueue<string>::Node(11, "ÀÌ±Ù¿ì"));
	queue.Insert(PQueue<string>::Node(49, "ÀÓ¼öÁ¤"));

	queue.Print();



	while (queue.Empty() == false)
	{
		queue.RemoveMax();
		queue.Print();
		queue.Heapify();
		queue.Print();
	}


	return 0;
}