#include <stdio.h>
#include <string.h>
int main()
{
	int m,n,i,j;
	char a[20],b[10];
	printf("please input two strings:\n");
	gets(a);
	gets(b);
	m=strlen(a);
	n=strlen(b);
	for(i=m,j=0;i<m+n,j<n+1;i++,j++)
	{
		a[i]=b[j];
	}
	puts(a);
	return 0;
}
