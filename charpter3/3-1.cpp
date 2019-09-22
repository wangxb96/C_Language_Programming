#include<stdio.h>
#include<math.h>
int main()
{
	float a,b,c;
	float perimeter,area,half_peri;
	printf("请输入三角形的三条边a,b,c:");
	scanf("%f %f %f",&a,&b,&c);
	if(a+b<c||a+c<b||b+c<a)
	  printf("These sides do not correspond to a valid triangle.\n");
	else
	{
		perimeter=a+b+c;
		half_peri=perimeter/2;
		area=sqrt(half_peri*(half_peri-a)*(half_peri-b)*(half_peri-c));//海伦公式 
		printf("三角形的面积是%0.2f,周长是%0.2f",area,perimeter);//保留两位小数 
	}
	return 0;
}
