#include<stdio.h>
#def MAX 50
void insert();
void delete();
void display();
int queue_array[MAX];
int rear=-1;
int front=-1;
main()
{
int choice;
while(1)
{
printf("1.insert element to queue\n");
printf("2.delete element from queue\n");
printf("3.display all elements of queue\n");
printf("4.quit\n");
printf("enter your choice:");
scanf("%d",&choice);
switch(choice)
{
case 1:
insert();
break;
case 2:
delete();
break;
case 3:
display();
break;
case 4:
exit();
default;
printf("wrong choice\n");
}}}
void insert()
{
int add_item;
if(rear==MAX-1)
printf("queue overflow\n");
else
{
if(front==-1)
front=0;
printf("insert element in queue:");
scanf("%d",&add_item);
rear=rear+1;
queue_array[rear]=add_item;
}}
