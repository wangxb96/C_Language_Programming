#include<stdio.h>
int fibo(int n);
int main()
{
	int n;
	printf("请输入一个数(>1)，求相应的斐波那契数：\n");
	scanf("%d",&n);
	printf("%d",fibo(n));
	return 0;
}

int fibo(int n)
{
	if(n==0)
	  return 0;
	else if(n==1)
	  return 1;
	else 
	  return fibo(n-2)+fibo(n-1);
}
