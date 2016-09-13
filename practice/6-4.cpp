#include <stdio.h>
#include <math.h>

int main()
{
	int a[10]={2,4,6,8,10};
	int i,num,j,k;
	printf("please input a numbers:\n");
	scanf("%d",&num);
	for(i=0;i<9;i++)
	{
		printf("%d",a[i]);
	}
	for(i=0;i<6;i++)
	{
		if((num>a[i])&&(a[i+1]>num))
		{
			j=i;
			printf("%d\n",j);
		}
	}
	for(k=5;k>j;k--)
	{
		a[k]=a[k-1];
		printf("%d",a[k]);
	}
	a[j]=num;
	for(i=0;i<6;i++)
	{
		printf("%d",a[i]);
	}
	return 0;
} 
