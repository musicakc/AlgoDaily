/*
Union of Linked Lists
Can you write a method getUnion to find the union of two linked lists? A union of two sets includes everything in both sets.

So given 1 -> 2 -> 3 and 3 -> 4 -> 5, 
we'd get 1 -> 2 -> 3 -> 4 -> 5
*/
#include <iostream>

using namespace std;

struct node
{
	int data;
	node* next;
};

void newNode(struct node** head, int val)
{
	struct node* newnode = (struct node*)malloc(sizeof(struct node));
	newnode->data = val;
	newnode->next = (*head);
	*head = newnode;
}

void printll(struct node* head)
{
	while(!head)
	{
		cout<<head->data<<" ";
		head = head->next;
	}
	cout<<endl;
}

node* getUnion(node *l1, node *l2)
{
	struct node* unionl = NULL;
	while(!l1->next && !l2->next)
	{
		if((l1->data < l2->data))
		{
			newNode(&unionl,l1->data);
			l1 = l1->next;
		}
		else 
		{
			newNode(&unionl, l2->data);
			l2 = l2->next;
		}
	}

	while(!l1->next)
	{
		newNode(&unionl, l1->data);
		l1 = l1->next;
	}

	while(!l2->next)
	{
		newNode(&unionl, l2->data);
		l2 = l2->next;
	}
	return unionl;
}

int main()
{
	struct node* l1 = NULL; 
    struct node* l2 = NULL; 
    
    newNode(&l1, 1); 
    newNode(&l1, 2); 
    newNode(&l1, 3); 
    
    newNode(&l2, 3); 
    newNode(&l2, 4); 
    newNode(&l2, 5); 
    
    printll(l1);
    printll(l2);
    struct node* l3;
    l3 = getUnion(l1,l2);
    printll(l3); 
	return -1;
}