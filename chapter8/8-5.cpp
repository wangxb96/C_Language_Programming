#include<stdio.h>
void mcopy(char* s,char* t,int m);
int main()
{
	char a[100],b[100];
	int i=0,j;
	int m;
	char *p,c; 
	printf("请输入一个字符串：");
	while(i<100&&(c=getchar())!='\n')
	{
	    	a[i]=c;
	    	i++;
	}
	printf("输入m,使a字符串从m位置起开始复制到b字符串：");
	scanf("%d",&m);
	if(m>i)
	  printf("ERROR!!!");
	else
	  mcopy(a,b,m);
	p=b;
	/*while(*p!='\0')
	{
	   	printf("%c",*p);
	   	p++;
	}*/
	for(j=0;j<i-1;j++)
	 printf("%c",b[j]);
	return 0;
}

void mcopy(char* s,char* t,int m)
{
	int i=0;
	char *p;
	p=s+m-1;
	while(*p!='\0')
	{
		t[i]=*p;
		p++;
		i++;
	 } 
	t[i]='\0';
}
