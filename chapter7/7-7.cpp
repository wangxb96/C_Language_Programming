#include<stdio.h>
int main()
{
	char c;
	char a[80];
	int i=0,j;
	int n=0;
	printf("请输入一个以回车符结束的字符串："); 
	while((c=getchar())!='\n')
	{
		a[i]=c;
		i++;
	}
	for(j=0;j<=i;j++)
	{
	  if(a[j]>'A'&&a[j]<='Z'&&a[j]!='E'&&a[j]!='T'&&a[j]!='O'&&a[j]!='U')
	  {
	  	printf("%c是输入的大写辅音字母.\n",a[j]);
	    n++;
	  }
	}
	printf("输入的字符串中有大写辅音字母%d个。",n);
	return 0;
}
