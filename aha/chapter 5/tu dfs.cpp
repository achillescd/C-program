//图的深度优先遍历
#include <stdio.h>
int book[101],sum,n,e[101][101];
void dfs(int cur)
{
	int i;
	printf("%d",cur);
	sum++;
	if(sum==n) return;
	for(i=1;i<=n;i++)
	{
		if(e[cur][i] ==1 && book[i]==0)
		{
			book[i]=1;//标记顶点已经被访问过
			dfs(i); 
		}
	}
	return;
}
int main()
{
	int i,j,m,a,b;
	printf("please input a gra \n");
	scanf("%d %d",&n,&m);
	//初始化二维矩阵
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=m;j++)
		{
			if(i==j) e[i][j]=0;
			else e[i][j]=99999;
			
		}
	}
	
	//读入顶点之间的边
	for(i=1;i<=m;i++)
	{
		scanf("%d %d",&a,&b);
		e[a][b]=1;
		e[b][a]=1;	
	} 
	
	//从1号顶点出发
	book[1]=1;
	dfs(1);
	
	getchar();
	return 0; 
}
