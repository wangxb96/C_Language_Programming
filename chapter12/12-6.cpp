#include<stdio.h>
int main()
{
	FILE* fp;
	int n,sum=0;
	if((fp=fopen("F:\\CODE4funny\\c_language_programming\\in.txt","rb"))==NULL)
	{
		printf("Can not open the file!\n");
		return 0;
	}
	while(!feof(fp))
	{
		fscanf(fp,"%d",&n);
		   sum+=n;
	}
	printf("%d",sum);
	fp=freopen("F:\\CODE4funny\\c_language_programming\\in.txt","ab",fp);
	fprintf(fp,"%d",sum);
	if(fclose(fp))
	{
		printf("can not close the file!\n");
		return 0;
	}
}
