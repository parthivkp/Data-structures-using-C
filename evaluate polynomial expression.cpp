#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<math.h>
#define max 30

struct node{
struct node *link;
int coeff;
int power;

}; struct node *head=NULL,*ptr=NULL,*temp=NULL,*newnode=NULL,*curptr;

void create(){ temp=(struct node*)malloc(sizeof(struct node));
	printf("enter coeff and power\n");
	scanf("%d%d",&temp->coeff,&temp->power);
	if(head==NULL){
	
	head=temp;
	temp->link=NULL;
} else if(temp->power>head->power){
	temp->link=head;
	head=temp;
} else{
	ptr=head;
	while(ptr!=NULL&&ptr->power>=temp->power){
		curptr=ptr;
		ptr=ptr->link;
	} if(ptr==NULL){
		curptr->link=temp;
		temp->link=NULL;
	} else{
		temp->link=curptr->link;
		curptr->link=temp;
	}
}

}
void display(){
	if(head==NULL)
	printf("nothing to dispalay\n");
	else{
		ptr=head;
		while(ptr!=NULL){
			printf("%d::%d\t",ptr->coeff,ptr->power);
			ptr=ptr->link;
		}
	}
}

void evaluate(){ int sum=0,x;
	if(head==NULL)
	printf("nothing to delete");
	else{ printf("enter the value of x..\n");scanf("%d",&x);
		ptr=head;
		while(ptr!=NULL){
			sum=sum+ptr->coeff*pow(x,ptr->power); ptr=ptr->link;
		} printf("answer is \n%d ",sum);
	}
}


 int main(){ int ch;

while(1){
printf("\n1.create\n2.display\n3.evaluvate\n0.exit\n");
scanf("%d",&ch);
switch(ch){

case 2: display();break;
case 1: create();break;
case 3:evaluate();break;
case 0:exit(0);break;
 return 0;

}
}}
