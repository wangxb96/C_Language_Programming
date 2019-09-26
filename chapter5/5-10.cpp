#include<stdio.h>
int reverse(int number);
int main()
{
	int n;
	printf("请输入一个整数:");
	scanf("%d",&n);
	printf("reverse(%d)的返回值是%d",n,reverse(n));
	return 0;
}

int reverse(int number)
{
	int reverse_number=number%10;
	number/=10;
	while(number%10!=number)
	{
		reverse_number=reverse_number*10+number%10;
		number/=10;
	}
	reverse_number=reverse_number*10+number;
	return reverse_number;
}
