#include<stdio.h>
int IsLeapYear(int n);
typedef struct Date{
	int year;
	int month;
	int day;
}date;
int main()
{
	date d;
	int leapyear[12]={31,29,31,30,31,30,31,31,30,31,30,31};
	int noleapyear[12]={31,28,31,30,31,30,31,31,30,31,30,31};
	int DayPassed;
	int i,j=0;
	int m;
	printf("输入当前的日期：");
	scanf("%d-%d-%d",&d.year,&d.month,&d.day);
	for(i=1990;i<d.year;i++)
	{
		if(IsLeapYear(i))
		  j++;
	}
	DayPassed=(d.year-1990)*365+j;
	for(i=0;i<d.month;i++)
	{
		if(IsLeapYear(d.year))
		    DayPassed+=leapyear[i];
		else
		    DayPassed+=noleapyear[i];
	}
	DayPassed+=d.day;
	m=DayPassed%5;
	if(m>=1&&m<=3)
	  printf("%d-%d-%d是在打鱼。",d.year,d.month,d.day);
	else
	  printf("%d-%d-%d是在晒网。",d.year,d.month,d.day);
	return 0;
}  

int IsLeapYear(int n)
{
	if((n%4==0&&n%100!=0)||(n%400==0))
	  return 1;
}
