/*
Invert a Binary Tree
Can you invert a binary tree over its vertical axis? Given a binary tree like this:

     4

   /   \

  2     7

 / \   / \

1   3 6   9

Performing an inversion would result in:

Output:



     4

   /   \

  7     2

 / \   / \

9   6 3   1

*/
#include <iostream>

using namespace std;

struct node
{
	int data;
	node* left;
	node* right;
};

node* newNode(int data)
{
	struct node* newnode = (struct node*)malloc(sizeof(struct node));
	newnode->left = NULL;
	newnode->right = NULL;
	newnode->data = data;
	return newnode;
}

node* invertv(struct node* root)
{
	if(!root)
		return NULL;
	else
	{
		invertv(root->left);
		invertv(root->right);
		struct node* temp;
		temp = root->left;
		root->left = root->right;
		root->right = temp;
		return root;
	}
}

void printmytree(struct node* root)
{
	if(root)
	{
		 printmytree(root->left);
		 cout<<root->data<<" ";
		 printmytree(root->right);
	}
}

int main()
{
	struct node* root = newNode(4);
	root->left = newNode(2);
	root->right = newNode(7);
	root->left->left = newNode(1);
	root->left->right = newNode(3);
	root->right->left = newNode(6);
	root->right->right = newNode(9);
	printmytree(root);
	cout<<endl;
	invertv(root);
	printmytree(root);
	cout<<endl;
	return 0;
}