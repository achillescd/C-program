// ��������㷨 
#include <stdio.h>
int n,m,p,q,min=99999999;
int a[51][51],book[51][51];

void dfs(int x,int y,int step)
{
	int next[4][2] = {{0,1},
						{1,0},
						{0,-1},
						{-1,0}};
	int tx,ty,k;
	//�ж��Ƿ��ҵ�Ŀ��
	if(x==p && y==q)
	{
		//������Сֵ
		if(step < min)
			min=step;
			return;		
	}
	for(k=0;k<=3;k++)
	{
		tx=x+next[k][0];
		tx=y+next[k][1];
		printf("%d %d",tx,ty);
		if(tx<1 || tx>n || ty<1 || ty>m)
			continue;
		//�ж��Ƿ����ϰ�������Ѿ���·��
		 if(a[tx][ty]==0 && book[tx][ty] ==0)
		 {
		 	book[tx][ty]=1;
		 	dfs(tx,ty,step+1);
		 	book[tx][ty]=0;
		 }
	}
	return;
}
int main()
{
		int i,j,startx,starty;
		printf("please input n and m\n");
		scanf("%d %d",&n,&m);
		//�����Թ�
		for(i=1;i<=n;i++)
		{
			for(j=1;j<=m;j++)
				scanf("%d",&a[i][j]);
		}
		scanf("%d %d %d %d",&startx,&starty,&p,&q);
		//����㿪ʼ����
		book[startx][starty]=1;
		dfs(startx,starty,0);
		
		printf("%d",min);
		getchar();
		return 0; 
}
 
