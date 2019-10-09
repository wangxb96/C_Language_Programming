#include<stdio.h>
int output(int n);
int main()
{
	int n;
	printf("请输入一个整数：\n");
	scanf("%d",&n);
	output(n);
	return 0;
}

int output(int n)
{
    if(n!=0)
    {
    	printf("%d ",n%10);
	 	n=n/10;
	 	output(n);
	}
	return 0;
}
