#include <stdio.h>
#include <iostream>
#include"Queue/Queue.h"

using namespace std;

#define Create(p) Queue<int>::CreateNode(p)

int main()
{
	Queue<int> q;
	q.Enqueue(Create(10));
	q.Enqueue(Create(20));
	q.Enqueue(Create(30));
	q.Enqueue(Create(40));
	
	printf("Size : %d\n", q.Size());

	return 0;
}