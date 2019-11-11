#include<ctype.h>
#include<stdio.h>
#include<stdlib.h>
#define max 30
 int top=-1,i,j,op1,op2,res;
 char ch,postfix[max],infix[max],s[max],diteam,num;
 
void push(char ch){
	if (top==max-1){
		printf("overflow\n");
	} else {
		s[++top]=ch;
	}
}
char pop(){
	if (top==-1){
		printf("underflow\n");
	}else{
		diteam=s[top--];
		
	}
} 
int main(){
	printf("enter the post fix expression\n");
	gets(postfix);
	while(postfix[j]!='\0'){
		ch=postfix[j];
	if	(isalpha(ch)){
			printf("enter the value of %c\n",ch);
			scanf("%d",&num);
			push(num);
		} else{
			op2=pop();
			op1=pop();
			switch(ch){
				case '+':res=op1+op2;push(res);break;
				case '-':res=op1-op2;push(res);break;
				case '*':res=op1*op2;push(res);break;
				case'/':res=op1/op2;push(res);break;
				
			}
		} j++;
	} printf("answer is \n %d",s[top]);
}
