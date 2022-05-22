#include <iostream>
#include "AdjacencyMatrix.h"
#include "AdjacencyList.h"
#include "DFSMatGraph.h"

using namespace std;

int main()
{

	{
		DFSMatGraph Graph;
		

		//Á¤Á¡»ðÀÔ
		Graph.InsertVertex('A');
		Graph.InsertVertex('B');
		Graph.InsertVertex('C');
		Graph.InsertVertex('D');
		Graph.InsertVertex('E');
		Graph.InsertVertex('F');
		Graph.InsertVertex('G');
		Graph.InsertVertex('H');

		//°£¼± »ðÀÔ
		Graph.InsertEdge(0, 1); // ab 
		Graph.InsertEdge(0, 2);	// ac
		Graph.InsertEdge(1, 3);	// bd
		Graph.InsertEdge(2, 3);	// cd
		Graph.InsertEdge(2, 4);	// ce
		Graph.InsertEdge(3, 5);	// df
		Graph.InsertEdge(4, 6);	// eg
		Graph.InsertEdge(4, 7);	// eh
		Graph.InsertEdge(6, 7);	// gh


		
		Graph.Display();

		cout << " == display graph == " << endl;
		Graph.DFS(0);
	}

	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;

	{
		ListGraph Graph;

		//Á¤Á¡»ðÀÔ
		Graph.InsertVertex('A');
		Graph.InsertVertex('B');
		Graph.InsertVertex('C');
		Graph.InsertVertex('D');

		//°£¼± »ðÀÔ
		Graph.InsertEdge(0, 1);
		Graph.InsertEdge(0, 2);
		Graph.InsertEdge(0, 3);
		Graph.InsertEdge(2, 3);


		Graph.Display();
	}

	
	return 0;
}