/*
How Deep Does It Go
Write a method to determine how deep a binary tree goes. 
The tree's depth can be described as the number of nodes you 
encounter as you traverse from the root node to a leaf.

The root node is the topmost node, and a leaf is a node with 
no children.
*/

#include <iostream>

using namespace std;

struct Node
{
	Node *left;
	Node *right;
	int data;
};

Node* newNode(int num)
{
	struct Node* node = (struct Node*)malloc(sizeof(struct Node)); 
	node->data = num;
	node->left = NULL;
	node->right = NULL;
	return node;
}

int depthtree(Node *root)
{
	if(!root)
		return 0;
	else
	{
		int leftd = depthtree(root->left);
		int rightd = depthtree(root->right);

		if(leftd > rightd)
			return leftd+1;
		else
			return rightd+1;
	}
}

int main()
{
	struct Node* root = newNode(1);
	root->left = newNode(2);
	root->right = newNode(3);
	root->left->left = newNode(4);
	root->right->left = newNode(5);
	root->right->left->left = newNode(6);
	cout<<"Depth of tree is: "<<depthtree(root)<<endl;
	return 0;
}