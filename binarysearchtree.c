#include <stdio.h>
#include <stdlib.h>

struct node {
 struct node *left;
 struct node *right;
 int data;
};

struct node *new=NULL,*ptr=NULL, *rightptr=NULL, *leftptr=NULL, *ptr1=NULL,*root=NULL ;

void insert();
void inorder(struct node*ptr);
void preorder(struct node*ptr);
void postorder(struct node*ptr);

void main() {
	int opt;
	do {
		printf("\nChoose the operation number : \n");
		printf("1.Insert \n2.inorder-display \n3.preorder-display \n4.postorder-display \n0.Exit : ");
		scanf("%d",&opt);
		switch(opt) {
			case 1: insert();
				break;
			case 2: inorder(root);
				break;
			case 3: preorder(root);
				break;
			case 4: postorder(root);
				break;
			case 0:
			default:break;
		}
	} while(opt!=0);
}
void insert(){
int x;
new=(struct node*)malloc(sizeof(struct node));
printf("Enter the data : ");
scanf("%d",&x);
new->left = new->right =NULL;
if (new == NULL)
printf("\n Insufficient Memory");
else
{
new->right = new->left = NULL;
new->data = x;
}
if (root == NULL)
{
root=new;
}
else
{
ptr = root;

while (ptr!=NULL){
if (x==ptr->data)

printf("Item present in the tree ");

else if (x > ptr->data)
{
ptr1 = ptr;
ptr = ptr->right;
}
else{

ptr1 = ptr;
ptr = ptr->left;
}
}
if(x > ptr1->data)
ptr1->right = new;
else 
ptr1->left = new;
}	
}





void inorder(struct node *ptr)
{
	
if(ptr!=NULL){
		
inorder(ptr->left);
		
printf("%d ",ptr->data);
inorder(ptr->right);
	
}
}

void preorder(struct node *ptr)
{
	
if(ptr!=NULL){
		
printf("%d ",ptr->data);
		
preorder(ptr->left);
		
preorder(ptr->right);
	
}
}
void postorder(struct node *ptr)
{
	
if(ptr!=NULL){
		
postorder(ptr->left);
		
postorder(ptr->right);
		
printf("%d ",ptr->data);
	
}

}









