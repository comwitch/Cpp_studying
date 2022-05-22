#include <iostream>
#include "Queue.h"

using namespace std;

int main()
{
	Queue<int> q(8); 
	q.Enqueue(1);
	printf("Front : %d, Rear : %d\n", q.Front(), q.Rear());
	q.Enqueue(2);
	printf("Front : %d, Rear : %d\n", q.Front(), q.Rear());
	q.Enqueue(3);
	printf("Front : %d, Rear : %d\n", q.Front(), q.Rear());
	q.Enqueue(4);
	printf("Front : %d, Rear : %d\n", q.Front(), q.Rear());

	for (int i = 0; i < 4; i++)
	{
		printf("Dequeue : %d\n", q.Dequeue());
		printf("Front : %d, Rear : %d\n", q.Front(), q.Rear());
	}

	int count = 100;
	while (q.IsFull() == false)
		q.Enqueue(count++);

	printf("Capacity : %d\n", q.Capacity());
	printf("Front : %d, Rear : %d\n", q.Front(), q.Rear());

	while (q.IsEmpty() == false)
	{
		printf("Dequeue : %d, ", q.Dequeue());
		printf("Front : %d, Rear : %d\n", q.Front(), q.Rear());
	}

	return 0;
}