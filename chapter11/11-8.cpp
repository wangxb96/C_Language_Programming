#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct Linklist{
	int num;
	char name[15];
	struct Linklist *next;
};
struct Linklist *copy(struct Linklist *l1,struct Linklist *NEW);
int main()
{
	struct Linklist *p,*q,*l1,*NEW,*l2;
	int i;
	int m;
	printf("l1要输入多少个学生的信息？\n");
	scanf("%d",&m);
	printf("请输入第%d个学生的信息（学号、名字）：\n",i+1);
	l1=(struct Linklist*)malloc(sizeof(struct Linklist));
	scanf("%d %s",&((l1)->num),(l1)->name);
	l1->next=NULL;
	q=l1;
	for(i=1;i<m;i++)
	{
		printf("请输入第%d个学生的信息（学号、名字）：\n",i+1);
		p=(struct Linklist*)malloc(sizeof(struct Linklist));
	    scanf("%d %s",&(p->num),p->name);
	    q->next=p; 
	    p->next=NULL;
		q=q->next;
	}
	l2=copy(l1,NEW);
	i=1;
	while(l2->next!=NULL)
	{
		printf("第%d个学生的信息为:%d %s.\n",i,l2->num,l2->name);
		i++;
		l2=l2->next;
	}
	printf("第%d个学生的信息为:%d %s.\n",i,l2->num,l2->name);
	return 0;
} 

struct Linklist *copy(struct Linklist *l1,struct Linklist *NEW)
{
	int i;
	struct Linklist *p,*q,*l;
	p=l1;
	NEW=(struct Linklist*)malloc(sizeof(struct Linklist));
	l=NEW;
	NEW->num=p->num;
	strcpy(NEW->name,p->name);
	NEW->next=NULL;
	while(p->next!=NULL)
	{
		p=p->next;
		q=(struct Linklist*)malloc(sizeof(struct Linklist));
		q->num=p->num;
		strcpy(q->name,p->name);
		l->next=q;
		q->next=NULL;
		l=l->next;
    }
   return NEW;
}
