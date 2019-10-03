#include<stdio.h>
int main()
{
	int i,j;
	char c;
	int a[10],b[10];
	int temp;
	printf("请依次输入10个整数："); 
	for(i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
		b[i]=a[i];
	}
	for(i=0;i<10;i++)
	  for(j=0;j<10-i;j++) 
	   if(b[j]>b[j+1]){
	   	 temp=b[j];
	   	 b[j]=b[j+1];
	   	 b[j+1]=temp;
	   }
	printf("输入'A',将这10个数从小到大顺序输出；输入'D',将这10个数从大到小顺序输出."); 
	c=getchar();//调了八百年才调出来，泪奔啊~~ 
	if(c=='\n') 
      c=getchar();
	if(c=='A')
    {
    	for(i=0;i<10;i++)
    	  printf("%d ",b[i]);
	}
	else if(c=='D')
    {
    	for(i=9;i>=0;i--)
    	  printf("%d ",b[i]);
	}
	else
	  printf("输入错误！！！");
	return 0; 
}
