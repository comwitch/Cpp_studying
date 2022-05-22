#include <iostream>
#include "AdjacencyMatrix.h"
#include "AdjacencyList.h"

using namespace std;

int main()
{

	//{
	//	MatGraph Graph;

	//	//Á¤Á¡»ğÀÔ
	//	Graph.InsertVertex('A');
	//	Graph.InsertVertex('B');
	//	Graph.InsertVertex('C');
	//	Graph.InsertVertex('D');

	//	//°£¼± »ğÀÔ
	//	Graph.InsertEdge(0, 1);
	//	Graph.InsertEdge(0, 2);
	//	Graph.InsertEdge(0, 3);
	//	Graph.InsertEdge(2, 3);


	//	Graph.Display();
	//}

	{
		ListGraph Graph;

		//Á¤Á¡»ğÀÔ
		Graph.InsertVertex('A');
		Graph.InsertVertex('B');
		Graph.InsertVertex('C');
		Graph.InsertVertex('D');

		//°£¼± »ğÀÔ
		Graph.InsertEdge(0, 1);
		Graph.InsertEdge(0, 2);
		Graph.InsertEdge(0, 3);
		Graph.InsertEdge(2, 3);


		Graph.Display();
	}

	
	return 0;
}