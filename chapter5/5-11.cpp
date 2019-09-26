#include<stdio.h>
int input_stu(int number,int a[][5])
{
	int i,j;
	for(i=0;i<number;i++)
	{
	   printf("请输入第%d个学生的成绩：\n",i+1);
	   for(j=0;j<5;j++)
	   {
	   	  printf("请输入第%d个学生第%d门课的成绩：",i+1,j+1);
	   	  scanf("%d",&a[i][j]);
	   }
	}
	return 0;
}

float avr_stu(int a[][5],int number)
{
	int i,j,sum=0;
	float aver;
	for(j=0;j<number;j++)
	{
	  for(i=0;i<5;i++)
	    sum+=a[j][i];
	  aver=sum/5;
	  printf("第%d个学生5门课程的平均分为%0.2f\n",j+1,aver);
	}
    return 0;
}

float avr_cor(int a[][5],int number)
{
	int i,j;
	int sum;
	float aver;
	for(j=0;j<5;j++)
	{
	  for(i=0;i<number;i++)
	  	sum+=a[i][j];
	  aver=sum/5;
	  printf("第%d门课程的平均分为%0.2f分\n",j+1,aver);
	}
	return 0;
}

int calc_data(int n,int a[][5],int number)
{
	int i;
	if(n==0)
    {
     avr_stu(a,number);
	}
	if(n==1)
	{
     avr_cor(a,number);	
    }	  
	return 0;
}

int highsest(int a[][5],int number,int j)
{//查找最高分 
	int i;
	int max=a[0][j-1];
	for(i=0;i<number;i++)
	{
		if(a[i][j-1]>max)
		  max=a[i][j-1];
	}
	return max; 
}

int output_stu(int a[][5],int i)
{
	int j;
	for(j=0;j<5;j++)
	  printf("%d ",a[i-1][j]);
	return 0;
}

int main()
{
	int number;
	int a[100][5];
	int i,j;
	int n;
	printf("请输入学生的人数：");
	scanf("%d",&number);
	if(number>100)
	  printf("ERROR!!!\n");
	input_stu(number,a);
	printf("输入0，输出学生的平均成绩；输出1，输出课程的平均成绩：");
	scanf("%d",&n);
	calc_data(n,a,number);
	printf("查找第几门课程的最高分：\n");
	scanf("%d",&j);
	printf("第%d门课的最高分为%d分\n",j,highsest(a,number,j));
	printf("要查找哪个学生的成绩：");
	scanf("%d",&i);
    printf("第%d个学生的成绩为：",i);
	output_stu(a,i);
    return 0;
}

