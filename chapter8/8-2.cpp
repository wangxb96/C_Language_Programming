#include<stdio.h>
int search(int list[],int n,int x);
int main()
{
	int a[10];
	int i,x,m;
	printf("请输入10个整数：");
	for(i=0;i<10;i++)
	  scanf("%d",&a[i]);
	printf("输入一个整数x，看其在数组中是否存在：");
	scanf("%d",&x);
	m=search(a,10,x);
	if(m==-1)
	  printf("Not found.");
	else
	  printf("元素%d在数组中的位置为%d",x,m);
    return 0;
 }

int search(int list[],int n,int x)
{
	int i,j=0;
	for(i=0;i<n;i++)
    {
     j++;
     if(list[i]==x)
	    return i;
	}
	j++;
	if(j>n)
	 return -1;
 } 
