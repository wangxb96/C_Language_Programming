#include<stdio.h>
#include<malloc.h>
typedef struct KillCircle{
	int data;
	struct KillCircle *next;
}KCircle;
int main()
{
	int m,n;
	int i,j=0;
	KCircle *p,*q,*L;
	printf("要输入多少个人？");
	scanf("%d",&n);
	p=(KCircle*)malloc(sizeof(KCircle));
	L=p;
	p->data=1;
	p->next=NULL;
	for(i=1;i<n;i++)
	{
		q=(KCircle*)malloc(sizeof(KCircle));
		q->data=i+1;
		p->next=q;
		p=p->next;
		//printf("%d\n",p->data);
		p->next=NULL;
	}
	p->next=L;
	//printf("%d\n%d\n",p->data,L->data);
	printf("报到第几个数退出？");
	scanf("%d",&m);
	if(m>n)
	  printf("输入错误！！！");
	else
	{
	  p=L;
	  printf("依次输出为：\n"); 
	  while(p->next!=p)
	  {
	  	j++;
	  	if((j+1)%m==0)
		{
			q=p->next;
			p->next=q->next;
			printf("%d\n",q->data);
			free(q);
			j++;
		}
		p=p->next;
	  }	
	  printf("剩下的为%d",p->data);
	}  
	return 0;
} 
