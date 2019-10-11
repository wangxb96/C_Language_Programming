#include <stdio.h>
//改了一万年的程序 
char c[100];
char*mach (char*s,char ch1,char ch2)
{
    int i=0;
    int j=0;

    while(s[i]!='\0')
    {
        if(s[i]==ch1)
        {
            while(s[i]!=ch2)
            {
                c[j]=s[i];
                j++;
                i++;
            }
            c[j]=s[i];
            break;
        }
        i++;
    }
    return c;
}
int main()
{
    //char s[]="program";
    char s[100];  
	char ss,sss,c;
	int i=0;
    printf("请输入一个字符串：\n");
    //scanf("%s",s);
    while((c=getchar())!='\n')
    {
    	s[i]=c;
    	i++;
	}
	i++;
	s[i]='\0';
    //char ss='r';
    //char sss='g';
    printf("请输入ss和sss：\n");
    scanf("%c %c",&ss,&sss);
    mach(s,ss,sss);
    printf("%s",mach(s,ss,sss));
}

