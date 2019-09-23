#include<stdio.h>
#include<math.h> 
float fact(int n);
int main()
{
	float x,s=0;
	int n=1;
	printf("ÇëÊäÈëxµÄÖµ:");
	scanf("%f",&x);
    while(pow(x,n)/fact(n)>0.00001)
    {
    	s+=pow(x,n)/fact(n);
    	n++;
	}
	printf("s=%0.2f",s);
	return 0;
}

float fact(int n)
{
	float sum=1;
	int i=1;
	for(i=1;i<=n;i++)
	  sum*=i;
	return sum;
}
