//����:1-100�������ж�
#include <stdio.h>
#include <math.h>

int main ()
{
	int i,j,t;
	for(i=2;i<=100;i++)
	{
		t=1;
		for(j=2;j<i;j++)
		{
			if(i%j==0)
			{
				t=0;
				break;//��ֹѭ�� 
			}
			
		}
		if(t==1)
		printf("%d",i);
	}
	return 0; 
	
}
