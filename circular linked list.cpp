#include<stdio.h>
#include<stdlib.h>

struct node{
	int data;
	struct node *link;
};struct node *last=NULL,*temp,*ptr;

void ins_beg(){
	temp=(struct node *)malloc(sizeof(struct node));
	printf("enter data\n");
	scanf("%d",&temp->data);
	if(last==NULL){
		last=temp;
		temp->link=temp;
	} else{
		temp->link=last->link;
		last->link=temp;
		
	} printf("\nINSERTED\n");
} 
void ins_end(){
		temp=(struct node *)malloc(sizeof(struct node));
	printf("enter data\n");
	scanf("%d",&temp->data);
	if(last==NULL){
		last=temp;
		temp->link=temp;
	} else{
		temp->link=last->link;
		last->link=temp;
		last=temp;
	} printf("\nINSERTED \n");
} 
void ins_pos(){ int count=0,pos=0,i=1;
	ptr=last->link;
	while(ptr!=last){
		count++;
		ptr=ptr->link;
	} count++;
	printf("enter the position at which u want to insert a node  \n");
	scanf("%d",&pos);
	if (pos<0||pos>count+1){
		printf("out of bound...");
	} else{
	
	if(pos==1){
		ins_beg();
	}else if (pos==count+1){
		ins_end();
	}else{ temp=(struct node *)malloc(sizeof(struct node));
	printf("enter data\n");
	scanf("%d",&temp->data);
	ptr=last->link;
		while(i<pos-1){
			ptr=ptr->link;
			i++;
		} temp->link=ptr->link;
			ptr->link=temp;
	}
}}
void del_beg(){
	if(last==NULL){
		printf("nothing to delete\n");
	} else if(last->link==last){
		free(last);
		last=NULL;
	}
	
	else {
	
	ptr=last->link;
	last->link=ptr->link;
	free(ptr);
}
}
void del_end(){
	if(last==NULL){
		printf("nothing to delete\n");
	} else if(last->link==last){
		free(last);
		last=NULL;
	} else{
	 ptr=last->link;
	while(ptr->link!=last){
		ptr=ptr->link;
		
	} ptr->link=last->link;
	free(last);
	last=ptr;
}}
void del_pos(){ int po=0,coun=0,i=1;
	if(last==NULL){
		printf("nothing to delete\n");
	} else{ ptr=last->link;
			while(ptr!=last){
				coun++;
				ptr=ptr->link;
			} coun++;
		printf("enterthe node number which u wish to delete\n");
		scanf("%d",&po);
		if(po==1){
			del_beg();}
			else if(po==coun){
				del_end();
			} else{
				ptr=last->link;
				while(i<po-1){
					ptr=ptr->link;i++;
				} temp=ptr->link;
				ptr->link=temp->link;
				free(temp);
			}
		
	}
	
}

 void display(){
	if(last==NULL){
		printf("NOTHING TO DISPLAY\n");
	} else { printf("printing...................\n");
		ptr=last->link;
		while(ptr!=last){
			printf("%d\t",ptr->data);
			ptr=ptr->link;
		} printf("%d\t",ptr->data);
	}
}
int main(){ int ch;
	while(1){
	
	printf("\npress\n1.ins beg\n2.ins at end\n3.insert at any position\n4.del beg\n5.del at the end\n6.del at any pos\n7.display\n0.exit\n");
	scanf("%d",&ch);
	switch(ch){
		case 1:ins_beg();break;
		case 2:ins_end();break;
		case 3:ins_pos();break;
		case 4:del_beg();break;
		case 5:del_end();break;
		case 6:del_pos();break;
		case 7:display();break;
		case 0:exit(0);
	}
}
}
