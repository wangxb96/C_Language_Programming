#include<stdio.h>
#include<stdlib.h> 
#define MAXLINE 100
void filecomp(FILE *fp1,FILE *fp2);
int linecomp(char *s,char *t);
int main()
{
	FILE *fp1,*fp2;
	char fname1[20],fname2[20];
	gets(fname1);
	gets(fname2);
	if((fp1=fopen(fname1,"r"))==NULL)
	{
		printf("Can not open file %s\n",fname1);
		exit(0);
	}
	if((fp2=fopen(fname2,"r"))==NULL)
	{
		printf("can not open file %s\n",fname2);
		exit(0);
	}
	filecomp(fp1,fp2);
	fclose(fp1);
	fclose(fp2);
}
void filecomp(FILE *fp1,FILE *fp2)
{
	char line1[MAXLINE],line2[MAXLINE];
	char *lp1,*lp2;
	int pos,pos1;
	pos1=1;
	do{
		lp1=fgets(line1,MAXLINE,fp1);
		lp2=fgets(line2,MAXLINE,fp2);
		if((pos=linecomp(line1,line2))>0)
		{
			printf("第一个不同的位置：行%d位置%d\n",pos1,pos);
			lp1=lp2=NULL;
			break;
		}
		pos1++;
	}while(!feof(fp1)&&!feof(fp2));
}

int linecomp(char *s,char *t)
{
	int pos;
	for(pos=0;*s==*t;s++,t++)
	   if(*s=='\0')
	      return -1;
	return pos;
}
