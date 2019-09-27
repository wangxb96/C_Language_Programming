#include<stdio.h>
int main()
{
	int c1=0,c2=0,c3=0,c4=0;
	char ch;
	printf("请输入一行字符：");
	while((ch=getchar())!='\n')
	{
		if('a'<=ch&&ch<='z'||'A'<=ch&&ch<='Z')
		  c1++;
		else if(ch==' ')
		  c2++;
		else if('0'<=ch&&ch<='9')
		  c3++;
		else 
		  c4++;
	}
	printf("输入的这行字符有英文字母%d个，空格%d个，数字%d个，其他字符%d个",c1,c2,c3,c4);
	return 0;
}
