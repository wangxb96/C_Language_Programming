#include<stdio.h>
#include<string.h>
//调了一万年才调出来的程序 
int main()
{
    char a[5][49];
    int i,j;
    char *temp;
    printf("请依次输入5个字符串：\n");
    for(i=0;i<5;i++)
    {
    	printf("请输入第%d个字符串：\n",i+1);
    	scanf("%s",a+i);
	}
	printf("排序前：");
	for(i=0;i<5;i++)
	  printf("第%d个字符串为%s\n",i+1,*(a+i));
	for(j=0;j<5;j++)
	  for(i=0;i<5-j;i++)
	    if(strcmp(*(a+i),*(a+i+1))>0)
	    {
	    	strcpy(temp,*(a+i));
            strcpy(*(a+i),*(a+i+1));
            strcpy(*(a+i+1),temp);
		}
	printf("排序后：");
	for(i=1;i<6;i++)
	  printf("第%d个字符串为%s\n",i,*(a+i));
	return 0;
}
