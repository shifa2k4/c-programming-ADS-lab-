#include <stdio.h>
#include <conio.h>
int a[20][20], reach[20], n;
int i, j;
void dfs(int v)
{
 int i;
 reach[v] = 1;
 printf("%d\t", v);
 for (i = 1; i <= n; i++)
 {
 if (a[v][i] && !reach[i])
 {
 dfs(i);
 }
 }
}
void main()
{
 int v, count = 0;
 clrscr();
 printf("\nEnter the number of vertices: ");
 scanf("%d", &n);
 printf("\nEnter graph data in matrix form:\n");
 for (i = 1; i <= n; i++)
 {
 for (j = 1; j <= n; j++)
 {
 scanf("%d", &a[i][j]);
 }
 }
 for (i = 1; i <= n; i++)
 {
 reach[i] = 0;
 }
 printf("\nEnter the starting vertex: ");
 scanf("%d", &v);
 printf("\nDFS traversal is:\n");
 dfs(v);
 printf("\n\n");
 // To check connectivity (as in your lab book)
 for (i = 1; i <= n; i++)
 {
 if (reach[i])
 {
 count++;
 }
 }
 if (count == n)
 {
 printf("\nGraph is connected\n");
 }
 else
 {
 printf("\nGraph is not connected\n");
 }
 getch();
}