#include <stdio.h>

int main()
{
	int a,b,c,t;
	scanf("%d%d%d",&a,&b,&c);
	if(a<b)
	{
		t=b;
	}
	else t=a;
	if(t>c)
	{
		printf("max=%d\n",t);
	}
	else printf("max=%d\n",c);
	return 0;
}
