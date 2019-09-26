#include<stdio.h>
int countdigit(int number,int digit);
int main()
{
	int number,digit;
	printf("请输入一个整数，统计并输出改数中'2'的个数:");
	scanf("%d",&number);
	printf("%d中有%d个2。",number,countdigit(number,2));
	return 0;
}

int countdigit(int number,int digit)
{
	int i=0;
	while(number%10!=number)
	{
		if(number%10==digit)
		  i++;
		number=number/10;
	}
	if(number==digit)
		i++;
	return i;
}
