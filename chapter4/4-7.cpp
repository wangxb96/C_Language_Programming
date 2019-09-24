#include<stdio.h>
#include<math.h>
int main()
{
	int i,n=0;
	int sum=0,t;
	for(i=1;i<=10000;i++)
	{
		n=i;
		//printf("%d\n",n);
		/*while(n%10!=n)
		{
			t=n%10;
			n=n/10;
			sum=sum+pow(t,3);
		//	printf("%d",pow(t,3));
		}*/
		sum=0;//之前忘了把sum重新置0，一直调不出来 
		while(n%10!=n)
    	{
		    sum+=pow(n%10,3);
		    n=n/10;
    	} 
		//printf("%d\n",sum);
		sum=sum+pow(n,3);
		//printf("%d\n",pow(2,3));
		if(sum==i)
		  printf("%d是各位数字的立方和。\n",sum);
	}
	return 0;
}
