#include<stdio.h>
int main()
{
	int n,s=0,d=0;
	int t;
	printf("请输入一个整数：");
	scanf("%d",&n);
	t=n;
	while(n%10!=n)
	{
		s+=n%10;
		n=n/10;
		d++;
	 } 
	s+=n;
	d++;
	printf("%d的各位数字之和为%d，共有%d位。",t,s,d);
	return 0;
}
