#include <iostream>
#include "LinkedList.h"

using namespace std;

Node * Create(DataType data)
{
	Node* node = new Node();

	node->data = data;
	node->next = NULL;

	return node;
}

void Destroy(Node * node)
{
	delete node;
	node = NULL;
}

void Push(Node ** head, Node * node)
{
	if ((*head) != NULL)
	{
		Node* tail = *head;

		while (tail->next != NULL)
			tail = tail->next;

		tail->next = node;
	}
	else
	{
		*head = new Node();
		*head = node;
	}
}

/*
��� ����� ��ũ�� Ÿ�� ������ �� �������� �Էµ� ��带 ���������
*/

void Insert(Node * cur, Node * node)
{
	node->next = cur->next;
	cur->next = node;
}
/*
������� ���� ��� �����͸� ������ ��忡 �Է�, ������� �����͸� ������ ���� ����
*/


void InsertHead(Node ** head, Node * node)
{
	if (*head == NULL)
		*head = node;
	else
	{
		node->next = *head;
		*head = node;
	}
}
/*
��尡 ���ٸ� ����, �ִٸ� ����� �����͸� ������ ����� ��������Ϳ� �Է�, ��������͸� ����.
*/

void Remove(Node ** head, Node * remove)
{
	if (*head == remove)
		*head = remove->next;
	else
	{
		Node* cur = *head;
		while (cur != NULL && cur->next != remove)
			cur = cur->next;

		if (cur != NULL)
			cur->next = remove->next;
	}
}
/*
������ ��忡 ����� ��带 �������� ����, ���� ������
*/

Node * GetNode(Node * head, int index)
{
	Node* cur = head;

	while (cur != NULL && (--index >= 0))
		cur = cur->next;

	return cur;
}

/*
������ �ε�����ȣ ���� ��������͸� Ÿ�� �� �ش� ��带 ���
*/

int GetNodeCount(Node * head)
{
	int count = 0;
	Node* cur = head;

	while (cur != NULL)
	{
		cur = cur->next;
		count++;
	}

	return count;
}

/*
������ ������� ���� ��������͸� Ÿ�� �� �ش� ����� �Ѱ��� ���
*/