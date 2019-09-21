#include<stdio.h>
int main()
{
	int x,n,result=1;
	int i;
	printf("请输入实数x和正整数n:");
	scanf("%d %d",&x,&n);
	for(i=0;i<n;i++)
	{
		result*=x;
	}
	printf("x^n为：%d",result);
	return 0;
}
