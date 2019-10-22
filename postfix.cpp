#include<stdio.h>
#include<string.h>
#include<ctype.h>
#define max 30
char ch,infix[max],postfix[max],s[max];
int top=-1,i=0,j=0,iteam,diteam;

	void push(char ch)
	{ if(top==max-1)
	printf("overflow\n");
	else
	{ s[++top]=ch;
	}
	}
	char pop()
    { int diteam;
	if (top==-1)
    { printf("underflow\n");
	} else
 
	{ diteam=s[top--];
	return (diteam);
	}
	}
	int isoperator(char ch)
	{ if (ch=='+'||ch=='-'||ch=='^'||ch=='*'||ch=='/')
	   return(1);
	   else return(0);
	   
	} 
	int precedence(char ch)
	{ switch (ch){
		case'^':return(4);break;
		case'+':
		case'-':return(2);break;
		case'*':return(3);break;
		case'/':return(3);break;
		default:return(1);break;
	}
	}
	
	int main()
	{ printf("enter the expression\n");
	   gets(infix);
	   while(infix[i]!='\0')
	   { ch=infix[i];
	     if (isalpha(ch))
	     { postfix[j]=ch;
	      j++;
		 } else if (ch=='(')
		 {  push(ch);
		 } else if (isoperator(ch))
		 { if(ch!='^')
		 { while (top!=-1&& precedence(s[top])>=precedence(ch))
		  {
		  postfix[j]=pop();j++;}
		 }
		  push(ch);}
		  else if(ch==')')
			{
				while(s[top]!='(')
				{
					postfix[j]=pop();
					j++;
				}
			diteam=pop();
		    }
		  else printf("invalid character\n");i++;
		  
		  } while(top>-1)
		  { postfix[j]=pop();j++;
		  } postfix[j]='\0';
		  puts(postfix); }
		 
	   
	
	
	
