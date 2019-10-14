#include<stdio.h>
#include<stdlib.h>
#include<string.h>
long size;
struct account{
	char no[10];
	char acctname[50];
	double balance;
};
FILE *openfile(char *openmode);
double userbalance(FILE *fp,char *name);
void pay(FILE* fp,char* name,double count);
int main()
{
	FILE *fp;
	int choice;
	char name[50];
	double balance;
	double count;
	printf("请输入选择类型:\n");
	printf("1.查账户余额\n");
	printf("2.账户交易\n");
	printf("退出按exit\n");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:{
			printf("输入名字:\n");
			scanf("%s",name);
			fp=openfile("r+");
			balance=userbalance(fp,name);
			printf("%.2lf",balance);
			break;
		}
		case 2:{
			printf("输入名字：\n");
			scanf("%s",name);
			fp=openfile("r+");
			printf("输入交易金额：\n");
			scanf("%lf",&count);
			pay(fp,name,count); 
			break;
		}
		default:
			exit(0);
			break;
	}

}
FILE *openfile(char *openmode)
{
	FILE *fp;
	if((fp=fopen("acount.dat",openmode))==NULL)
	{
		printf("can not open the file!\n");
		exit(0);
	}
	return fp;
} 	

double userbalance(FILE* fp,char *name)
{
	struct account user;
	double balance;
	fseek(fp,0L,SEEK_SET);
	while(!feof(fp))
	{
		fscanf(fp,"%s %s %lf",user.no,user.acctname,&user.balance);
		if(strcmp(user.acctname,name)==0)
		{
			balance=user.balance;
			break;
		}
	}
	return balance;
}

void pay(FILE *fp,char *name,double count)
{
	FILE *fpout;
	struct account user;
	double balance;
	balance=userbalance(fp,name);
	balance=balance+count;
	fseek(fp,0L,SEEK_SET);
	fpout=fopen("temp.dat","w");
	while(!feof(fp))
	{
		fscanf(fp,"%s%s%lf",user.no,user.acctname,&user.balance);
		if(strcmp(user.acctname,name)==0)
		{
			user.balance=balance;
			fprintf(fpout,"%s %s %lf\n",user.no,user.acctname,user.balance);
		}
		else
		{
			fprintf(fpout,"%s %s %lf\n",user.no,user.acctname,user.balance);
		}
	}
	fclose(fp);
	fclose(fpout);
	unlink("accout.dat");
	rename("temp.dat","accout.dat");
}
