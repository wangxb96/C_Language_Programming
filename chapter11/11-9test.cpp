#include<stdio.h>
#include<math.h>
double calc(double(*funcp)(double),double a,double b);
double f1(double x),f2(double x);
int main()
{
	double result;
	double (*funcp)(double);
	
	result=calc(f1,0.0,1.0);
	printf("1:result=%.4f\n",result);
	funcp=f2;
	result=calc(funcp,1.0,2.0);
	printf("2:result=%.4f\n",result);
	return 0;
 } 
 
double calc(double(*funcp)(double),double a,double b)
{
	double z;
	z=(b-a)/2*((*funcp)(a)+(*funcp)(b));
	return(z);
}

double f1(double x)
{
	return(x*x);
}

double f2(double x)
{
	return(sin(x)/x);
}

