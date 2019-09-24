#include<stdio.h>
int main()
{
	int i;
	int peach=1;
	for(i=1;i<10;i++)
	{
		peach=(peach+1)*2;
	}
	printf("第一天共摘了%d个桃子。",peach);
	return 0;
}
