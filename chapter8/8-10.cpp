#include<stdio.h>
//#include<string.h>
int strcomp(char* s,char* t);
int main()
{
	int i,j;
	int m;
	char s1[20],s2[20];
	printf("输入两个字符串，进行比较。\n");
	printf("输入第1个字符串：\n");
	scanf("%s",s1);
	printf("输入第2个字符串：\n");
	scanf("%s",s2);
	m=strcomp(s1,s2);
	if(m==1)
	  printf("s1>s2");
	else if(m==0)
	  printf("s1==s2");
	else 
	  printf("s1<s2");
    return 0;
}

int strcomp(char* s,char* t)
{
	int i=0,j=0;
	int m=0,n=0;
	while(*(s+m)!='\0')
	{
		m++;
	}
	while(*(t+n)!='\0')
	{  
	    n++;
	}
	while(*s!='\0'&&*t!='\0')
	{
		if(*(s+i)>*(t+j))
		   return 1;
		else if(*(s+i)<*(t+j)) 
		   return -1;
		else
		{
			i++;
			j++;
		}
	}
	if(m==n&&i==j&&m==i)
	  return 0;
}
