#include<stdio.h>
int even(int n);
int main()
{
	int n;
	int odd_sum=0;
	printf("请输入一批正整数（输入为0时结束）：");
	scanf("%d",&n);
	while(n!=0)
	{
		if(!even(n))
		  odd_sum+=n;
		printf("请继续输入正整数（输入为0时结束）：");
		scanf("%d",&n);
	}
	if(odd_sum>0)
    	printf("输入的数中奇数和为%d：",odd_sum);
    else
        printf("ERROR!!!");
	return 0; 
}

int even(int n)
{
	if(n%2==0)
	  return 1;
	else 
	  return 0;
}
