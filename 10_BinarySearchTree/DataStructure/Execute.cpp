#pragma once
#include "Btree.h"

#define Tree BTree<int>

int main()
{
	Tree t;
	Tree::Node* root = Tree::CreateNode(12);
	t.Root(root);

	t.Insert(&root, Tree::CreateNode(22));
	t.Insert(&root, Tree::CreateNode(99));
	t.Insert(&root, Tree::CreateNode(42));
	t.Insert(&root, Tree::CreateNode(17));
	t.Insert(&root, Tree::CreateNode(3));
	t.Insert(&root, Tree::CreateNode(98));
	t.Insert(&root, Tree::CreateNode(34));
	t.Insert(&root, Tree::CreateNode(75));
	t.Insert(&root, Tree::CreateNode(32));
	t.Insert(&root, Tree::CreateNode(1));

	t.InOrder(root, 0);

	int depth = 0;
	Tree::Node* node = t.Search(root, 98, depth);
	cout << "\n\n" << "찾음 : " << node->data << node->data << ", " << depth << " 번에 찾음" << endl;

	node = t.Remove(root, NULL, 75);
	cout << "삭제할 노드 :" << node->data << endl;
	t.DestroyNode(&node);

	t.InOrder(root, 0);


	return 0;
}