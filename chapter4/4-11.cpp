#include<stdio.h>
int main()
{
	int m,n;
	int t,a;
	printf("输入两个正整数m和n:");
	scanf("%d %d",&m,&n);
	a=m*n;
	if(m<n)
	{
	  t=m;
	  m=n;
	  n=t;
	}
	while(m%n!=0)
	{
		t=n;
		n=m%n;
		m=t;
	}
	printf("最小公约数为:%d,最小公倍数为：%d",n,a/n);
	return 0;
}
