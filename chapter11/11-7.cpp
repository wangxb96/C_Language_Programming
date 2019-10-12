#include<stdio.h>
#include<stdlib.h>
struct Linklist{
	int num;
	char name[15];
	struct Linklist *next;
};
int main()
{
	struct Linklist *p,*q,*list1,*list2;
	int m,n;
	int i;
	//list1=l1;
	//list2=l2;
	printf("list1要输入多少个学生的信息？\n");
	scanf("%d",&m);
	printf("请输入第%d个学生的信息（学号、名字）：\n",i+1);
	list1=(struct Linklist*)malloc(sizeof(struct Linklist));
	scanf("%d %s",&((list1)->num),(list1)->name);
	list1->next=NULL;
	for(i=1;i<m;i++)
	{
		printf("请输入第%d个学生的信息（学号、名字）：\n",i+1);
		p=(struct Linklist*)malloc(sizeof(struct Linklist));
	    scanf("%d %s",&(p->num),p->name);
	    list1->next=p;
	    p->next=NULL;
	}
	printf("list2要输入多少个学生的信息？\n");
	scanf("%d",&n);
	printf("请输入第1个学生的信息（学号、名字）：\n");
	list2=(struct Linklist*)malloc(sizeof(struct Linklist));
	scanf("%d %s",&((list2)->num),(list2)->name);
	list2->next=NULL;
	for(i=1;i<n;i++)
	{	
	    printf("请输入第%d个学生的信息（学号、名字）：\n",i+1);
		q=(struct Linklist*)malloc(sizeof(struct Linklist));
	    scanf("%d %s",&(q->num),q->name);
	    list2->next=q;
	    q->next=NULL;
	}
	printf("把list2链到list1之后：\n");
	p=list1;
	while(p->next!=NULL)
	{
		p=p->next;
	}
	p->next=list2;
	//p=list1;
	for(i=0;i<m+n;i++)
	{
		printf("%d %s\n",list1->num,list1->name);
		list1=list1->next;
	}
	return 0;
} 
