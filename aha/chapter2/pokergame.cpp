#include <stdio.h>
struct queue
{
	int head;
	int tail;
	int data[100];	
};
struct stack
{
	int top;
	int data[10];
};

int main()
{
	struct queue q1,q2;
	struct stack s;
	int i;
	q1.head=1;
	q1.tail=1;
	q2.head=1;
	q2.tail=1;
	s.top=0;
	for(i=0;i<6;i++)
	{
		scanf("%d",&q1.data[q1.tail]);
		q1.tail++;
	}
	for(i=0;i<6;i++)
	{
		scanf("%d",&q2.data[q2.tail]);
		q2.tail++;
	}
	while(q1.head<q1.tail && q2.head<q2.tail)
	{
		
	}
}
