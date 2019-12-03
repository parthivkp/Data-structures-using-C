#include<stdio.h>
#include<stdlib.h>

struct node{
	int data;
	struct node *llink;
	struct node *rlink;
};struct node *root=NULL,*parent,*temp,*tree,*ptr;
void create(){
	temp=(struct node *)malloc(sizeof(struct node));
	printf("enter data\n");
	scanf("%d",&temp->data);
	temp->rlink=NULL;
	temp->llink=NULL;
	if(root==NULL){
		root=temp;
	}
	else {
		ptr=root;
		while(ptr!=NULL){
			parent=ptr;
			if(ptr->data==temp->data){
				printf("data exits aldready (no duplicates can be inserted)\n");
				return;
			} else if(temp->data<ptr->data){
				ptr=ptr->llink;
			}else {
				ptr=ptr->rlink;
			}
		} if(parent->data<temp->data){
			parent->rlink=temp;
		} else {
			parent->llink=temp;
		}
	}
}
void inorder(struct node *tree){
	
	if(tree!=NULL){
		inorder(tree->llink);
		printf("%d\t",tree->data);
		inorder(tree->rlink);
	} 
	
} 





int main(){ int ch;
		 while(1){

	printf("press...\n1. To create or add data to the BINARY SEARCH tree\n2. display\n3. exit\n");
	scanf("%d",&ch);
	switch (ch){
		case 1: create();break;
		case 2:printf("inorder traverse of the tree is \n");inorder(root);break;
		case 3:exit(0);
	}
	
}

}


