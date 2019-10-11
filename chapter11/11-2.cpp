#include<stdio.h>
#include<string.h>
int main()
{
	char *c[7]={"Sunday","Monday","Tuesday","Wednesday","Thursday","Friday","Saturday"};
    int i,j=0;
    char a[10];
    printf("请输入一个字符串：");
	scanf("%s",a);
	for(i=0;i<7;i++)
	{
		if(strcmp(a,c[i])==0)
		{
			printf("输出数组中对应的序号为：%d\n",i);
			break;
		}
		j++;
	}
	if(j>=7)
	   printf("-1");
	return 0;
}
