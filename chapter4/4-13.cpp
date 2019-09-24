#include<stdio.h>
int main()
{
	int i,j;
    for(i=1;i<5;i++)//ÉÏ°ë²ã 
    {
       for(j=4;j>i;j--)
       {
       	  printf("  ");
	   }
	   for(j=2;j<(2*i+1);j=j+1)
	   {
	      printf("* ");
	   }
	   printf("\n");
	}
	for(i=1;i<4;i++)//ÏÂ°ë²ã 
	{
		for(j=0;j<i;j++)
		  printf("  ");
        for(j=0;j<7-2*i;j++)
		  printf("* "); 
		printf("\n");
	}
	return 0;
}
