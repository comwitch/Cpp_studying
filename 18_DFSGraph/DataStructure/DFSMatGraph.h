#pragma once
#include "AdjacencyMatrix.h"
class DFSMatGraph : public MatGraph
{
public:
	void ResetVisited();

	void DFS(int v);
	void DFSRecur(int v);

	bool IsLinked(int u,int v) {return  Matrix[u][v]; }




private:
	bool visited[MAX_VERTEX];

};

