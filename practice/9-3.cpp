#include <stdio.h>
struct Record{
	int num;
	char name;
	float score[3];
};

int main()
{
	struct Record student[5];
	void print(struct Record a[]);
	int i,j;
	printf("please input students information:\n");
	for(i=0,j=0;i<5,j<3;i++,j++)
	{
		scanf("%d %s",student[i].num,student[i].name);
		scanf("%d",student[i].score[j]);
	}
	print(struct Record student);
	return 0;
} 
void print(struct Record a[])
{
	int i,j;
	for(i=0,j=0;i<5,j<3;i++,j++)
	{
		printf("%d %s",a[i].num,a[i].name);
		printf("%d",a[i].score[j]);
	}
}
