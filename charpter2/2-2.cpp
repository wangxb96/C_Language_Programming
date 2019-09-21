#include<stdio.h>
int main()
{
	int consume;
	float ele_price,paymoney;
	printf("请输入您当月的用电量：");
	scanf("%d",&consume);
	if(consume<=50)
	{
		paymoney=0.53*consume;
		printf("您需支付电费为%f元：",paymoney);
	 } 
	else
	 {
	 	paymoney=(0.53+0.05)*consume;
	 	printf("您需支付电费为%f元：",paymoney);
	 }
	return 0;
}
