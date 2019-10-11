#include<stdio.h>
char *strcat(char *s,char *t);
int main()
{
	int i;
	char s[20],t[10];
	printf("请分别输入字符串s和t：\n");
	scanf("%s %s",s,t);
	strcat(s,t);
	printf("将字符串t复制到字符串s的末端为：%s",s);
	return 0;
}

char *strcat(char *s,char *t)
{
	char *p;
	p=s;
	int i=0,j=0;
	while(s[i]!='\0')
	  i++;
	while(t[j]!='\0')
	{
		s[i]=t[j];
		i++;
		j++;
	}
	return p;
}
