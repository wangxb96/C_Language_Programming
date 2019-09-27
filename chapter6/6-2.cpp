#include<stdio.h>
int main()
{
	int i=0;
	int sign=0;//指示符 
	char ch;
	printf("请输入一行字符：");
	while((ch=getchar())!='\n')
	{
	    if(sign==0 && ch!=' ')
	      i++;
		if(ch==' ')
		  sign=0;
		else
		  sign=1;	
	}
	printf("该行字符中有单词%d个。",i);
	return 0; 
}
