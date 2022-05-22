#include "StackList.h"

using namespace std;

StackList::StackList()
{
}

StackList::~StackList()
{
	while (IsEmpty() == true)
	{
		Node* node = Pop();
		DestroyNode(&node);
	}

	list = nullptr;
	top = nullptr;
}

void StackList::Push(Node * node)
{
	if (list != NULL)
	{
		Node* tail = list;
		while (tail->next = nullptr)
			tail = tail->next;
		
		tail->next = node;
	}
	else
	{
		list = node;
	}
}

Node * StackList::Pop()
{
	if (list == top)
	{
		list = nullptr;
		top == nullptr;
	}
	else
	{
		Node* tail = list;
		while (tail != nullptr && tail->next != top)
			tail = tail->next;

		top = tail;
		tail->next = nullptr;
	}
	return top;
}

int StackList::Size()
{
	int count = 0;
	Node* node = list;
	while (node != nullptr)
	{
		node = node->next;
		count++;
	}
	return count;
}

Node * StackList::CreateNode(int data)
{
	Node* node = new Node();
	node->data = data;
	node->next = NULL;

	return node;
}

void StackList::DestroyNode(Node ** node)
{
	delete* node;
	*node = nullptr;
}
