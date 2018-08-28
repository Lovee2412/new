/*
*this program reverse linked list using recursion method
*author Lavanya Balla
*created by 01/08/2018
*/

#include<stdio.h>
#include<stdlib.h>

struct node
{
	int data;
	struct node* next;
};

void printList(struct node *n)
{	
	if(n==NULL)
	{
		printf("\bLinked list is empty");	
		return;
	}	
	while (n != NULL)
	{
		printf(" %d ", n->data);
		n = n->next;
	}
}

void addLast(struct node** n,int data)
{
	struct node* node=(struct node*)malloc(sizeof(struct node));
	struct node* last=(*n);
	node->next=NULL;
	node->data=data;
	if((*n)==NULL)
	{
		(*n)=node;
		return;
	}	
	while(last->next!=NULL)
		last=last->next;
	last->next=node;
	return;
}
void reverse(struct node** ptr,struct node* prev)
{
	struct node* temp;
	if(*ptr->next == NULL)
	{
		*ptr->next = previous;
		return ptr;
	} 
	else 
	{
		temp = reverse(ptr->next, ptr);
		ptr->next = previous;
		return temp;
	}
}
int main()
{
	struct node* head=(struct node*)malloc(sizeof(struct node));
	int choice;
	int data;
	do
	{
		printf("\n1.Create Linked List");
		printf("\n2.Reverse Linked list");
		printf("\n3.Show List");
		printf("\nEnter a your choice:  ");
		scanf("%d",&choice);
		switch(choice)
		{	
			case 1: printf("\nCreate Linked List");
				printf("\nEnter a element :");
				scanf("%d",&data);
				addLast(&head,data);
				break;
			case 2: printf("\nReversing linked list ");
				reverse(&head);
				break;
			case 3: printList(head);
				break;
		}
	}while(1);
}
