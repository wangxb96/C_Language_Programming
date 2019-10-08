#include<stdio.h>
void set_grade(struct Student *s,int n);
struct Student{
	int id;
	char name[12];
	int grade;
	char Class;
};
int main()
{
	struct Student s[10];
	int i,j=0;
	printf("请依次输入10个学生的基本信息：\n");
	for(i=0;i<10;i++)
	{
		printf("请输入第%d个学生的基本信息（学号、姓名、成绩）：\n",i+1);
		scanf("%d %s %d",&s[i].id,&s[i].name,&s[i].grade);
	}
	set_grade(s,10);
	for(i=0;i<10;i++)
	{
		if(s[i].Class=='D')
		  j++;
	}
	printf("不及格人数为：%d",j);
	return 0;
}

void set_grade(struct Student *s,int n)
{
	int i,m;
	for(i=0;i<n;i++)
	{
		m=s[i].grade;
		if(m>=85&&m<=100)
		  s[i].Class='A';
		else if(m>=70&&m<=84)
		  s[i].Class='B';
		else if(m>=60&&m<=69)
		  s[i].Class='C';
		else if(m>=0&&m<=59)
		  s[i].Class='D';
		else
		  printf("成绩有误！！！"); 
	}
}
