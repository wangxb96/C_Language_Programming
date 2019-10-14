#include <stdio.h>
int main(void)
{
  FILE *fp=fopen("in.txt","r");
  int i,s=0;
  while (!feof(fp))
  {
    fscanf(fp,"%d",&i);
      s+=i;
  }
   printf("sum=%d\n",s);
   fp=freopen("in.txt","a",fp);
   fprintf(fp," %d",s);
   fclose(fp);
   return 0;
}
