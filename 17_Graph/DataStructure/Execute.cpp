#include <iostream>
#include "AdjacencyMatrix.h"
#include "AdjacencyList.h"

using namespace std;

int main()
{

	//{
	//	MatGraph Graph;

	//	//��������
	//	Graph.InsertVertex('A');
	//	Graph.InsertVertex('B');
	//	Graph.InsertVertex('C');
	//	Graph.InsertVertex('D');

	//	//���� ����
	//	Graph.InsertEdge(0, 1);
	//	Graph.InsertEdge(0, 2);
	//	Graph.InsertEdge(0, 3);
	//	Graph.InsertEdge(2, 3);


	//	Graph.Display();
	//}

	{
		ListGraph Graph;

		//��������
		Graph.InsertVertex('A');
		Graph.InsertVertex('B');
		Graph.InsertVertex('C');
		Graph.InsertVertex('D');

		//���� ����
		Graph.InsertEdge(0, 1);
		Graph.InsertEdge(0, 2);
		Graph.InsertEdge(0, 3);
		Graph.InsertEdge(2, 3);


		Graph.Display();
	}

	
	return 0;
}