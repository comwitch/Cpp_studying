#include "AdjacencyList.h"

void ListGraph::Reset()
{
	for (int i = 0; i < size; i++)
	{
		if (nodes[i] != NULL)
			delete nodes[i];
	}

	size = 0;
}

void ListGraph::InsertVertex(char name)
{
	if (IsFull())
	{
		cout << "정점이 가득 차있습니다." << endl;
		return;
	}

	vertices[size] = name;
	nodes[size++] = NULL;
}

void ListGraph::InsertEdge(int u, int v)
{
	nodes[u] = new Node(v, nodes[u]);
	nodes[v] = new Node(u, nodes[v]);
}

void ListGraph::Display()
{
	cout << "Vertex Size : " << size << endl;
	for (int i = 0; i < size; i++)
	{
		cout << GetVertex(i) << " ";
		Node* head = nodes[i];
		while (head != NULL)
		{
			cout << GetVertex(head->GetData()) << " ";
			head = head->GetNode();
		}
		cout << endl;
	}
}
