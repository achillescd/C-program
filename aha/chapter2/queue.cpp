#include <stdio.h>
struct queue
{
	int data[10];
	int head;
	int tail;
};
int main()
{
	struct queue q;
	int i;
	q.head=1;
	q.tail=1;
	for(i=0;i<9;i++)
	{
		scanf("%d",&q.data[q.tail]);
		q.tail++;
	}
	while(q.head<q.tail)
	{
		printf("%d",q.data[q.head]);
		q.head++;
		q.data[tail]=q.data[head];
		q.tail++;
		q.head++;
	}
}

