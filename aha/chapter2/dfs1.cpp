#include <stdio.h>
//深度优先搜索 
int a[10],book[10],n;
void dfs(int step)
{
	int i;
	if(step == n+1)//前n个盒子已经放好了扑克牌 
	{
		for(i=1;i<=n;i++)
		{
			printf("%d",a[i]);
		}
		printf("\n");
	}
	for(i=1;i<=n;i++)
	{
		if(book[i]==0)
		{
			a[step]=i;
			book[i]=1;//表示i号扑克牌已经不在手上 
			
			dfs(step+1);
			book[i]=0;
		}
	}
	return; 
}

int main()
{
	scanf("%d",&n);
	dfs(1);
	return 0;
}
