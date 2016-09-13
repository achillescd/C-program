#include <stdio.h>
int main()
{
	void sort(int a[],int n);
	int i,a[3];
	int *p;
	p=a;
	printf("please input 3 numbers:\n");
	for(i=0;i<3;i++)
	{
		scanf("%d",&a[i]);
	}
	sort(a,3);
	for(i=0;i<3;i++)
	{
		printf("%d",*p);
		p++;
	}
	
}
void sort(int a[],int n)
{
	int i,j,k,t;
	for(i=0;i<n-1-j;i++)
	{
		for(j=0;j<n-1;j++)
		{
			if(a[j]>a[j+1])
			{
				t=a[j+1];
				a[j+1]=a[j];
				a[j]=t;
			}
		}
	}
	
}
