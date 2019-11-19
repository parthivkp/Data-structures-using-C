#include<stdio.h>
#include<stdlib.h>

struct node{
int data;
struct node *llink;
struct node *rlink;
};struct node *root,*temp;

int is_rightchild(struct node *tree);
int is_rightchild(struct node *tree);
void inorder(struct node *tree);
void create(struct node *tree);
void main(){
root=(struct node*)malloc(sizeof(struct node));
printf("enter the data\n");
scanf("%d",&root->data);
root->rlink=NULL;
root->llink=NULL;
create(root);
printf("the inorder traverse of the tree is \n");
inorder(root);
} 
int is_leftchild(struct node *tree){
int ch;
printf("do you want a left child for %d\n",tree->data);
printf("Press 1 for YES and 2. NO\n");
scanf("%d",&ch);
if (ch==1)
return 1;
else 
return 0;

}

int is_rightchild(struct node *tree){
int ch;
printf("do you want a right child for %d\n",tree->data);
printf("Press 1 for YES and 2. NO\n");
scanf("%d",&ch);
if (ch==1)
return 1;
else 
return 0;

} 
void create(struct node *tree){

if (is_leftchild(tree)==1){
temp=(struct node*)malloc(sizeof(struct node));
printf("enter the data\n");
scanf("%d",&temp->data);
tree->llink=temp;
create(temp);
} else
tree->llink=NULL;

if(is_rightchild(tree)==1){
temp=(struct node*)malloc(sizeof(struct node));
printf("enter the data\n");
scanf("%d",&temp->data);
tree->rlink=temp;
create(temp);
} else
tree->rlink=NULL;

}
 void inorder(struct node *tree){
 if(tree!=NULL){
 inorder(tree->llink);
 printf("%d\t",tree->data);
 inorder(tree->rlink);
 
 }
 }






 

