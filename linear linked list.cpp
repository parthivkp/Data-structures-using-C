#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *link;
}; struct node *head=NULL,*newnode,*ptr,*temp;

void ins_beg(){
	newnode=(struct node*)malloc(sizeof(struct node*));
		printf("enter the data to be inserted\n");
		scanf("%d",&newnode->data);
	if (head==NULL){
		newnode->link=NULL;
		head=newnode;
	} else {
		newnode->link=head;
		head=newnode;
	}
} void ins_end(){
	newnode=(struct node*)malloc(sizeof(struct node*));
		printf("enter the data to be inserted\n");
		scanf("%d",&newnode->data);
			if (head==NULL){
		newnode->link=NULL;
		head=newnode;
	} else {
		temp=head;
		while(temp->link!=NULL){
			temp=temp->link;
		} temp->link=newnode;
		 newnode->link=NULL;
	}
} void ins_pos(){ int pos,count=0,i=1;
	newnode=(struct node*)malloc(sizeof(struct node*));
	printf("enter the node at which data is to be inserted\n");
	scanf("%d",&pos);
	temp=head;
	while(temp!=NULL){
		count++;
		temp=temp->link;
	}
	
	if(pos==1){
		ins_beg();
	} else if (pos==count+1){
		ins_end();
	} else if (pos>count+1||pos<0){
		printf("out of bound\n");}
		else{ 
			temp=head;
			printf("enter the data\n");
			scanf("%d",&newnode->data);
			while(i<pos-1){
				temp=temp->link;i++;
			} newnode->link=temp->link;
			temp->link=newnode;
		}
	
} void del_beg(){
	if (head==NULL){
		printf("\nnothing to delete as list is empty\n");
	} else if (head->link==NULL){
		head=NULL;
		free(head); }
		else {
			temp=head;
			head=temp->link;
			free(temp);
		}
	} void del_end();
	void del_pos(){ int pos,count=0;int i=1;
		if (head==NULL){
			printf("\nnothing to delete as the list is empty\n");
		} else { temp=head;
			printf("enter the node to be deleted\n");
			scanf("%d",&pos);
			while(temp!=NULL){
				temp=temp->link;
				count++;				
			} 
			if (pos==1){
				del_beg();
			} else if(pos>count||pos<0){
				printf("\n out of bound \n");
			} else if (pos ==count){
				del_end();
			} else { temp=head;
				while(i<pos-1){
				temp=temp->link;i++;
			} 	ptr=temp->link;
				temp->link=ptr->link;
				free(ptr);
			}
		}
	}
	void del_end(){
		if (head==NULL){
			printf("\n\nnothing to delete as the list is empty\n");
		}  else if (head->link==NULL){
		head=NULL;
		free(head); } 
		else {
			temp=head;
			while(temp->link!=NULL){
				ptr=temp;
				temp=temp->link;
			} ptr->link=NULL;
			 free(temp);
		}
	}

 void display(){
	if(head==NULL){
		printf("\nempty list\n\n");
	} else { temp=head;
		while(temp!=NULL){
			printf("\n%d\n",temp->data);
			temp=temp->link;
		}
	}
}
void main(){ int ch; while (1) {

	printf("\n\n1.display\n2.insert in the beg\n3.ins at end\n4.insert at any position\n5.delete at beg\n6.delete at end\n7.delete at location\n0.exit\n\n");
	scanf("%d",&ch);
	switch (ch){
		case 1: display();break;
		case 2: ins_beg();break;
		case 3: ins_end();break;
		case 4: ins_pos();break;
		case 5: del_beg();break;
		case 6: del_end();break;
		case 7: del_pos();break;
		case 0:exit(0);
	}
	
}}
