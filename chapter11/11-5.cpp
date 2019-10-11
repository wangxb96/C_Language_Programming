#include<stdio.h>
char *search_substr(char *s,char *t);
int main()
{
	int i;
	char s[20],t[10];
	printf("请依次输入两个字符串s和t：\n");
	scanf("%s %s",s,t);
	printf("子字符串t的首地址为%c\n",search_substr(s,t));
	return 0;
}

char *search_substr(char *s,char *t)
{
	char *p;
	p=s;
	int i=0,j=0;
	int m,n=0,l=0;
	while(s[i]!='\0')
	  i++;
	while(t[j]!='\0')
	  j++;
	if(j>i)
	  return NULL;
	for(m=0;m<i;m++)
	{
	   if(s[m]!=t[n]&&n!=j)
	     n=0;
	   else
	     n++;
	   l++;
	}
	if(n==j)
	  return p+l-n+1;  
 } 
