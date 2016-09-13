#include <stdio.h>
int main()
{
	int n,i,j,t,a[10]={0};
	printf("%s","please input numbers:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&t);
		a[t]++;
	}
	for(i=0;i<=9;i++)                                                                                                                                                                                                                                                             ;i++)
	{
		for(j=1;j<=a[i];j++)
			printf("%d",i);
	}
	return 0;
}
