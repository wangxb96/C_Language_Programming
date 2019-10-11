#include<stdio.h>
int main()
{
	char *c[12]={"January","February","March","April","May","June","July","August","September","October","November","December"};
	int i;
	printf("请输入对应的月份：");
	scanf("%d",&i);
	printf("月份%d的对应英文名称为%s",i,c[i-1]);
	return 0;
}
