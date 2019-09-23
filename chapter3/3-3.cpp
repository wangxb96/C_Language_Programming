#include<stdio.h>
int main()
{
	int miles,wait_time;
	int paymoney;
	printf("请输入行驶里程和等待时间:\n");
	scanf("%d %d",&miles,&wait_time);
	if((miles+wait_time/5)<=3)
	  paymoney=10;
	else if(3<(miles+wait_time/5)<=10)
	  paymoney=10+2*(miles+wait_time/5-3);
	else 
	  paymoney=10+2*7+3*(miles+wait_time/5-10);
	printf("您应该支付车费%d元。",paymoney);
	return 0;
 } 
