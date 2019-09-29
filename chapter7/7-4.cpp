#include<stdio.h>
int main()
{
	int m,n;
	int i,j;
	int sum=0;
	int a[10][6];
	printf("输入两个正整数m和n(1<=m,n<=6):");
	scanf("%d %d",&m,&n);
	printf("输入该%d行%d列矩阵a中的元素：",m,n);
	for(i=0;i<m;i++)
	  for(j=0;j<n;j++)
	   {
	   	 scanf("%d",&a[i][j]);
	   }
	for(j=0;j<n;j++)
	{
	  for(i=0;i<m;i++)
	    sum+=a[i][j];
	  printf("第%d行的元素之和为%d\n",j+1,sum); 
	}
}
