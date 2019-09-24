#include<stdio.h>
int main()
{
	float high=100,distance=0;
	int i; 
	for(i=0;i<10;i++)
	{
		distance+=high;
		high=high/2;
	}
	printf("第10次落地时落地时，共经过%0.2f米，第10次反弹%d米高。",distance,high);
	return 0;
}
