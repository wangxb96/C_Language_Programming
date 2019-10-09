#include<stdio.h>
//Ackermenn
int ack(int m,int n);
int main()
{
	int m,n;
	printf("请输入数m和n，求Ackerman函数ack(m,n):");
	scanf("%d %d",&m,&n);
	printf("ack(%d,%d)=%d",m,n,ack(m,n));
	return 0; 
}

int ack(int m,int n)
{
	if(m==0)
	  return n+1;
	else if(n==0&&m>0)
	  return ack(m-1,1);
	else if(m>0&&n>0)
	  return ack(m-1,ack(m,n-1));
}
