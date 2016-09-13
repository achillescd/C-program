#include <stdio.h>
int main()
{
	int i,j,t,temp;
	int a[10];
	printf("please input 4 nums:\n");
	for(i=0;i<4;i++)
	{
		scanf("%d",&a[i]);	
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<3-i;j++)
		{
			if(a[j]>a[j+1])
			{
				temp=a[j+1];
				a[j+1]=a[j];
				a[j]=temp;	
			}	
		}	
	}
	for(t=0;t<4;t++)
	{
		printf("%d",a[t]);	
	}
	return 0;	
}
