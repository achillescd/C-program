#include <stdio.h>
#include <string.h>

int main()
{
	char a[4]={'c','d','a','b'};
	char b[5]={'q','w','a','e','r'};
	int m=4;
	int n=5;
	int l=9;
	char *p,*q,*r;
	p=&a[0];
	q=&b[0];
	r=&a[0];
	while(*p!='\0')
	{
		p++;
	}
	q=p+1;
    while(*r!='\0')
    {
    	printf("%c",*r);
    	r++;
	}
	return 0;
}
