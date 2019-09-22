#include<stdio.h>
/*double fact(int n)
{
	int i,j;
	double e=0,value;
	for(i=1;i<=n;i++)
	{
	   value=1;
	   for(j=1;j<=i;j++)
	   {
	   	value=value*j;
	   }
	   e+=value;
	}	
	e=e+1;
	return e;  
}
int main()
{
	int n;
	printf("请输入一个正整数n:");
	scanf("%d",&n);
	printf("得到的结果为:%lf",fact(n));
	return 0;
}*/
double fact(int n)
{
	int j;
	double value=1;
	for(j=1;j<=n;j++)
	{
		value=value*j;
	}
	return value;
}
int main()
{
	int n,i;
	double sum=0;
	printf("请输入一个正整数n:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		sum+=fact(i);
	}
	sum=sum+1;
	printf("得到的结果为:%lf",sum);
	return 0;
}
