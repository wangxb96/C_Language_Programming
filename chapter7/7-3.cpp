#include<stdio.h>
int main()
{
	int n;
	int i,j;
	int t=0;
	int a[6][6];
	printf("请输入一个正整数n(1<n<=6):\n");
	scanf("%d",&n);
	printf("请输入%d个整数：",n);
	for(i=0;i<n;i++)
	  for(j=0;j<n;j++)
	  {
		scanf("%d",&a[i][j]);
      }
    for(i=1;i<n;i++)
      for(j=0;j<n-1;j++)
       {
       	 if(a[i][j]!=0)
           printf("NO"); 
         else
		   t++; 
		} 
	if(t==n-1)
	  printf("YES");
	return 0;
 } 
