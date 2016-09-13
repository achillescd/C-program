#include <stdio.h>

void inputnum(int a[],int n);
void swapnum(int a[],int n);
void outputnum(int a[]);

int main()
{
	int i,j;
	int a[10];
	int n=10;	
	inputnum(a,10);
	swapnum(a,10);
	outputnum(a);
	return 0;
	
}
void inputnum(int a[],int n)
{
	int i;
	printf("please input numbers:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
}
void swapnum(int a[],int n)
{
	int min,max,i,temp,temp1;
	for (i=0;i<n;i++)
	{
		if(a[i]<a[i+1])
		{
			min=i;
			max=i+1;
		}
	}
	temp=a[min];
	a[min]=a[0];
	a[0]=temp;
	temp1=a[max];
	a[max]=a[n-1];
	a[n-1]=temp1;
}
void outputnum(int a[])
{
	int i=0;
	for(i=0;i<10;i++)
	{
		printf("%d",a[i]);
	}
}
