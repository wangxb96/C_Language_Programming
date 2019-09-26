#include<stdio.h>
int fib(int n);
int main()
{
	int m,n;
	int i;
	printf("请输入两个正整数m和n:");
	scanf("%d %d",&m,&n);
	printf("%d到%d之间的斐波那契序列为:",m,n);
	for(i=m;i<=n;i++)
      printf("%d  ",fib(i));
    return 0;
}

int fib(int n)
{
	int f1=1,f2=1;
	int f;
	if(n==1)
	  f=1;
	else if(n==2)
	  f=1;
	else
	  f=fib(n-1)+fib(n-2);
	return f;
}
