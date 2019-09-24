#include<stdio.h>
#include<malloc.h>
int main()
{
	int n;
	int *a=(int*)malloc(sizeof(int));
	int i=0,j;
	printf("请输入一个长整数:");
	scanf("%d",&n);
	a[i]=n%10;
	//printf("a[i]=%d",a[i]);
	n=n/10;
	while(n%10!=n)
	{	
	    i++;
		a=(int*)realloc(a,sizeof(int));
		a[i]=n%10;
		n=n/10;
	}
	i++;
	a[i]=n;
	printf("从高位开始逐位分割输出:");
	for(j=i;j>=0;j--)
	{
		printf("%d ",a[j]);
	 } 
	return 0;
}
