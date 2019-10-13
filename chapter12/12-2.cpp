#include<stdio.h>
#include<stdlib.h> 
int main()
{
	FILE* fp;
	int ch;
	if((fp=fopen("f12-2.txt","w"))==NULL){
		printf("File open error!\n");
		exit(0);
	}
	scanf("%d ",&ch);
	while(ch!=-1)
	{
		//if(ch!='-1')
	    fprintf(fp,"%d ",ch);
	    scanf("%d ",&ch);
	 } 
	if(fclose(fp))
	{
		printf("Can not close the file!\n");
		exit(0);
	}
	if((fp=fopen("f12-2.txt","r"))==NULL){
		printf("File open error!\n");
		exit(0);
	}
	fscanf(fp,"%d",&ch);
	while(!feof(fp))
	{
		printf("%d",ch);
		fscanf(fp,"%d",&ch);
	}
	if(fclose(fp))
	{
		printf("Can not close the file!\n");
		exit(0);
	}
	return 0;
}
