#include<stdio.h>
int main()
{
	char c1;
	char a[80];
	int b[26],c[26];
	int i=0,j;
	int k;
	printf("请输入一个以回车符结束的字符串："); 
	while((c1=getchar())!='\n')
	{
		a[i]=c1;
		i++;
	}
	k=i;
	i=0;
	for(j='A';j<='Z';j++)
	{
		b[i]=j;
		i++;
	}
	i=0;
	for(j='Z';j>='A';j--)
	{
		c[i]=j;
		i++;
	}
	for(i=0;i<k;i++)
	{
	   for(j=0;j<26;j++)
	   {
	   	if(a[i]==b[j])
	   	  a[i]=c[j];
	   }
	}
	printf("替换后的字符串为:");
	for(i=0;i<k;i++)
	  printf("%c",a[i]);
	return 0;
}
