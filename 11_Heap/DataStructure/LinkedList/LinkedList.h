#pragma once

typedef int DataType;

struct Node
{
	DataType data;
	Node* next;
};

Node* Create(DataType data);
void Destroy(Node* node);

void Push(Node** head, Node* node);
void Insert(Node* cur, Node* node);
void InsertHead(Node** head, Node* node);

void Remove(Node** head, Node* remove);
Node* GetNode(Node* head, int index);

int GetNodeCount(Node* head);