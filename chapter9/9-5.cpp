#include<stdio.h>
struct AdressBook{
	char name[10];
	long birthday;
	char phonenumber[12];
	char adress[25];
};
int main()
{
	int n;
	long temp;
	int i,j;
	//struct AdressBook max;
	printf("输入n(n<=10)个人的联系信息。\n");
	scanf("%d",&n);
	struct AdressBook book[n];
	for(i=0;i<n;i++)
	{
		printf("请输入第%d个人的基本信息：\n",i+1);
		printf("请输入第%d个人的名字：\n",i+1);
		scanf("%s",&book[i].name);
		printf("请输入第%d个人的生日：\n",i+1);
		scanf("%ld",&book[i].birthday);
		printf("请输入第%d个人的电话号码：\n",i+1);
		scanf("%s",&book[i].phonenumber);
		printf("请输入第%d个人的住址：\n",i+1);
		scanf("%s",&book[i].adress);
	}
	for(i=0;i<n;i++)
	  for(j=0;j<n-i;j++)
	   {
	   	  if(book[j].birthday<book[j+1].birthday)
	   	     temp=book[j].birthday;
			 book[j].birthday=book[j+1].birthday;
	   	     book[j+1].birthday=temp;
	   }
	for(i=0;i<n;i++)
	  printf("%s的基本信息为：生日：%ld,电话号码：%s,地址：%s。\n",book[i].name,book[i].birthday,book[i].phonenumber,book[i].adress);
	return 0;
}
