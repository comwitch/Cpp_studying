#include <iostream>
#include "DoubleLinkedList.h"

using namespace std;

Node * DoubleLinkedList::Create(DataType data)
{
	Node* node = new Node();

	node->data = data;
	node->next = NULL;
	node->prev = NULL;

	return node;
}

void DoubleLinkedList::Destroy(Node * node)
{
	delete node;
	node = NULL;
}

void DoubleLinkedList::Push(Node ** head, Node * node)
{
	if ((*head) != NULL)
	{
		Node* tail = *head;

		while (tail->next != NULL)
			tail = tail->next;

		tail->next = node;
		node->prev = tail;
	}
	else
	{
		*head = node;
	}
}

/*
��� ����� ��ũ�� Ÿ�� ������ �� �������� �Էµ� ��带 ���������
*/

void DoubleLinkedList::Insert(Node * cur, Node * node)
{
	node->next = cur->next;
	node->prev = cur;
	cur->next = node;
}
/*
������� ���� ��� �����͸� ������ ��忡 �Է�, ������� �����͸� ������ ���� ����
*/


void DoubleLinkedList::InsertHead(Node ** head, Node * node)
{
	if (*head == NULL)
		*head = node;
	else
	{
		node->next = *head;
		(*head)->prev = node;
		*head = node;
	}
}
/*
��尡 ���ٸ� ����, �ִٸ� ����� �����͸� ������ ����� ��������Ϳ� �Է�, ��������͸� ����.
*/

void DoubleLinkedList::Remove(Node ** head, Node * remove)
{
	if (*head == remove)
	{
		*head = remove->next;

		if (*head != NULL)
			(*head)->prev = NULL;

		remove->prev = NULL;
		remove->next = NULL;
	}
	else
	{
		Node* cur = remove;
		remove->prev->next = cur->next;
		if(remove->next != NULL)
			remove->next->prev = cur->prev;

		remove->prev = NULL;
		remove->next = NULL;
	}
}
/*
������ ��忡 ����� ��带 �������� ����, ���� ������
*/

Node * DoubleLinkedList::GetNode(Node * head, int index)
{
	Node* cur = head;

	while (cur != NULL && (--index >= 0))
		cur = cur->next;

	return cur;
}

/*
������ �ε�����ȣ ���� ��������͸� Ÿ�� �� �ش� ��带 ���
*/

int DoubleLinkedList::GetNodeCount(Node * head)
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

