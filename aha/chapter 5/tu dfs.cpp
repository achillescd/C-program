//ͼ��������ȱ���
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
			book[i]=1;//��Ƕ����Ѿ������ʹ�
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
	//��ʼ����ά����
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=m;j++)
		{
			if(i==j) e[i][j]=0;
			else e[i][j]=99999;
			
		}
	}
	
	//���붥��֮��ı�
	for(i=1;i<=m;i++)
	{
		scanf("%d %d",&a,&b);
		e[a][b]=1;
		e[b][a]=1;	
	} 
	
	//��1�Ŷ������
	book[1]=1;
	dfs(1);
	
	getchar();
	return 0; 
}
