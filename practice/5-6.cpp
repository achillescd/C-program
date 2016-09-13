#include <stdio.h>
#include <math.h>

int jiecheng(int n)
{
	int i=1;
	int t=1;
	while(i<=n)
	{
		t=t*i;
		i++;
	}
	return t;
}
int main()
{
	int i=1;
    int sum=0;
    for(i=1;i<=3;i++)
    {
    	sum=sum+jiecheng(i);
	}
	printf("%d",sum);
	return 0;
}
