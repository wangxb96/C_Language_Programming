#include<stdio.h>
#include<math.h>
int prime(int m);
int main()
{
	int i,j,m;
	for(i=6;i<=100;i++)
	{
	   for(j=3;j<i;j++)
		{
		 if(prime(j)&&(prime(i-j))&&(i-j>2))
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

int prime(int m)
{
	int i;
	for(i=2;i<=sqrt(m);i++)
	  if(m%i==0)
	    return 0;
	i++;
	if(i>sqrt(m))
	   return 1;
}
