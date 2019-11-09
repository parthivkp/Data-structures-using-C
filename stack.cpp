
#include<stdio.h>
#include<stdlib.h>
#define max 30
int ch,top=-1,s[max],iteam,i;
 
void push(){
	if (top==max-1){
		printf("overflow\n");
		
	} else {
		printf("enter the element to push\n");
		scanf("%d",&iteam);
		s[++top]=iteam;
	}
} void pop(){
	if (top==-1){
		printf("undeflow\n");
	} else{
		printf("%d is deleted\n",s[top--]);
	}
} void display(){
	if (top==-1){
		printf("nothing to display\n");
	}else {
	
	for(i=0;i<=top;i++)
	{
		printf("%d\n",s[i]);
	}
	}
} void main(){ while(1){

	printf("press\n 1 to push\n 2 to pop \n 3 to display \n 4.exit\n");
	scanf("%d",&ch);
	switch (ch){
		case 1:push();break;
		case 2:pop();break;
		case 3:display();break;
		case 4:exit(0);
	}
}}
