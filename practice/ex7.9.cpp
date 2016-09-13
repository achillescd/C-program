#include <stdio.h>
#include <math.h>

int main()
{
	int max(int x,int y);
	int a[10],i,m,n;
	printf("please input 10 numbers:\n");
	for(i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0,m=a[0],n=0;i<10;i++)
	{
		m=max(a[i],m);
		n=i;
	}
	printf("%d\n%d",m,n);
	
}
int max(int x,int y)
{
	return(x>y? x:y);	
}
