#include <bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    node *next;
};

void printlist(node* n)
{
	while(n!=NULL)
	{
		cout<<n->data<<" ";
		n = n->next;
	}
}


int main()
{
	node* head =NULL;
	node* secound =NULL;
	node* third =NULL;

	head = new node;
	secound =new node;
	third = new node;

	head->data = 2;
	head->next = secound;
	
	secound->data = 3;
	secound->next =third;
	
	third->data = 4;
	third->next=NULL;
	
	printlist(head);
	return 0;
}