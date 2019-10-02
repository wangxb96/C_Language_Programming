#include<stdio.h>
//十进制转任何进制都是采用整数除n取余倒序排列
int main()
{
	int n,m;
	int i=0,j;
	int a[10];
	printf("请输入一个十进制数：");
	scanf("%d",&n);
	printf("请输入一个其他进制的基数(范围在2到16之间)：");
	scanf("%d",&m); 
	while(n/m!=0)
	{
		a[i]=n%m;
		n=n/m;
		i++;
	 } 
	a[i]=n%m;
	printf("十进制转换为%d进制后结果为：",m);
	for(j=i;j>=0;j--)
	 printf("%d",a[j]);
	return 0;
}
