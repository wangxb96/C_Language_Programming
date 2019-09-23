#include<stdio.h>
int main()
{
	int number,even_sum=0;
	printf("请输入一批正整数：");
	scanf("%d",&number);
	while(number!=0)
	{
		if(number<0)
		   break;
		if(number%2==0)
		   even_sum+=number;
		scanf("%d",&number);
	}
	printf("其中的偶数和为%d",even_sum);
	return 0;
 } 
