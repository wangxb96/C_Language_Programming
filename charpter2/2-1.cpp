#include<stdio.h>
int main()
{
	int num1,num2;
	printf("请输入num1和num2:");
	scanf("%d %d",&num1,&num2);
	printf("num1和num2的和为：%d\n",num1+num2);
	printf("num1和num2的差为：%d\n",num1-num2);	
	printf("num1和num2的积为：%d\n",num1*num2);
	if(num2!=0)
	{
	 printf("num1和num2的商为：%f\n",num1*0.1/num2);
     printf("num1和num2的余数为：%d\n",num1%num2);	
	}
	else
	 printf("被除数不能为0！！！");
	return 0;
}
