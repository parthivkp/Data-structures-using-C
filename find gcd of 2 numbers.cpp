#include<stdio.h>
#include<stdlib.h>

int gcd(int n1,int n2);

int main(){ int n1,n2;
	printf("enter 2 positive integers\n");
	scanf("%d%d",&n1,&n2);
	printf("gcd of %d and %d is %d",n1,n2,gcd(n1,n2));
}

int gcd(int n1,int n2){
	if(n2!=0)
	return gcd(n2,n1%n2);
	else
	return n1;
}
