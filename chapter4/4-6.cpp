#include<stdio.h>
int main()
{
	int n,one=0,two=0,five=0;
	int i=0;
	for(one=0;one<=100;one++)
	  for(two=0;two<=50;two++)
	     for(five=0;five<=20;five++)
	       {
	       	if((one>0&&two>0&&five>0)&&(one+2*two+5*five==100))
            {
               i++;
	           printf("第%d种方法：1分硬币有%d枚，2分硬币有%d枚，5分硬币有%d枚。\n",i,one,two,five);
			}
		   }
	printf("一共有%d种方法\n",i);
	return 0;
}
