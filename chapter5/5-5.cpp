#include<stdio.h>
int fn(int a,int n);
int main()
{
	int a,n;
	int sum=0,i;
	printf("请输入两个正整数a和n:");
	scanf("%d %d",&a,&n);
	for(i=1;i<=n;i++)
	  sum+=fn(a,i);
	printf("a+aa+aaa+aa...a(n个a)之和为%d",sum);
	return 0;
	
}

int fn(int a,int n)
{
	int i;
	int sum=a;
	for(i=1;i<n;i++)
	{
		sum=sum*10+a; 
	}
	return sum;
}
