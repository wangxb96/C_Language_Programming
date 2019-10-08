#include<stdio.h>
int main()
{
	char c;
	int i;
	int n1=0,n2=0,n3=0,n4=0,n5=0;
	printf("请输入一行文字：");
	while((c=getchar())!='\n')
	{
		if(c>='A'&&c<='Z')
		  n1++;
		else if(c>='a'&&c<='z')
		  n2++;
		else if(c==' ')
		  n3++;
		else if(c>='0'&&c<='9')
		  n4++;
		else
		  n5++; 
	}
	printf("该行文字中有大写字母%d个，小写字母%d个，空格%d个，数字%d个，其他字符%d个。",n1,n2,n3,n4,n5);
	return 0;
}
