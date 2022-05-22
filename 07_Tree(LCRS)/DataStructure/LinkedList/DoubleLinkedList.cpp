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
헤드 존재시 링크를 타고 끝까지 들어가 마지막에 입력된 노드를 연결시켜줌
*/

void DoubleLinkedList::Insert(Node * cur, Node * node)
{
	node->next = cur->next;
	node->prev = cur;
	cur->next = node;
}
/*
현노드의 다음 노드 포인터를 삽입할 노드에 입력, 현노드의 포인터를 삽입할 노드로 변경
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
헤드가 없다면 생성, 있다면 헤드의 포인터를 삽입할 노드의 노드포인터에 입력, 헤드포인터를 변경.
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
삭제할 노드에 연결된 노드를 이전노드와 연결, 이후 노드삭제
*/

Node * DoubleLinkedList::GetNode(Node * head, int index)
{
	Node* cur = head;

	while (cur != NULL && (--index >= 0))
		cur = cur->next;

	return cur;
}

/*
헤드부터 인덱스번호 까지 노드포인터를 타고 들어가 해당 노드를 출력
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
헤드부터 최종노드 까지 노드포인터를 타고 들어가 해당 노드의 총갯수 출력
*/

