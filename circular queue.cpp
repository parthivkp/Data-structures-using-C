#include<stdio.h>
#include<stdlib.h>
#define size 4
int rear=-1,front=-1,i,cq[size],iteam;

void insert(){
	if((rear==size-1&&front==0)||(rear==front-1)){
		printf("overflow\n");
	} else {
		printf("enter data\n");
		scanf("%d",&iteam);
		if(front==-1){
			front=0;
		} rear=(rear+1)%size;
		cq[rear]=iteam;
	}
} 
void pop(){
	if(rear==-1&&front==-1){
		printf("underflow\n");
	}else{
		printf("deleted iteam id %d",cq[front]);
		if(front==rear){
			rear=-1;front=-1;
		} else{ front=(front+1)%size;
		}
	}
}
void display(){
	if(rear==-1&&front==-1){
		printf("empty\n");
	}else { printf("printing values...............\n");
		for(i=front;i!=rear;i=(i+1)%size){
			printf("%d\n",cq[i]);
		} printf("%d\n",cq[i]);
	}
}
 int main(){
 	int ch; while(1){
	 
 	printf("1.insert\n2.delete\n3.display\n4.exit\n");
 	scanf("%d",&ch);
 	switch(ch){
 		case 1:insert();break;
 		case 2:pop();break;
 		case 3:display();break;
 		case 4:exit(0);break;
	 }
 }
return 0;
}
