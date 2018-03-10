#include <bits/stdc++.h>
using namespace std;

struct node
{
	int data;
	struct node *next;
};
 
node* push(struct node* head, int new_data)
{
   	struct node* temp = new node;
 	temp->data  = new_data;
    temp->next = head;
 	head = temp;
	return head;
}

node* deletebyvalue(struct node *head, int key)
{
    node* temp = head;
 	node* prev;
    if (temp != NULL && temp->data == key)
    {
        head = temp->next;   
        free(temp);               
        return head;
    }
    while (temp != NULL && temp->data != key)
    {
        prev = temp;
        temp = temp->next;
    }
    if (temp == NULL) 
    	return head;
 
    prev->next = temp->next;
 	free(temp);  
    return head;
}

node* deleteposition(struct node *head, int n)
{
	node* temp1 = head; 
	if (n ==1)
	{
		head =temp1->next;
		free(temp1);
		return head;
	}
	for (int i = 0; i < n-2; ++i)
	{temp1 = temp1->next;}

	node* temp2 =temp1->next;
	temp1->next = temp2->next;
	free(temp2);
	return head;
}

node* insertafterposition(node* head,int data , int n)
{
	node* temp1 = new node;
	temp1->data = data;
	temp1->next = NULL;
	if(n==1)
	{
		temp1->next = head;
		head =temp1;
		return head;
	}
	node* temp2 = head;
	for (int i = 0; i < n-1; ++i)
	{temp2 = temp2->next;}
	
	temp1->next = temp2->next;
	temp2->next = temp1;
	return head;
}

node* append(struct node* head , int new_data)
{
   	struct node* temp = new node;
 	struct node *last = head ; 
    temp->data  = new_data;
    temp->next = NULL;
    if (head  == NULL)
    {
       head  = temp;
       return head ;
    }
    while (last->next != NULL)
        last = last->next;

    last->next = temp;
    return head ;
}
 
void printList(struct node *node)
{
	while (node != NULL)
	{
		cout<<node->data<<" ";
		node = node->next;
	}
}
 
int main()
{
	struct node* head = NULL;
	head = append(head, 6);     //6
	head = push(head, 7);       //7 6 
	head = push(head, 1);       //1 7 6
	head = append(head, 4);		//1 7 6 4		 
	head = append(head, 8);		//1 7 6 4 8
	head = insertafterposition(head,10,4);  //1 7 6 4 10 8
	head = deleteposition(head,3);
	head = deletebyvalue(head,7);
	cout<<"linked list is ";
	printList(head);
	return 0;
}