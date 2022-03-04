#include<stdio.h>
#include<stdlib.h>
 int stack[100],choice,max,top,i,x;
void push(void);
void pop(void);
void peek(void);
void display(void);

void main()
{


    top=-1;
    printf("\n Enter the size of STACK:");
    scanf("%d",&max);
    printf("\n\t STACK OPERATIONS USING ARRAY");
    printf("\n\t--------------------------------");
    printf("\n\t 1.PUSH\n\t 2.POP\n\t 3.DISPLAY\n\t 4.PEEK\n\t 5.EXIT");
    do
    {
        printf("\n Enter the Choice:");
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
                peek();
                break;
            case 5:
            {
                exit(0);

            }
            default:
            {
                printf ("\n\t Please Enter the correct choice)");
            }

        }
    }
    while(choice!=5);

}
void push()
{

    if(top>=max-1)
    {
        printf("\n\tSTACK is full");
}
    else
    {
        printf(" Enter a value to be inserted:");
        scanf("%d",&x);
        top++;
        stack[top]=x;
        display();
    }
}
void pop()
{
    if(top<=-1)
    {
        printf("\n\t Stack is empty");
    }
    else
    {
        printf("\n\t The popped elements is %d",stack[top]);
        top--;
        display();
    }
}


void display()
{
    if(top>=0)
    {
        printf("\n The elements in STACK");
        for(i=top; i>=0; i--)
            printf("\n%d",stack[i]);
        printf("\n Press Next Choice");
    }
    else
    {
        printf("\n The STACK is empty");
    }

}
void peek()
{
  int  item;
    if(top==-1)
    {
        printf("stack is empty");
    }
    else
        {
        item=stack[top];
        printf("Elemnt at the peek is %d",item);
        }

}
