#include<stdio.h>
int sign(int x);
int main()
{
	int x;
	printf("ÇëÊäÈëx:");
	scanf("%d",&x);
	printf("f(%d)=%d",x,sign(x));
	return 0;
 } 

int sign(int x)
{
	if(x>0)
	  return 1;
	else if(x=0)
      return 0;
    else 
      return -1;
} 
