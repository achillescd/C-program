#include <stdio.h>
#include <math.h>

int main()
{
	int num;
	double i,j,k,sum,temp;
	for(num=100;num<1000;num++)
	{
		i=(num-(num%100))/100;
		j=((num%100)-(num%10))/10;
		k=num%10;
		temp=pow(i,3)+pow(j,3)+pow(k,3);
		if(sum==temp)
		{
			printf("%d",sum);
		}
	}
	return 0;
}
