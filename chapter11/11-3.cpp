#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
	int i=0,j=0;
	int max=0,temp;
	char *c[5],str[15];
	printf("请输入第%d个字符串：\n",i+1);
	scanf("%s",str);
	while(str[0]!='#')
	{
		c[i]=(char*)malloc(sizeof(char)*(strlen(str)+1));
		strcpy(c[i],str);
		i++;
		printf("请输入第%d个字符串：\n",i+1);
		scanf("%s",str);
	}
	for(i=0;i<5;i++)
	 {
	 	while(*(c[i]+j)!='\0')
	 	  j++;
	 	if(j>max)
	 	{
	 		max=j;
	 		//printf("%d \n",j);
	 		temp=i;
		 }	  
	 }
	 printf("最长的字符串为%s,长度为%d",c[temp],max);
	 return 0;
}
