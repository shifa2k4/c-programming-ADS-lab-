#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

struct node
{
    int info;
    struct node *ptr;
};

struct node *top, *temp;

int count = 0;

void create();
void push(int data);
void pop();
void display();
void empty();
void stackcount();
void destroy();
int topelement();

void main()
{
    int choice, value;

    clrscr();

    create();

    while (1)
    {
        printf("\n\n--- STACK OPERATIONS ---\n");
        printf("\n1. Push");
        printf("\n2. Pop");
        printf("\n3. Top");
        printf("\n4. Empty");
        printf("\n5. Display");
        printf("\n6. Stack Count");
        printf("\n7. Destroy");
        printf("\n8. Exit");

        printf("\n\nEnter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1:
                printf("Enter the value: ");
                scanf("%d", &value);
                push(value);
                break;

            case 2:
                pop();
                break;

            case 3:
                if (top == NULL)
                    printf("Stack is empty");
                else
                    printf("Top element = %d", topelement());
                break;

            case 4:
                empty();
                break;

            case 5:
                display();
                break;

            case 6:
                stackcount();
                break;

            case 7:
                destroy();
                break;

            case 8:

                printf("\nExiting...");
                getch();
                exit(0);

            default:
                printf("\nInvalid choice");
        }

        getch();
        clrscr();
    }
}

void create()
{
    top = NULL;
    count = 0;
}

void push(int data)
{
    temp = (struct node *)malloc(sizeof(struct node));

    if (temp == NULL)
    {
        printf("\nMemory allocation failed");
        return;
    }

    temp->info = data;
    temp->ptr = top;
    top = temp;

    count++;

    printf("\nElement pushed successfully");
}

void pop()
{
    if (top == NULL)
    {
        printf("\nStack is empty");
        return;
    }

    temp = top;

    printf("\nPopped value = %d", top->info);

    top = top->ptr;

    free(temp);

    count--;
}

int topelement()
{
    return top->info;
}

void display()
{
    if (top == NULL)
    {
        printf("\nStack is empty");
        return;
    }

    temp = top;

    printf("\nStack elements are:\n");

    while (temp != NULL)
    {
        printf("%d\n", temp->info);
        temp = temp->ptr;
    }
}

void empty()
{
    if (top == NULL)
    {
        printf("\nStack is empty");
    }
    else
    {
        printf("\nStack is not empty");
    }
}

void stackcount()
{
    printf("\nNumber of elements = %d", count);
}

void destroy()
{
    while (top != NULL)
    {
        temp = top;
        top = top->ptr;
        free(temp);
    }

    count = 0;

    printf("\nAll stack elements destroyed");
}
