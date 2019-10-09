#include<stdio.h>
int output(int n);
int main()
{
	int n;
	printf("请输入一个整数：\n");
	scanf("%d",&n);
	printf("该整数逆序输出为：%d",output(n));
	return 0;
}

int output(int n)
{
	int sum=0;
	while(n!=0)
    {
    	sum=sum*10+n%10;
	 	n=n/10;
	 	output(n);
	}
	return sum;
}
