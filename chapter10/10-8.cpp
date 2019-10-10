#include<stdio.h>
#include<string.h>
#define MaxSize 50
struct student{
	int num;
	char name[10];
	int computer,english,math;
	float average;
};

extern int Count=0;
void new_student(struct student students[])
{
	if(Count==MaxSize)
	{
		printf("The array is full!\n");
		return;
	}
	printf("Input the student's num:");
	scanf("%d",&students[Count].num);
	printf("Input the studnet's name:");
	scanf("%s",&students[Count].name);
	printf("Input the students's math score:");
	scanf("%d",&students[Count].math);
	printf("Input the students's english score:");
	scanf("%d",&students[Count].english);
	printf("Input the students's computer score:");
	scanf("%d",&students[Count].computer);
	//students[Count].average=(students[Count].math+students[Count].english+students[Count].computer)/3.0;
	Count++;
} 
 
void output_student(struct student students[])
{
	int i;
	if(Count==0)
	{
		printf("Count of student is zero!\n");
		return;
	}
	printf("num\t name\t math\t english\t computer\t average\n");
	for(i=0;i<Count;i++)
	{
		printf("%d\t",students[i].num);
		printf("%s\t",students[i].name);
		printf("%d\t",students[i].math);
		printf("%d\t",students[i].english);
		printf("%d\t",students[i].computer);
		printf("%.2lf\t",students[i].average);
	}
}

void average(struct student students[])
{
	int i;
	for(i=0;i<Count;i++)
	{
		students[i].average=(students[i].math+students[i].english+students[i].computer)/3.0;
		printf("学号为%d姓名为%s的同学的平均分为%d\n",students[i].num,students[i].name,students[i].average);
	}
	  
}

void sort(struct student students[])
{
	int i,j,index;
	struct student temp;
	for(i=0;i<Count-1;i++)
	{
		index=i;
		for(j=i+1;j<Count;j++)
		  if(students[j].average>students[index].average)
		    index=j;
		temp=students[index];
		students[index]=students[i];
		students[i]=temp;
	 } 
}

int modify(struct student *students)
{
	int i,pos,num,course,score;
	printf("请输入要修改信息的学生的学号：\n");
	scanf("%d",&num);
	for(i=0;i<Count;i++)
	   if(students[i].num==num)
	     break;
	printf("请输入要修改信息的学生对应的课程(1:math 2:english 3:computer)：\n");
	scanf("%d",&course); 
	if(i<Count)
	{
		switch(course){
			case 1:	printf("请输入要修改信息的学生的成绩：\n");
			        scanf("%d",&score); 
                    students[i].math=score;break;
            case 2:printf("请输入要修改信息的学生的成绩：\n");
			        scanf("%d",&score); 
                    students[i].english=score;break;
            case 3:printf("请输入要修改信息的学生的成绩：\n");
			        scanf("%d",&score); 
                    students[i].computer=score;break;
		}
		pos=i;
	}
	else
	  pos=-1;
	return pos;  
}

int search_student(struct student students[],int num)
{
	int i;
	for(i=0;i<Count;i++)
	  if(students[i].num==num)
	     return i;
	if(i<0||i>=Count)
	  return -1;
}

int main()
{
	struct student students[MaxSize];
	new_student(students);
	output_student(students);
	average(students);
	sort(students);
	output_student(students);
	modify(students);
	output_student(students);
	return 0;
}
