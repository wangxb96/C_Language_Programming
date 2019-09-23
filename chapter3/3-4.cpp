#include<stdio.h>
//一个发现，条件语句括号里的不能连写，要用&&相连接 
int main()
{
	int n,grade,sum=0;
	int i;
	float aver;
	int A,B,C,D,E;
	A=B=C=D=E=0;
	printf("请输入学生数：");
	scanf("%d",&n);	
	for(i=0;i<n;i++)
	{
		printf("请输入第%d个学生的成绩:",i+1);
		scanf("%d",&grade);
		sum+=grade;
		if(90<=grade&&grade<=100)
		    A++;
		else if(80<=grade&&grade<=89)
		    B++;
		else if(70<=grade&&grade<=79)
		    C++;
		else if(60<=grade&&grade<=69)
		    D++;
		else if(0<=grade&&grade<=59)
		    E++;
		else 
		 printf("输入成绩有误！！！");
	}
	aver=sum/n;
	printf("学生们的平均分为%0.2f:\n其中A等有%d个\n，其中B等有%d个\n，其中C等有%d个\n，其中D等有%d个\n，其中E等有%d个",aver,A,B,C,D,E);
	return 0;
}
