/* 某超市门口的自动寄存柜有n个寄存箱,并且有一个投币控制器,顾客想要寄存小件物品时,只要在投币控制器投入1个1元的硬币,
//如果此时有空闲的箱子,寄存柜就会自动打开一个空的箱子,并且打印输出一张小小的密码纸条；如果没有空闲的箱子,则提示“本柜已满”.
//当顾客离开超市时,用密码纸条上指定的数字密码依次输入到开箱控制器,则顾客所存包的箱子门就自动打开,顾客取走物品后,关上门.
//输入数据时,可先输入寄存箱总数n,再由用户选择是“投硬币”还是“输密码”.
//如果选择“投硬币”,则只有硬币值是1才开箱.如果有空闲的箱子,则输出箱子编号及密码（4位数字）；如果无空闲的箱子,则提示：“本柜已满”.
//如果选择“输密码”,若输入的密码与某一箱子密码相符,则显示打开的箱子编号,否则输出提示：“密码错误”.
//请编写开箱控制程序实现上述过程.
//输入输出示例
//寄存箱总数:10
//1.投硬币 2.输密码 0.退出 请选择:1
//投币值:1
//寄存箱编号:1 密码:9342
//1.投硬币 2.输密码 0.退出 请选择:2
//输入密码:9342
//1号寄存箱已打开
//1.投硬币 2.输密码 0.退出 请选择:0
//结束*/
#include<bits/stdc++.h>
#include<stdio.h>
#include<stdlib.h>
using namespace std;
bool a[1000];
int mp[1000];
int main()
{
	srand(time(NULL));
	printf("共有箱子：\n");
	int n,choice;
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	  mp[i]=rand()%9000+1000;
	do{
		printf("1:投硬币  2：输密码   3：退出\n");
		scanf("%d",&choice);
		if(choice==1)
		{
			printf("请输入硬币数:\n");
			int coin,flag=0;
			scanf("%d",&coin);
			while(coin!=1)
			{
				printf("请投入1个硬币：\n");
				scanf("%d",&coin);
			}
			for(int i=1;i<=n;i++)
			{
				if(a[i]==0)
				{
					printf("箱子编号为：%d  密码是：%d\n",i,mp[i]);
					a[i]=1;
					flag=1;
					break;
				}
			}
			if(flag==0)
			  printf("本柜已满\n");
		}
		else
		{
			printf("请输入箱子编号及密码：\n");
			int num,ans;
			scanf("%d %d",&num,&ans);
			while(mp[num]!=ans)
			{
				printf("密码错误！\n");
				scanf("%d %d",&num,&ans);
			}
			printf("成功！\n");
			a[num]=0;
		}
	}while(choice!=3);
	return 0;
}
