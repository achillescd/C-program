//判断三角形状态
#include <stdio.h>

void triangle(int a, int b, int c)
{
	if(a>0 && b>0 && c>0)
	{
		if((a+b)<c && (a-b)>c )
		printf("error");
		if(a==b==c)
		printf("等边三角形");
		else if(a==b || a==c || b==c)
		printf("等腰三角形");
		else
		printf("三角形");
	}
}
int main ()
{
	int a,b,c;
	printf("please input 3 numbers:\n");
	scanf("%d %d %d",&a,&b,&c);
	triangle(a,b,c);
	return 0;
}
