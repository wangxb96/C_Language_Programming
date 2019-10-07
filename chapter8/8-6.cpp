#include<stdio.h>
#include<malloc.h>
void delchar(char* s,char c);
int main()
{
	char *a,*p;
	char c,ch;
	int i=1;
	printf("请输入一个字符串：");
	a=(char*)malloc(sizeof(char));
	scanf("%c",a);
	while((c=getchar())!='\n')
	{
		a=(char*)realloc(a,sizeof(char));
		*(a+i)=c;
		i++;
	}
	printf("请输入字符串中要删除的字符：");
	scanf("%c",&ch);
	delchar(a,ch);
	p=a;
	while(*p!='\0')
	{
		printf("%c",*p);
		p++;
	}
	return 0;
}

void delchar(char* s,char c)
{
	int i=0,j;
	char *p,*q;
	p=s;
	while(*p!='\0')
	{
		if(*p!=c)
		{
		   s[i]=*p;
		   i++;
		}
		p++;
	}  
	s[i]='\0';
}
