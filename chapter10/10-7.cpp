#include<stdio.h>
#include<math.h>
#define s (a+b+c)/2
#define area sqrt(s*(s-a)*(s-b)*(s-c))
int main()
{
	int a,b,c;
	printf("请输入三角形的三条边a，b，c：\n");
	scanf("%d %d %d",&a,&b,&c);
	printf("%0.2f",area);
	return 0;
}
