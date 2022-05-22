#include "Tree.h"

#define Node(p) Tree<p>::Node
#define Create(p) Tree<char>::CreateNode(p)

int main()
{
	Tree<char> tree;

	Node(char)* A = Create('a');
	Node(char)* B = Create('b');
	Node(char)* C = Create('c');
	Node(char)* D = Create('d');
	Node(char)* E = Create('e');
	Node(char)* F = Create('f');
	Node(char)* G = Create('g');
	Node(char)* H = Create('h');
	Node(char)* I = Create('i');
	Node(char)* J = Create('j');
	Node(char)* K = Create('k');

	tree.AddChild(A, B);
	tree.AddChild(B, C);
	tree.AddChild(B, D);
	tree.AddChild(D, E);
	tree.AddChild(D, F);

	tree.AddChild(A, G);
	tree.AddChild(G, H);

	tree.AddChild(A, I);
	tree.AddChild(I, J);
	tree.AddChild(I, K);


	return 0;
}