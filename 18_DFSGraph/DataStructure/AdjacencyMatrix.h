#pragma once

#include<iostream>

using namespace std;

#define MAX_VERTEX 256 //�ִ� ��������

class MatGraph
{
public:
	MatGraph();
	~MatGraph();

	char GetVertex(int i) { return vertices[i]; }
	int  GetEdge(int i, int j) { return Matrix[i][j]; }

	void SetEdge(int i, int j, int val);
	
	void Reset();
	void InsertVertex(char name);

	void InsertEdge(int i, int j);
	void Display();
	bool IsEmpty() { return size == 0; }
	bool IsFull() { return size >= MAX_VERTEX;  }
		 

protected:
	int size = 0; //������ ����
	char vertices[MAX_VERTEX]; //������ �̸�
	int Matrix[MAX_VERTEX][MAX_VERTEX]; //�������
};