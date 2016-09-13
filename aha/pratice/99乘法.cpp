#include <math.h>
#include <stdio.h>

int main()
{
	int i,j,result;
	for(i=1;i<=9;i++)
	{
		for(j=1;j<=9;j++)
		{
			result=i*j;
			printf("%d",result);
			printf("\n");
		}
	}
	return 0;
}
