#include <stdio.h>
struct day{
	int year;
	int month;
	int day;
};
int main()
{
	struct day day1;
	int today;
	printf("please input today:\n");
	scanf("%d %d %d",&day1.year,&day1.month,&day1.day);
	switch(day1.month)
	{
		case 1: today=day1.day;break;
		case 2: today=31+day1.day;break;
		case 3: today=59+day1.day;break;
		case 4: today=90+day1.day;break;
		case 5: today=120+day1.day;break;
		case 6: today=151+day1.day;break;
		case 7: today=181+day1.day;break;
		case 8: today=212+day1.day;break;
		case 9: today=243+day1.day;break;
		case 10: today=273+day1.day;break;
		case 11: today=304+day1.day;break;
		case 12: today=334+day1.day;break;
		default : printf("enter data error!\n");
	}
	if((day1.year%4 ==0)||(day1.year%100==0))
	{
		today=today+1;
		printf("%d\n",today);
	}
	else printf("today is %d",today);
}
