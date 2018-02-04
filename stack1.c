#include<stdio.h>
#include<string.h>
#define max 10
int top=-1;
int stack[max];
void insert()
{
	int item;
	printf("Enter item to insert\n");
	scanf("%d",&item);
	if(top==max-1)
	printf("Overflow\n");
	else
	{
		top++;
		stack[top]=item;
		
		
	}	
}
void view()
{
	int i;
	if(top==-1)
	{
		printf("Empty list\n");
	}
	else
	{
	
	for(i=top;i>=0;i--)
	{
		printf("\n%d\n",stack[i]);
	}
}
}
void del()
{
	int i,item;
	if(top==-1)
	{
		printf("Underflow\n");
	}
	else
	{
		printf("Popped element is : %d \n",stack[top]);
		top--;
	}
}
char reverse(char *str,int n)
{
	int i;
	
	for(i=0;i<n;i++)
	{
		insert(str[i]);
	}
	for(i=0;i<n;i++)
	{
		str[i]=top;
		del();
	}
}


int menu()
{
	int ch;
	printf("Enter your choice\n");
	printf("1.Insert node in stack\n");
	printf("2.View node in stack\n");
	printf("3.Delete node from stack\n");
	printf("4.Reverse a string\n");
	scanf("%d",&ch);
	return ch;
}

int main()
{
	int n;
	char str[20];
	while(1)
	{
	
	switch(menu())
	{
	case 1:	insert();
	break;
	case 2: view();
	break;
	case 3: del();
	break;
	case 4:
	printf("Enter a string\n");
	scanf("%s",str);
	reverse(str,strlen(str));
	break;
		
		
		
	}
	}
}
