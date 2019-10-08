#include<stdio.h>
struct ComplexNumber{
	int a;
	int b;
};
int main()
{
	struct ComplexNumber m,n;
	printf("输入第一个复数：\n");
	scanf("%d+%di",&m.a,&m.b);
	printf("输入第二个复数：\n");
	scanf("%d+%di",&n.a,&n.b);
	printf("这两个复数之积为：%d+%di",m.a*n.a-m.b*n.b,m.a*n.b+m.b*n.a);
	return 0;
}
