#include<stdio.h>
#include<malloc.h>
int main()
{
	int *p,*q,*s;
	int i,m,n;
	int j=0;
	printf("要输入多少个数？");
	scanf("%d",&n); 
	p=(int*)malloc(sizeof(int));
	s=(int*)malloc(n*sizeof(int));
	scanf("%d",p);
	for(i=1;i<n;i++)
	{
		p=(int*)realloc(p,sizeof(int));
		scanf("%d",p+i);
	}
	printf("要将数后移几位？");
	scanf("%d",&m);
	q=(int*)malloc(m*sizeof(int));
	for(i=n-m;i<n;i++,j++)
	{
		q[j]=p[i];
		
	}
	for(i=0;i<n;i++)
	{
		s[i]=p[i];
	}
	for(i=0;i<n-m;i++)
    {
        p[i+m]=s[i];
	}
	for(i=0;i<m;i++)
	{
		p[i]=q[i];
	}
	for(i=0;i<n;i++)
	  printf("%d ",p[i]);
	return 0;
}
