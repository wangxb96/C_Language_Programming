#include<stdio.h>
#include<stdlib.h>
long size;
struct LogData{
	long logid;
	char logdate[11];
	char lognote[15];
	double charge;
	double balance;
}; 

int inputchoice()
{
	int mychoice;
	printf("\nEnter your choice:\n");
	printf("1-Add a new cash LOG.\n2-List All Cash LOG.\n");
	printf("3-Query Last Cash LOG.\n0-End program.\n");
	scanf("%d",&mychoice);
}

long getLogcount(FILE* cfptr)
{
	long begin,end,logcount;
	fseek(cfptr,0L,SEEK_SET);
	begin=ftell(cfptr);
	logcount=(end-begin)/size-1;
	return logcount;
 } 
 
void ListAllLog(FILE* cfptr)
{
	struct LogData log;
	fseek(cfptr,0L,SEEK_SET);
	fread(&log,size,1,cfptr);
	printf("logid logdate lognote charge balance\n");
	while(!feof(cfptr)){
		printf("%6ld %-11s %-15s %10.2f %10.2lf\n",log.logid,log.logdate,log.lognote,log.charge,log.balance);
	    fread(&log,size,1,cfptr);
	};
}

void QueryLastLog(FILE *cfptr)
{
	struct LogData log;
	long logcount;
	logcount=getLogcount(cfptr);
	if(logcount>0)
	{
		fseek(cfptr,size*(logcount-1),SEEK_SET);
		fread(&log,size,1,cfptr);
		printf("The last log is:\n");
		printf("logid:%-6ld\nlogdate:%-11s\nlognote:%-15s\n",log.logid,log.logdate,log.lognote);
		printf("charge:%-10.2lf\nbalance:%-10.2lf\n",log.charge,log.balance);
	}
	else
	  printf("no logs in file!\n");
}

void AddNewLog(FILE* cfptr)
{
	struct LogData log,lastlog;
	long logcount;
	printf("Input logdate(format:2006-01-01):");
	scanf("%s",log.logdate);
	printf("Input lognote:");
	scanf("%s",log.lognote);
	printf("Input Charge:Income+ and expend-:");
	scanf("%lf",&log.charge);
	logcount=getLogcount(cfptr);
	if(logcount>0)
	{
		fseek(cfptr,size*(logcount-1),SEEK_SET);
		fread(&lastlog,size,1,cfptr);
		log.logid=lastlog.logid+1;
		log.balance=log.charge+lastlog.balance;
	 } 
	else
	{
		log.logid=1;
		log.balance=log.charge;
	}
	rewind(cfptr);
	printf("logid=%ld\n",log.logid);
	fwrite(&log,sizeof(struct LogData),1,cfptr); 
}

FILE *openfile(char *openmode)
{
	FILE *fp;
	if((fp=fopen("cashbox.dat",openmode))==NULL)
	{
		printf("can not open file cashbox.dat!\n");
		exit(0);
	 } 
	return(fp);
 } 
 
int main()
{
	FILE *fp;
	int choice;
	size=sizeof(struct LogData);
	while((choice=inputchoice())!=0)
	{
		switch(choice)
		{
			case 1:
				fp=openfile("ab+");
				AddNewLog(fp);
				break;
			case 2:
				fp=openfile("rb");
				ListAllLog(fp);
				break;
			case 3:
				fp=openfile("rb");
				QueryLastLog(fp);
				break;
			default:
				printf("Input Error.");
				break;
		}
	}
	if(fclose(fp))
	{
		printf("Can not close the file!\n");
		exit(0);
	}
	return 0;
}
