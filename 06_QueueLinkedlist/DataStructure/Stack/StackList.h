#pragma once

#include<iostream>

struct Node
{
	int data;
	Node* next;
};


class StackList
{
public:
	StackList();
	~StackList();

	void Push(Node* node);
	Node* Pop();

	Node* Top() { return top; }
	bool IsEmpty() { return list == NULL; }

	int Size();
	static Node* CreateNode(int data);
	static void DestroyNode(Node** node);

private:
	Node* list = NULL;
	Node* top = NULL;
};