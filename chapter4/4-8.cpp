#include<stdio.h>
#include<math.h>
int Is_Prime(int n);
int main()
{
	int i,j;
	int m=0;
	for(i=6;i<=100;i=i+2)
	{
		for(j=1;j<i;j++)
		{
		 if(Is_Prime(j)&&Is_Prime(i-j))
		 {
		 	printf("%d=%d+%d ",i,j,i-j);	
		      m++;
		    if(m%5==0)
              printf("\n");
		 }   	
		}
	}
	return 0;
 } 
 
int Is_Prime(int n)
{
	int i;
	for(i=2;i<=sqrt(n);i++)
	{
		if(n%i==0)
		  return 0; 
	}
	if(i>sqrt(n))//表示每一个数都试过了，其是素数 
	   return 1;
}
