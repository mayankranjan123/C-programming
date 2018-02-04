#include<stdio.h>
#include<malloc.h>
struct node
{
	int data;
	struct node*next;
	
}*start=NULL;

struct node* createNode()
{
	struct node*newly=(struct node*) malloc(sizeof(struct node));
	return(newly);
	
}
void delPosition()
{
	int n,i;
	struct node*temp,*k;
	temp=start;
	printf("Enter position\n");
	scanf("%d",&n);
	if(n==1)
	{
		start=temp->next;
		free(temp);
		
	}
	else
	{
	
	for(i=0;i<n-2;i++)
	{
	temp=temp->next;
	}
	k=temp->next;
	temp->next=k->next;
	free(k);
	
	
}
}
void delBefore(int item)
{
	if(start==NULL)
	{
		printf("Empty List\n");
		
	}
	else
	{
		
	
	struct node*p1,*p2,*p3;
	p1=p2=p3=start;
	while(p1->data!=item)
	{
		p3=p2;
		p1=p1->next;
		p2=p1;
		p1=p1->next;
	}
	p3->next=p1;
	free(p2);
}
}

void create(int n)
{
	struct node*ne;
	ne=createNode();
	ne->data=n;
	ne->next=NULL;
	if(start==NULL)
	{
		start=ne;
		
	}
	else
	{
		struct node*temp=start;
		while(temp->next!=NULL)
		{
			temp=temp->next;
		}
		temp->next=ne;
	}
	
}
void del()
{
	
	struct node*temp=start;
	start=temp->next;
	free(temp);
}
void display()
{
	struct node*temp=start;
	if(start==NULL)
	{
		printf("Empty\n");
	}
	else
	{
	
	while(temp!=NULL)
	{
		printf("%d\t",temp->data);
		temp=temp->next;
	}
}
	
	
}
void reverse()
{
	struct node*current,*prev,*next;
	current=start;
	prev=NULL;
	while(current!=NULL)
	{
next=current->next;
current->next=prev;
prev=current;
current=next;
	
	}
	start=prev;
}
int menu()
{
	int ch;
		printf("\nEnter choice\n");
	printf("1.Add last node\n");
	printf("2.Delete beginning node\n");
	printf("3.Display items\n");
	printf("4.Delete before\n");
	printf("5.Enter position to delete\n");
	printf("6.Reverse linked list\n");
	scanf("%d",&ch);
	return (ch);

	
}
int main()
{
		while(1)
	{
	int i,j,n,item;
	

	
	switch(menu())
	{
		case 1 :
		printf("Enter data\n");
		scanf("%d",&n);
		 create(n);
		break;
		case 2:
			del();
			break;
		case 3:
			display();
			break;
			case 4:
				printf("Enter item\n");
				scanf("%d",&item);
				delBefore(item);
				break;
				case 5:
					delPosition();
					break;
					case 6:
						reverse();
						break;
			default:
				printf("Invalid Entry\n");
	}
}
}
