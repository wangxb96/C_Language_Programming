#include <stdio.h>
#include <string.h>
int main()
{
   char str[200],str1[10]="for";
   FILE *fp;
   if((fp=fopen("F:\\CODE4funny\\c_language_programming\\f12-3.txt","r"))==NULL) 
   {
      printf("cannot open file\n");
      return 0;
   }
   while (fgets(str,200,fp)) 
   { 
      if(strstr(str,str1)) 
      printf("%s",str);
   }
     fclose(fp);
   return 0;
}
