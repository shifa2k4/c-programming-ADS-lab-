#include<stdio.h>
#include<conio.h>

void main()
{
clrscr();
int a[10],n,i,min;
printf("enter the limit of aray less than 11:");
scanf("%d",&n);
printf("enter %d numbers:\n",n);
for(i=0;i<n;i++){
scanf("%d",&a[i]);
}
min=a[0];
for(i=1;i<n;i++){
if (a[i]<min){
min=a[i];
}}
printf("the smallest number %d\n",min);
getch();
}
