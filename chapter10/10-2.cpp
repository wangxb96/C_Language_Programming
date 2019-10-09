#include<stdio.h>
#include<math.h>
int function(int x,int n);
int main()
{
	int x,n;
	printf("请输入数x和数n，求函数f(x，n)：\n");
	scanf("%d %d",&x,&n);
	printf("f(x,n)=%d",function(x,n));
	return 0;
}

int function(int x,int n)
{
	int sum=0;
	int i;
	for(i=1;i<=n;i=i+2)
	{
		sum+=pow(x,i);
	}
	for(i=2;i<=n;i=i+2)
	{
		sum-=pow(x,i);
	}
	return sum;
}
