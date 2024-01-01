#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define MAX 100
int stack[MAX],choice,n,top=-1,x,i;
void push();
void pop();
void display();
int main()
{
    printf("\n Enter the size of stack :");
    scanf("%d",&n);
    printf("\n stack operations using array");
    printf("\n\t 1.push\n\t 2.pop \n\t 3.display \n\t4.exit" );
    do
    {
        printf("\n Enter the choice :");
        scanf("%d",&choice);
        switch(choice)
        {
        case 1:
            {
                push();
                break;
            }
        case 2:
            {
                pop();
                break;
            }
        case 3:
            {
                display();
                break;
            }
        case 4:
            {
                printf("\n EXIT POINT");
                break;
            }
        default:
            {

                printf("\n please enter a valid choice(1/2/3/4)");
            }
        }
    }
    while (choice!=4);
    return 0;
}
void push()
{

    if (top>=n-1)
    {
        printf("\n stack is overflow");
    }
    else
    {
        printf("\n enter a value to be pushed :");
        scanf("%d",&x);
        top++;
        stack[top]=x;
    }
}
void pop()
{
    if (top<=-1)
    {
        printf("\n stack is under flow");
    }
    else
    {
        printf("\n the popped element is %d",stack[top]);
        top--;
    }
}
void display()
{
    if (top>=0)
    {
        printf("\n the elements in stack\n");
       for(i=top;i>=0;i--)
        printf("\n%d",stack[i]);
       printf("\n press next choice");
    }
    else
    {
        printf("\n The stack is empty");
    }
}

