#include<stdio.h>
typedef struct Salary{
	int id;
	char name[10];
	float BasicSalary;
	float bonus;
	float insurance;
	float RealWages;
}salary;
int main()
{
	salary a[10];
	int i;
	printf("请输入10个职工的基本信息(依次为职工编号、姓名、基本工资、奖金和保险)：\n");
	for(i=0;i<10;i++)
	{
		printf("请输入第%d个职工的信息：\n",i+1);
		printf("请输入第%d个职工的编号：\n",i+1);
		scanf("%d",&(a[i].id)); 
		printf("请输入第%d个职工的姓名：\n",i+1);	
		scanf("%s",&(a[i].name));  
		printf("请输入第%d个职工的基本工资：\n",i+1);
		scanf("%f",&(a[i].BasicSalary));
		printf("请输入第%d个职工的奖金：\n",i+1);
		scanf("%f",&(a[i].bonus)); 
		printf("请输入第%d个职工的保险：\n",i+1);
		scanf("%f",&(a[i].insurance));
		a[i].RealWages=a[i].BasicSalary+a[i].bonus-a[i].insurance;
	}
	for(i=0;i<10;i++)
	   printf("%s的ID为%d，其实发工资为%0.2f\n",a[i].name,a[i].id,a[i].RealWages);
	return 0;
}
