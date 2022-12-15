#include<stdio.h>
#include<stdlib.h>
void push();
void pop();
void printlist();
struct node
{
int data;
struct node*next;
};
struct node*top;
void main()
{
int opt;
do
	{
	printf("choose the option number\n: 1.push\n 2.pop\n 3.printlist\n");
	scanf("%d",&opt);
switch(opt)
{ 
		
		case 1:push();
			break;
		case 2:pop();
			break;
		case 3:printlist();
		    	 break;
		default:
		printf("not valid");
		}
	}
while (opt!= 4);
}
void push()
  {
  struct node *new=NULL;
  new=(struct node*)malloc(sizeof (struct node));
  printf("enter the data to be pushed\n");
  scanf("%d",&new->data);
  new->next=top;
  top=new;
  }
void pop()
  {
  struct node *temp;
  temp=top;

  if (top==NULL)
  	printf("stack underflow\n");
  else{
    printf("item to be poped %d",top->data);
    
    top=top->next;
    free(temp);
    }}
void printlist()
	{
		struct node *ptr;
		ptr=top;
		if(top==NULL)
		  printf("no list");
		else
		{
		while(ptr!=NULL)
		{
		printf("the list is%d\n",ptr->data);
		ptr=ptr->next;
		}
		}
}

		
			
							



