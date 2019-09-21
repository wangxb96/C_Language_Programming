#include<stdio.h>
int main()
{
	int i,m,n;
	double sum0,sum1=0;
	printf("请输入正整数m和n:");
	scanf("%d %d",&m,&n);
	for(i=m;i<=n;i++)
	{
		sum0=i*i+1*0.1/i;
		sum1+=sum0;
	 } 
	printf("得出的结果为:%f",sum1);
	return 0;
}
