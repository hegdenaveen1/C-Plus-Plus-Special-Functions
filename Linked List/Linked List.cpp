

struct node
{
	int data;
	node* next;
};

void PrintList(node* head)
{
	node* temp = head;
	while(temp!=NULL)
	{
		cout << temp->data << " ";
		temp=temp->next;
	}
}


node* PushBackList(node *head,int data1)
{
    
    if(head==NULL)
    {
        node* temp1=new node;
        temp1->data = data1;
        temp1->next=NULL;
        return temp1;
    }
    else
    {
    node* temp = head;
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }    
    node* temp1=new node;
    temp1->data=data1;
    temp1->next = NULL;
    temp->next = temp1;
	return head;
    }
}

node* PushFrontList(node* head, int data1)
{
	node* temp = new node;
	temp->data = data1;
	temp->next = head;
	return temp;
}

node* ReverseList(node *head)
{
  node* temp = head;
    node* A = NULL;
    while(temp!=NULL)
    {   
        A = PushFrontList(A,temp->data);
        temp=temp->next;
    }
   return A; 
}
