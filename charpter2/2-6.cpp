#include<stdio.h>
#include<math.h>
int main()
{
	//答案算出来很奇怪，此题存疑 
	double loan,rate;
	double money,value;
	int i;
	printf("请输入贷款本金和月利率：");
	scanf("%lf %lf",&loan,&rate);
	printf("还款年限-月还款额表:\n");
	for(i=5;i<=30;i++)
	{
		value=pow(1+rate,(i*12));
		//printf("%f",value);
		money=loan*rate*value/(value-1);
		printf("第%d年每月需还款%lf元:\n",i,money);
	}
	return 0;
}
