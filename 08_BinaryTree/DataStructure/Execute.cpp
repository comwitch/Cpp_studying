#include "BinaryTree.h"

int main()
{
	BTree<char> tree;
	BTree<char>::Node* A = tree.CreateNode('A');
	BTree<char>::Node* B = tree.CreateNode('B');
	BTree<char>::Node* C = tree.CreateNode('C');
	BTree<char>::Node* D = tree.CreateNode('D');
	BTree<char>::Node* E = tree.CreateNode('E');
	BTree<char>::Node* F = tree.CreateNode('F');
	BTree<char>::Node* G = tree.CreateNode('G');
	
	tree.Root(A);

	A->Left = B;
	B->Left = C;
	B->Right = D;

	A->Right = E;
	E->Left = F;
	E->Right = G;

	cout << " ___ Pre Order __" << endl;
	tree.PreOrder(A); // 전위순
	cout << endl;

	cout << "__ In Order __ " << endl;
	tree.InOrder(A); // 중위순회.
	cout << endl;


	cout << "___Post Order__" << endl;
	tree.PostOrder(A); 
	cout << endl;

	return 0;
}