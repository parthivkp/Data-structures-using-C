#include<stdio.h>
#include<stdlib.h>
#define size 30
int rear=-1,front=-1,q[size],iteam;
void push(){
	if(rear==size-1){
		printf("overflow\n");
	} else { printf("enter data\n");
	scanf("%d",&iteam);
	if(front==-1&&rear==-1){
		rear=0;
		front=0;
	} else { rear++;
	
	} q[rear]=iteam;
	  
	}
	}
void pop(){
	if(front==-1){
		printf("empty\n");}
	else if (front==rear){
		printf("deleted iteam is %d\n",q[front]);
		front=-1;rear=-1;
	} else {
		printf("deleted iteam is %d\n",q[front]); front++;
	}
		
	}
void display(){ int i;
	if (rear==-1){
		printf("empty list\n");
	} else {
		printf("printing values......................\n");
	for(i=front;i<=rear;i++){
		
		printf("%d\n",q[i]);
	}
}}
int main(){ int ch;
while(1){

	printf("1.push\n2.pop\n3.display\n0.exit\n\n\n");
	scanf("%d",&ch);
	switch(ch){
		case 1:push();break;
		case 2: pop();break;
		case 3: display();break;
		case 0:exit(0);break;
	}
}return 0;}
