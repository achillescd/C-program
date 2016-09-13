#include <stdio.h>
#include <math.h>
int main()
{
	int a[9],b[9],t;
	int i=0;
	printf("please input 10 numbers:\n");
	while(i<10)
	{
		scanf("%d",&a[i]);
		i++;	
	}
	for(i=0;i<9;i++)
	{
		if(a[i]>a[i+1])
		{
			t=a[i+1];
			a[i+1]=a[i];
			a[i]=t;	
		}	
	}	
} 
