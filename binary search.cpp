#include<stdio.h>
#include<stdlib.h>

int binarysearch(int a[],int low,int high,int x){
	int mid=(low+high)/2;
	if(low>high) return -1;
	if(a[mid]==x) return mid;
	if(a[mid]<x)
	return binarysearch(a,mid+1,high,x);
	else return binarysearch(a,low,mid-1,x);
}
int main(){ int leg,pos,a[100],search;
	printf("enter array lenght\n");
	scanf("%d",&leg);printf("enter the elements in sorted form\n");
	for(int i=0;i<leg;i++){
		scanf("%d",&a[i]);
	 } printf("enter element to search\n");scanf("%d",&search); 
	pos=binarysearch(a,0,leg-1,search);
	if(pos<0) printf("not found\n");
	else{
		printf("%d found at location %d\n",search,pos+1);
	}
}
