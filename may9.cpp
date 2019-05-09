/*
Implement a binary search tree with add and remove methods
*/

#include <iostream>

using namespace std;

class Node
{
	friend class BST; //allowing access to all private members 
private:
	int data;
	Node *left;
	Node *right;
};

class BST
{
private:
	Node *root; 

	BST(int x)
	{
		this->data = x;
		this->left = NULL;
		this->right = NULL;
	}

	void add(Node *root, int x)
	{
		if(root->data > x){
			if(!root->left)
				root->left = new Node(x);
			else
				add(root->left, x);
		}
		else
		{
			if(!root->right)
				root->right = new Node(x);
			else
				add(root->right, x);
		}
	}

	void remove(Node *root, int x)
	{
		
	}
}

int main()
{
	return 0;
};