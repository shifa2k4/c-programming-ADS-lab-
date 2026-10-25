#include<stdio.h>
#include<conio.h>

void main()
{

int a[10],n,i,sum=0;
clrscr();
printf("enter the limit of aray less than 11:");
scanf("%d",&n);
printf("enter %d numbers:\n",n);
for(i=0;i<n;i++){
scanf("%d",&a[i]);
}
for(i=1;i<n;i++){
sum=sum+a[i];

}
printf("the sum of array elements is  %d\n",sum);
getch();
}
