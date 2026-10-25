#include<stdio.h>
#include<conio.h>
#define MAX 100
int stack[MAX];
int top=-1;
void push(int value){
	if(top==MAX-1){
	printf("stack overflow\n");
	}
	else{
	top++;
	stack[top]=value;
	printf("%d pushed into stack\n",value);
	}
	}
void pop(){
	if(top==-1){
	printf("stack underflow\n");
	}
	else{
	printf("%d popped from stack\n",stack[top]);
	top--;
	}
	}
void display(){
	int i;
	if(top==-1){
	printf("stack is empty\n");
	}
	else{
	printf("stack element are:\n");
	for(i=top;i>=0;i--){
	printf("%d\n",stack[i]);
	}
	}
}
int main(){
	int choice,value;
	while(1){
	printf("\n--STACK MENU--\n");
	printf("1.push\n");
	printf("2.pop\n");
	printf("3.display\n");
	printf("4.exit\n");
	printf("enter your choice:");
	scanf("%d",&choice);
	switch(choice){
	case 1:
		printf("enter value:");
		scanf("%d",&value);
		push(value);
		break;
	case 2:
		pop();
		break;
	case 3:
		display();
		break;
	case 4:
		return 0;
	default:
		printf("invalid choice\n");
	}
	}
getch();
return 0;
}
