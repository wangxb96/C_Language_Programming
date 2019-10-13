#include <stdio.h>
#include <string.h>
int main()
{
   char str[200],str1[10]="for";
   FILE *fp;
   if((fp=fopen("F:\\CODE4funny\\c_language_programming\\f12-3.txt","rt"))==NULL) //假设在程序目录下，如果在其它位置，加上路径
   {
      printf("cannot open file\n");
      return 0;
   }
   while (fgets(str,200,fp)) //读取一行，并判断文件是否结束
   { 
      if(strstr(str,str1)) //比较str是否包含str1
      printf("%s",str);//因为str已经包括换行符，不需要加\n
   }
     fclose(fp);
   return 0;
}
