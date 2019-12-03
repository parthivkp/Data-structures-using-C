#include<stdio.h>
#include<stdlib.h>

struct node{
struct node *link;
int data;
};struct node *temp,*head,*ptr,*rear,*front;
 void ins_end(){ 
 	temp=(struct node *)malloc(sizeof(struct node));
 	printf("enter data\n");
 	scanf("%d",&temp->data);
 	temp->link=NULL;
 	if(head==NULL){
 		head=temp;
	 }else{
	 	ptr=head;
	 	while(ptr->link!=NULL){
	 		ptr=ptr->link;
		 }ptr->link=temp;
	 }
 }
  void display(){
  	if(head==NULL){
  		printf("nothing to print\n");
  		
	  }else{
	  	ptr=head;
	  	while(ptr!=NULL){
	  		printf("%d\t",ptr->data);
	  		ptr=ptr->link;
		  }
	  }
  }
  
  int palindrome(){ int count,i=0,j;
  	ptr=head;
  	while(ptr!=NULL){
  		count=count+1;
  		ptr=ptr->link;
	  } while(i!=count/2){
	  	front=rear=head;
	  	for(j=0;j<i;j++){
	  		front=front->link;
		  }for (j=0;j<count-(i+1);j++){
		  	rear=rear->link;
		  }if(rear->data!=front->data){
		  	return 0;
		  }	else{ i++;
			  }
		  
	  } return 1;
  }
  
	int main(){ int ch; while(1){
	
		printf("\npress\n1.add data\n2.display\n.3.plaindrome check\n0.exit\n");
		scanf("%d",&ch);
		switch(ch){
			case 1:ins_end();break;
			case 2:display();break;
			case 3:if(palindrome()==1){
				printf("\nyes its is palindrome linked list\n");
		} else{
			printf("\n no its not a palindrome linked list\n");
		}  break;
			case 0:exit(0);
		} } return 0;
	}




