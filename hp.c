#include<stdio.h>
#include<string.h>
#include<stdlib.h>

void shift_table(char p[])
{	
	int i=0,m=0,j=0,s[134];
	m=strlen(p);
	for(i=0;i<128;i++)
	s[i]=m;
	for(j=0;j<m-1;j++)
	s[p[j]]=m-1-j;
}
 int string_match(char p[],char t[])
  {	int n,m,k,s[134],i,j;
 
	m=strlen(p);
	n=strlen(t);
	i=m-1;
	while(i<n)
	{
		k=0;
	while((k<=m-1)&&(t[i-k]==p[m-1-k]))
	k=k+1;
	if(k==m)
	return i-m+1;
	else
	i=i+s[t[i]];

	}
	  return -1;


  }

  void main()
{
    char p[1000],t[1000];
    int pos=0;
    printf("enter the main string\n");
    scanf("%s",t);
    printf("enter pattern string\n");
    scanf("%s",p);
    shift_table(p);
    pos=string_match(p,t);
    if(pos>1)
     printf("found at location %d",pos+1);
     if(pos<0)
     printf("pattern string not found\n");

 }	



