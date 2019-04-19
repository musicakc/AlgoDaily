/*
Sum Right Side Nodes
Find the sum of all right leaves in a given binary tree. 
Leaves are defined as nodes with no children nodes.


     5

    / \

   10  8

  / \

17   3

*/

#include <iostream>

using namespace std;

struct node
{
	node *left;
	node *right;
	int val;

};

node* newNode(int num)
{
	struct node* node = (struct node*)malloc(sizeof(struct node)); 
	node->val = num;
	node->left = NULL;
	node->right = NULL;
	return node;
}

int sum = 0;

void sumOfRightLeaves(node* root) {
	if(!root)
		return;
	
	if(root->right)
	{
		if(!root->right->left && !root->right->right)
			sum += root->right->val;

	}
		
	sumOfRightLeaves(root->left);
	sumOfRightLeaves(root->right);

}

int main()
{
	struct node* root = newNode(1);
	root->left = newNode(2);
	root->right = newNode(3);
	root->left->left = newNode(4);
	root->right->right = newNode(5);
	sumOfRightLeaves(root);
	cout<<"Sum of right leaves is: "<<sum<<endl;
	return 0;
}