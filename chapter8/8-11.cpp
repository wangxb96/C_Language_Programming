#include<stdio.h>
#include<malloc.h>
int main()
{
	int n,i;
	int *p;
	float sum,aver;
	int max,min;
	printf("请输入学生人数：\n");
	scanf("%d",&n);
	p=(int*)malloc(sizeof(int));
	printf("输入第1个学生的成绩：\n");
	scanf("%d",p);
	sum=*p;
	max=*p;
	min=*p;
	for(i=1;i<n;i++)
	{
		printf("输入第%d个学生的成绩：\n",i+1);
		p=(int*)realloc(p,sizeof(int));
		scanf("%d",p+i);
		sum+=*(p+i);
		if(*(p+i)>max)
		  max=*(p+i);
		if(*(p+i)<min)
		  min=*(p+i);
	}
   aver=sum/n;
   printf("学生的平均成绩为%0.2f，最高成绩为%d，最低成绩为%d.",aver,max,min);
   return 0;
}
