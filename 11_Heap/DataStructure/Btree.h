#pragma once
#include <iostream>

using namespace std;

template<class T>
class BTree
{
public:
	struct Node;

public:
	BTree() {}
	~BTree() {}

	void Insert(Node** parent, Node* child)
	{
		if ((*parent)->data < child->data) // compare child node to parent node.
		{
			if ((*parent)->right == NULL)
				(*parent)->right = child;
			else
				Insert(&(*parent)->right, child);
		}
		else if ((*parent)->data > child->data) // when parent is bigger than child.
		{
			if ((*parent)->left == NULL)
				(*parent)->left = child;
			else
				Insert(&(*parent)->left, child);
		}
	}

	Node* Search(Node* node, T data, int& depth)
	{
		if (node == NULL)
			return NULL;

		depth++;

		if (node->data == data)
			return node;
		else if (node->data > data)
			return Search(node->left, data, depth);
		else if (node->data < data)
			return Search(node->right, data, depth);

		return NULL;
	}

	void InOrder(Node* node, int depth)
	{
		if (node == NULL)
			return;

		depth++;

		InOrder(node->left, depth);
		cout << " " << node->data << " | " << depth << endl;

		InOrder(node->right, depth);
	}

	Node* Remove(Node* node, Node* parent, T data)
	{
		Node* remove = NULL;
		if (node == NULL)
			return NULL;

		if (node->data > data)
			remove = Remove(node->left, node, data);
		else if (node->data < data)
			remove = Remove(node->right, node, data);
		else
		{
			remove = node;

			if (node->left == NULL && node->right == NULL) // no child
			{
				if (parent->left == node)
					parent->left = NULL;
				else
					parent->right = NULL;
			}
			else
			{
				if (node->left != NULL && node->right != NULL)
				{
					Node* minNode = SearchMinValue(node->right);

					minNode = Remove(node, NULL, minNode->data);
					node->data = minNode->data;

					return minNode;
				}
				else
				{
					Node* temp = NULL;

					if (node->left != NULL)
						temp = node->left;
					else
						temp = node->right;
					
					if (parent->left == node)
						parent->left = temp;
					else
						parent->right = temp;

				}
			}//if(node->left)
		}//if(node->data)
	
		return remove;
	}

	Node* SearchMinValue(Node* node)
	{
		if (node == NULL)
			return NULL;
		if (node->left == NULL)
			return node;
		else
			return SearchMinValue(node->left);
	}


	Node* Root() { return root; }
	void Root(Node* root) { this->root = root; }

public:
	static Node* CreateNode(T data)
	{
		Node* node = new Node();
		node->data = data;
		node->left = node->right = NULL;

		return node;
	}
	static void DestroyNode(Node** node)
	{
		delete *node;
		*node = nullptr;
	}



public:
	struct Node
	{
		T data;
		Node* left;
		Node* right;
	};

private:
	Node* root;
};