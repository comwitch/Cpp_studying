#pragma once
#include "PQueue.h"
#include <iostream>

using namespace std;

int main()
{
	PQueue<string> queue(20);
	queue.Insert(PQueue<string>::Node(76, "�����"));
	queue.Insert(PQueue<string>::Node(89, "�赵��"));
	queue.Insert(PQueue<string>::Node(7, "�赿��"));
	queue.Insert(PQueue<string>::Node(23, "�迵��"));
	queue.Insert(PQueue<string>::Node(79, "���ؼ�"));
	queue.Insert(PQueue<string>::Node(37, "������"));
	queue.Insert(PQueue<string>::Node(38, "�ں���"));
	queue.Insert(PQueue<string>::Node(28, "������"));
	queue.Insert(PQueue<string>::Node(12, "��ȣ��"));
	queue.Insert(PQueue<string>::Node(8, "���ͱ�"));
	queue.Insert(PQueue<string>::Node(11, "�̱ٿ�"));
	queue.Insert(PQueue<string>::Node(49, "�Ӽ���"));

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