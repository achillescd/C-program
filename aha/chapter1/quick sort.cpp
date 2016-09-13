#include <stdio.h>
int n,a[10];
void quicksort(int left,int right)
{
	int i,j,temp,t;
	if(left>right)
	  return;
	temp=a[left];
	while(i!=j)
	{
	
	 while(a[j]>=temp && i<j)
	 j--;
	 while(a[i]<=temp && i<j)
	 i++;
	 if(i<j)
	 {
	 	t=a[j];
	 	a[j]=a[i];
	 	a[i]=t;
	 }
	}
	a[left]=a[i];
	temp=a[i];
	quicksort(left,i-1);
	quicksort(i+1,right);
	return;
}

int main()
{
	int i,j;
	printf("%s","please input a number:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	quicksort(1,n);
	for(j=0;j<n;j++)
	{
		printf("%d",a[j]);
	}
	return 0;
}                                                                                                                                                                                                                                             6 by6                                    
