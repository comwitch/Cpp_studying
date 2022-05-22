#pragma once

#include <stdio.h>
#include <iostream>
#include <queue>
#include <stack>

using namespace std;

template<typename T>
class Tree
{
public:
	struct Node;

public:
	void AddChild(Node* parent, Node* child)
	{
		if (parent->LeftChild == NULL)
		{
			parent->LeftChild = child;

			return;
		}

		Node* node = parent->LeftChild;
		while (node->RightSibling != NULL)
			node = node->RightSibling;

		node->RightSibling = child;
	}

	void PrintNode(Node* node, int depth)
	{
		for (int i = 0; i < depth; i++)
			cout << "-";

		cout << node->data << endl;
		q.push(node->data);
		s.push(node);

		if (node->LeftChild != NULL)
			PrintNode(node->LeftChild, depth + 1);
		if (node->RightSibling != NULL)
			PrintNode(node->RightSibling, depth);

	}

public:
	static Node* CreateNode(T data)
	{
		Node* node = new Node();
		node->data = data;
		node->LeftChild = node->RightSibling = NULL;

		return node;
	}

	static void DestroyNode(Node** node)
	{
		delete* node;
		*node = NULL;
	}

public:
	stack<Node*>* Stack() { return &s; }
	queue<T>* Queue() { return &q; }


private:
	queue<T> q;
	stack<Node*> s;

public:
	struct Node
	{
		T data;

		Node* LeftChild;
		Node* RightSibling;

		~Node()
		{
			data = 0;

			LeftChild = NULL;
			RightSibling = NULL;
		}
	};
};