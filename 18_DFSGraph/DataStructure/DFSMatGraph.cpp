#include "DFSMatGraph.h"

void DFSMatGraph::ResetVisited()
{
	for (int i = 0; i < size; i++)
	{
		visited[i] = false;
	}
}

void DFSMatGraph::DFS(int v)
{
	ResetVisited();
	DFSRecur(v);
}

void DFSMatGraph::DFSRecur(int v)
{
	visited[v] = true;
	cout << GetVertex(v) << " ";

	for (int i = 0; i < size; i++)
	{
		if (IsLinked(v,i) && visited[i] == false)
		{
			DFSRecur(i);
		}
			
	}
}
