#include<stdio.h>
#include<stdlib.h> 
int main()
{
	FILE *fp;
	char ch;
	int n1=0,n2=0,n3=0;//n1:字母，n2：数字，n3：其他字符 
	if((fp=fopen("F:\\CODE4funny\\c_language_programming\\f12-1.txt","r"))==NULL)
	{
		printf("File open error!\n");
		exit(0);
	}
	while(!feof(fp))
	{
		ch=fgetc(fp);
		if(ch>='a'&&ch<='z'||ch>='A'&&ch<='Z')
		{
			n1++;
		 } 
		else if(ch>='0'&&ch<='9')
		{
			n2++;
		}
		else
		  n3++;
	}
	if(fclose(fp))
	{
		printf("Can not close the file!\n");
		exit(0);
	}
	printf("该文件中有字母%d个，数字%d个，其他字符%d个。\n",n1,n2,n3);
	return 0;
 } 
