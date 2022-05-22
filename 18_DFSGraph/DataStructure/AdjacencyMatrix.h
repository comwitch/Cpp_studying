#pragma once

#include<iostream>

using namespace std;

#define MAX_VERTEX 256 //최대 정점갯수

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
	int size = 0; //정점의 개수
	char vertices[MAX_VERTEX]; //정점의 이름
	int Matrix[MAX_VERTEX][MAX_VERTEX]; //인접행렬
};