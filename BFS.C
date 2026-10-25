#include<stdio.h>
#include<conio.h>

int a[20][20],q[20],visited[20];
int n,i,j,f=0,r=-1;

void bfs(int v)
{
visited[v]=1;
q[++r]=v;
while(f<=r)
{
v=q[f++];
printf("%d\t",v);
for(i=1;i<=n;i++)
{
if(a[v][i]&&!visited[i])
{
visited[i]=1;
q[++r]=i;
}
}
}
}
void main()
{
int v;
clrscr();
printf("enter the no of vertices:");
scanf("%d",&n);
printf("\n enter graph data in matrix form:\n");
for(i=1;i<=n;i++)
{
for(j=1;j<=n;j++)
{
scanf("%d",&a[i][j]);
}
}
printf("\n enter the starting vertex:");
scanf("%d",&v);
printf("\n BFS traversal is :\n");
bfs(v);
getch();
}








