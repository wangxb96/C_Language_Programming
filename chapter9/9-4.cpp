#include<stdio.h>
struct Book{
	char name[10];
	int price;
};
int main()
{
	struct Book b[10];
	int i;
	struct Book min,max;
	printf("请输入10本书的名称和定价：\n");
	for(i=0;i<10;i++)
	{
		printf("请输入第%d本书的名称和定价：\n",i+1);
		scanf("%s %d",&b[i].name,&b[i].price);
		if(i==0)
		{
			min.price=b[0].price;
			min.name=b[0].name;
			max.price=b[0].price;
			max.name=b[0].name;
		}
		if(b[i].price<min.price)
		{
			min.price=b[i].price;
			min.name=b[i].name;
		}
		if(b[i].price>max.price)
		{
			max.price=b[i].price;
			max.name=b[i].name;
		}
	}
	printf("定价最高的书的名称为%s,定价为%d。",max.name,max.price);
	printf("定价最低的书的名称为%s,定价为%d。",min.name,min.price);
	return 0;
}
