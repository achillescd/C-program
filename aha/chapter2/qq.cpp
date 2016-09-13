#include <stdio.h>
int main()
{
	int i,a[20];
	int head=0;
	int tail=9;
	printf("please input QQ numbers:\n");
	for(i=0;i<9;i++)
	{
		scanf("%d",&a[i]);	
	}
	while(head<tail)
	{
		printf("%d",a[head]);
		head++;
		a[tail]=a[head];
		tail++;
		head++;
	}
	return 0;
} 
