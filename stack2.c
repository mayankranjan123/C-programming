#include<stdio.h>
#include<malloc.h>
struct node
{
	int data;
	struct node*next;
}*top=NULL;

struct node* create()
{
		struct node*n=(struct node*) malloc(sizeof(struct node));
	return(n);
}
void push()
{
	struct node*temp;
	temp=create();
	int data;
	printf("Enter data item\n");
	scanf("%d",&data);
	temp->data=data;
	if(top==NULL)
	{
		top=temp;
		temp->next=NULL;
	}
	else
	{
		temp->next=top;
		top=temp;
	}
}
 
void view()
{
	struct node*temp=top;
	if(top==NULL)
	{
		printf("Empty\n");
	}
	else
	{
	printf("%d",temp->data);
	while(temp->next!=NULL)
	{
		temp=temp->next;
		printf("%d",temp->data);
	}
		
}
}

void pop()
{
	struct node*temp=top;
	if(top==NULL)
	{
		printf("Underflow\n");
	}
	else
	{
		top=temp->next;
		free(temp);
	}
}
int menu()
{
	int ch;
	printf("Enter your choice\n");
	printf("1.Insert node in stack\n");
	printf("2.View node in stack\n");
	printf("3.Delete node from stack\n");
	scanf("%d",&ch);
	return ch;
}

int main()
{
	int n;
	while(1)
	{
	
	switch(menu())
	{
	case 1:	push();
	break;
	case 2: view();
	break;
	case 3:pop();
	break;
		
		
		
	}
	}
}
