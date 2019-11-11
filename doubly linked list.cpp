#include<stdio.h>
#include<stdlib.h>
struct node{
struct node *prev;
struct node *next;
int data;
}; struct node *head=NULL,*ptr=NULL,*temp=NULL,*newnode=NULL;
 int ins_beg(){

ptr=(struct node*)malloc(sizeof(struct node));
printf("\nenter the data\n");
scanf("%d",&ptr->data);
if(head==NULL){
ptr->prev=NULL;
ptr->next=NULL;
head=ptr;
}else{

ptr->prev=NULL;
ptr->next=head;
head=ptr;
head->prev=ptr;
}printf("node inserted\n");
}

int ins_end(){
ptr=(struct node*)malloc(sizeof(struct node));
printf("enter the data\n");
scanf("%d",&ptr->data);
if(head==NULL){
ptr->next=NULL;
ptr->prev=NULL;
head=ptr;

}
else{
temp=head;
while(temp->next!=NULL)
{
temp=temp->next;
}
temp->next=ptr;
ptr->prev=temp;
ptr->next=NULL;
printf("node is inserted\n");
}

}

int del_beg(){
if(head==NULL){
printf("\nnothing to delete\n");

}else if(head->next==NULL){

head=NULL;
free(head);

} else{
ptr=head;
head=ptr->next;
head->prev=NULL;
free(ptr);
}



}

int display(){

if(head==NULL){
printf("empty\n");
}else{
printf("\nprinting values.............\n");
ptr=head;
while(ptr!=NULL){
printf("%d\n",ptr->data);
ptr=ptr->next;
}

}
}
void del_end(){
	if (head==NULL){
		printf("nothing to delete\n");
	}else if (head->next==NULL){
		free(head);
		head=NULL;
		printf("node is deleted\n");
	}else {
		temp=head;
		while(temp->next!=NULL){
			temp=temp->next;
		} temp->prev->next=NULL;
		free(temp);
		printf("node deleted\n");
	}
}
	void ins_pos(){ int i=1,pos,count=0;
		printf("enter the node which u want to insert\n");
		scanf("%d",&pos);
		temp=head;
		while(temp!=NULL){
			temp=temp->next;
			count++;
		}
		if (pos==1){
			ins_beg();
		} else if(pos==count+1){
			ins_end();
		} else if (pos>1&&pos<=count){
			newnode=(struct node*)malloc(sizeof(struct node));
			temp=head;
			while(i<pos){
				temp=temp->next;
				i++;
				
			} 
			printf("enter the data\n");
			scanf("%d",&newnode->data);
			newnode->prev=temp->prev;
			newnode->next=temp;
			temp->prev->next=newnode;
			temp->prev=newnode;
			printf("node inserted\n");
		
		}
	} 
	void ser_del(){  int search,count;
	printf("enter the data node to be deleted\n");
	scanf("%d",&search);
	temp=head;
	if(head->data==search&&head->next==NULL){
		free(head);
	}else if (head->data==search){
		del_beg();
	} else {
		while (temp->next!=NULL&&temp->data!=search){
		
		temp=temp->next;}
	} if(temp->next==NULL){
		printf("not found\n"); }
		else if (temp->data==search&&temp->next==NULL){
			del_end();
		} else if(temp->data==search){
		temp->prev->next=temp->next;
		temp->next->prev=temp->prev;
		
			free(temp);
		}
	}
	
	void ins_order(){
		if (head==NULL){
			ins_beg();
		} else{
			newnode=(struct node*)malloc(sizeof(struct node));
			printf("enter the data\n");
			scanf("%d",&newnode->data);
			if(head->data>newnode->data){
				newnode->prev=NULL;
				head->prev=newnode;
				newnode->next=head;
				head=newnode;
			} else{
				temp=head;
				while(temp->next!=NULL&&temp->data<newnode->data){
					temp=temp->next;
				}  if (temp->data>newnode->data){
						newnode->prev=temp->prev;
					newnode->next=temp;
					temp->prev->next=newnode;
					temp->prev=newnode;
					
				} else if(temp->next==NULL){
					temp->next=newnode;
					newnode->prev=temp;
					newnode->next=NULL;
					
				}  
			}
		}
	}





 int main(){ int ch;

while(1){
printf("1.ins-beg\n2.display\n3.ins_end \n4.DEL_beg\n5.del_end\n6.ins_pos\n7.ser_del\n8.ins_order\n0.exit\n");
scanf("%d",&ch);
switch(ch){
case 1:ins_beg();break;
case 2: display();break;
case 3: ins_end();break;
case 4: del_beg();break;
case 5: del_end();break;
case 6: ins_pos();break;
case 7:ser_del();break;
case 8:ins_order();break;
case 0:exit(0);break;
 return 0;

}
}}
