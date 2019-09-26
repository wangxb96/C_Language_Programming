#include<stdio.h>
#include<math.h>
int is(int number);
int main()
{
	int m,n;
	int i;
	printf("请输入两个正整数m和n(1<=m,n<=1000):");
	scanf("%d %d",&m,&n);
	printf("%d到%d之间所有满足各位数字的立方和等于它本身的数有:",m,n);
	for(i=m;i<=n;i++)
	{
		if(is(i)==i)
		  printf("%d ",i);
	 } 
	return 0;
}

int is(int number)
{
	int sum=0;
	while(number%10!=number)
	{
		sum+=pow(number%10,3);
		number/=10;
	}
	sum+=pow(number,3);
	return sum;
}
