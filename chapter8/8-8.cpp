#include<stdio.h>
int main()
{
	char c[49];
	char ch;
	int i,m,j=0,k=0;
	printf("请输入一个字符串：");
	while((ch=getchar())!='\n')
	{
		c[i]=ch;
		i++;
	}
	c[i]='\0';
	m=i;
	if(m%2==0)
	{
		for(i=0;i<m/2;i++)
		{
			if(c[i]!=c[m-1-i])
			   break;
			j++;
		}
		if(j==m/2)
		  printf("输入的字符串为回文。");
		else
		  printf("输入的字符串不是回文。");
	}
	else
	{
		for(i=0;i<m/2;i++)
		{
			if(c[i]!=c[m-1-i])
			  break;
			k++;
		}
		if(k==m/2)
		  printf("输入的字符串为回文。");
		else
		  printf("输入的字符串不是回文。");		   
	 }
	return 0; 
 } 
