#include <stdio.h>
#include <math.h>
int main()
{
 int a[5],i,j,temp;
 printf("%s\n","please input 5 numbers");
 for (i=0;i<5;i++){
 	scanf("%d",&a[i]);
 }
 for(j=0;j<4;j++)
 {
 	for(i=0;i<4-j;i++)
 	{
 		if(a[i]>a[i+1])
		 {
 		  temp=a[i];
 		  a[i]=a[i+1];
 		  a[i+1]=temp;
		 }
 	}
 }
 for(i=0;i<5;i++)
 {
	printf("%d",a[i]);
	printf("\n");
 } 
 return 0;
} 
