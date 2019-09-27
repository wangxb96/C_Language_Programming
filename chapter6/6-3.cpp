#include<stdio.h>
//之前想用getchar()来操作，想了很久也想不出解法。
//看了网上的解答，可以用两个scanf，分别输入数字和字符 
int main()
{
	int sum=0;
	int n;
	char c=0;
	printf("请输入运算数：");
	scanf("%d",&n);
	sum=n;
	while(c!='=')
	{
		scanf("%c",&c);
		if(c=='=')
		break;
		scanf("%d",&n);
		switch(c)
		{
			case'+':
				sum+=n;
				break;
			case'-':
				sum-=n;
				break;
			case'*':
			    sum*=n;
			    break;
			case'/':
				sum/=n;
				break;
			default:
				//printf("ERROR!!!\n");
				break;
		}
	 } 
	 printf("计算结果为%d:",sum);
	 return 0;
 } 
