#include<stdio.h>
int main()
{
	int year;
	//int leap_year;
	for(year=2000;year<2100;year++)
	{
		if((year%4==0&&year%100!=0)||year%400==0)
	        //leap_year=year;
	        printf("%dÄêÊÇÈòÄê¡£\n",year);
	}
	return 0;
 } 
