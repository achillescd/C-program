#include <stdio.h>
int main()
{
	int i,j,t;
	int a[10];
	printf("please input 10 nums:\n");
	for(i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
	}
	for(j=0;j<10;j++)
	{
		if(a[j]>a[j+1])
		{
			t=a[j+1];
			a[j+1]=a[j];
			a[j]=t;
		}	
	}
	printf("%d",a[9]);
	return 0;
}
