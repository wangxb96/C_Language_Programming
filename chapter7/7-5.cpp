#include<stdio.h>
int main()
{
	int i,j,k,l;
	int n,t,max,min;
	int m=0;
	int a[6][6]; 
	printf("请输入一个正整数n(1<=n<=6):");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	  for(j=0;j<n;j++)
	   {
	   	 scanf("%d",&a[i][j]);
	   }
	for(i=0;i<n;i++)
	  {
	  	max=0;
	  	for(j=0;j<n;j++)//找到对应行的最大值 
	    {
	  	 if(a[i][j]>max)
	  	 {
	  	 	max=a[i][j];
	  	    k=j;
	  	    t=i;
		 } 
	    }
	    min=a[0][k];
        for(j=0;j<n;j++)//从最大值对应行找最小值 
        {
          if(a[j][k]<min)
          {
          	min=a[j][k];
          	l=j;
		  }
		}
	  if(t==l)//看行的最大值和列的最小值是否是同一个 
      {
      	m++;
      	printf("a[%d][%d]是鞍点,其值为%d。",i,k,a[i][k]);
	  }
     } 
	if(m!=1)
	  printf("NO!");
    return 0;
}
