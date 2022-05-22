#pragma once

#include <iostream>
using namespace std;

#define MAX_VERTEX 256

struct Node
{
	int _data;
	Node* _node;

public:
	Node(int data, Node* node)
	{
		_data = data;
		_node = node;
	}
	~Node() {}

	int GetData() { return _data; }
	void SetData(int data) { _data = data; }
	Node* GetNode() { return _node; }
	void SetNode(Node* node) { _node = node; }
};

class ListGraph
{
public:
	ListGraph() { size = 0; }
	~ListGraph() {}

	char GetVertex(int i) { return vertices[i]; }

	void Reset();
	void InsertVertex(char name);
	void InsertEdge(int u, int v);
	void Display();

	Node* Adjance(int i) { return nodes[i]; }
	bool IsEmpty() { return size == 0; }
	bool IsFull() { return size >= MAX_VERTEX; }


private:
	int size;
	char vertices[MAX_VERTEX];
	Node* nodes[MAX_VERTEX];
};