#include<stdio.h>
int main()
{//一些问题，之前用switch，半天写不出来，应该要在边界值不重合的情况吧？不过对一些情况，好些也可以用的吧？ 
// 后来发生类型问题，把salary定义为int型，检查了好些时间 
	float tax,salary;
	float rate,deduction;
	printf("请输入您的月薪：");
	scanf("%f",&salary);
		if(salary<=3500)
		{
			rate=0;deduction=0;
		}
			
		else if(3500<salary<=5000)
		{
			rate=0.03;deduction=0;
		}	
		else if(5000<salary<=8000)
		{
			rate=0.1;deduction=105;
		}
		else if(8000<salary<=12500)
		{
			rate=0.2;deduction=555;
		}
		else if(12500<salary<=38500)
		{
			rate=0.25;deduction=1005;
		}
		else if(38500<=salary<58500)
		{
			rate=0.3;deduction=2755;	
		}
		else if(58500<salary<=83500)
		{
			rate=0.35;deduction=5505;
		}
		else
		{
			rate=0.45;deduction=13505;
		}
	tax=rate*(salary-3500)-deduction;
	printf("rate:%0.2f deduction:%0.2f\n",rate,deduction);
    printf("应交个人所得税为%0.2f:",tax);
	return 0;
 } 
