#include<stdio.h>
#define MaxSize 50
struct  student{
	int num;
	char name[10];
	int computer,english,math;
	double average;
};
int Count=0;
void new_student(struct student students[]);
void search_student(struct student students[],int num);
void output_student(struct student students[]);
void order_by_average_grade(struct student students[]);
int update_score(struct student *p,int n,int num,int course,int score);

int main()
{
	int choice,num,n,course,score,pos;
	struct student students[MaxSize];
	do{
		printf("choice:1 new 2:search 3:output 4:output_by_average 5:update 0:exit\n");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:new_student(students);break;
			case 2:printf("Please input the studnet's number:");
			       scanf("%d",&num);
				   search_student(students,num);
				   break;
			case 3:output_student(students);break;
			case 4:order_by_average_grade(students);break;
			case 5:printf("Input the number of updated student:");
			       scanf("%d",&num);
				   printf("Choice the course:1.math 2.english 3.computer:");
				   scanf("%d",&course);
				   printf("Input the new score：");
				   scanf("%d",&score); 
			       update_score(students,n,num,course,score);
			case 0:break; 
		}
	}while(choice!=0);
	printf("END!\n");
	return 0;
}

//新建学生信息
void new_student(struct student students[])
{
	struct student s;
	if(Count==MaxSize)
	{
		printf("The array is full!\n");
		return;
	}
	printf("Input the student's num:'");
	scanf("%d",s.num);
	printf("Input the student's name:");
	scanf("%s",s.name);
	printf("Input the student's math score:");
	scanf("%d",s.math);
	printf("Input the student's english score:");
	scanf("%d",s.english);
	printf("Input the student's computer score:");
	scanf("%d",&s.computer);
	s.average=(s.math+s.english+s.computer)/3.0;
	students[Count]=s;
	Count++;
 } 
 
//查询学生信息
void search_student(struct student students[],int num)
{
	int i,flag=0;
	if(Count==0)
	{
		printf("Count of student is zero!\n");
		return;
	}
	for(i=0;i<Count;i++)
	  if(students[i].num==num){
	  	flag=1;
	  	break;
	  }
	if(flag)
	{
		printf("num:%d,",students[i].num);
		printf("name:%s,",students[i].name);
		printf("math:%d,",students[i].math);
		printf("english:%d,",students[i].english);
		printf("computer:%d,",students[i].computer);
		printf("average:%2lf\n,",students[i].average);
	}
	else
	   printf("Not Found!");
 } 
 
//输出学生信息
void output_student(struct student students[])
{
	int i;
	if(Count==0)
	{
		printf("Count of students is zero!\n");
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
		printf("%.2lf\n",students[i].average);
	}
 } 

//按平均成绩排序
void order_by_average_grade(struct student students[])
{
	int i,j,index;
	struct student temp;
	if(Count==0)
	{
		printf("Count of students is zero!\n");
		return;
	}
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
	for(i=0;i<Count;i++)
	{
		printf("%d\t",students[i].num);
		printf("%s\t",students[i].name);
		printf("%d\t",students[i].math);
		printf("%d\t",students[i].english);
		printf("%d\t",students[i].computer);
		printf("%.2lf\n",students[i].average);
	}
} 

//修改学生成绩
int update_score(struct student *p,int n,int num,int course,int score)
{
	int i,pos;
	for(i=0;i<n;i++,p++)
	  if(p->num==num)
	   break;
	if(i<n)
	{
		switch(course)
		{
			case 1:p->math=score;break;
			case 2:p->english=score;break;
			case 3:p->computer=score;break;
		}
		pos=i;
	}
	else
	  pos=-1;
    return pos;
 } 
