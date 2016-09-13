#include <stdio.h>
int main()
{
	int num;
	printf("please input a num:\n");
	scanf("%d",&num);
	if((num%3==0)&&(num%5==0))
	{
		printf("%d",num);
	}
	return 0;
}
