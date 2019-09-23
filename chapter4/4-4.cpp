#include<stdio.h> 
int main()
{
	int n,i;
	float fenzi=2,fenmu=1,copy_fenzi;//之前把此处设为int型，结果精度出现问题 
	float sum=0;
	printf("请输入正整数n:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		sum+=fenzi/fenmu;
		copy_fenzi=fenzi;
		fenzi=fenzi+fenmu;
		fenmu=copy_fenzi;
	}
	printf("sum=%0.2f",sum);
	return 0;
}
