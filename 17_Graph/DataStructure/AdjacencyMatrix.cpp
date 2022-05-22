#include "AdjacencyMatrix.h"

MatGraph::MatGraph()
{
	Reset();
}

MatGraph::~MatGraph()
{
}

void MatGraph::SetEdge(int i, int j, int val)
{
	Matrix[i][j] = val;
}

void MatGraph::Reset()
{
	for (int i = 0; i < MAX_VERTEX; i++)
	{
		for (int j = 0; j < MAX_VERTEX; j++)
		{
			SetEdge(i, j, 0);
		}
	}
}

void MatGraph::InsertVertex(char name)
{
	if (IsFull())
	{
		cout << "Á¤Á¡ÀÌ °¡µæ Âþ½À´Ï´Ù" << endl;
		return;
	}

	vertices[size++] = name;
}

void MatGraph::InsertEdge(int i, int j)
{
	SetEdge(i, j, 1);
	SetEdge(j, i, 1);
}

void MatGraph::Display()
{

	cout << "Vertex Size : " << size << endl;
	cout << "  ";

	for (int i = 0; i < size; i++)
	{
		cout << GetVertex(i) << " ";
	}
	cout << endl;

	for (int i = 0; i < size; i++)
	{
		cout << GetVertex(i) << " ";
		for (int j = 0; j < size; j++)
		{
			cout << GetEdge(i, j) << " ";
		}
		cout << endl;
	}
}
