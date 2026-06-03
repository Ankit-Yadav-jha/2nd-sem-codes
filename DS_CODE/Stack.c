// 11. Implementation of stack using a array.

#include<stdio.h>
#include<conio.h>
#define max 10
int stack[max], top = -1;
void Push();
void Pop();
void Display();

void main()
{
    int choice;

    printf("Experiment No. 11\n");

    do{
        printf("\n---------Stack Menue---------");
        printf("\n1.Push\n2.Pop\n3.Display\n4.Exit");
        printf("\n-----------------------------");
        printf("\nEnter your choice: ");
        scanf("%d",&choice);

        switch(choice)
        {
            case 1: Push();break;
            case 2: Pop();break;
            case 3: Display();break;
            case 4: printf("Exiting the program...");break;
            default: printf("\nInvalid Command");
        }

    }while (choice != 4);
    
}

void Push()
{
    if(top==max-1) printf("\nStack is full!");
    else{
        int n;
        printf("Enter your elemant: ");
        scanf("%d",&n);
        top++;
        stack[top]=n;
        printf("Element pushed successfuly!");
    }
}

void Pop()
{
   if(top==-1) printf("\nStack is empty!");
   else{
        int temp;
        temp = stack[top];
        top--;
        printf("\nPoped elemant is %d",temp);
    } 
}

void Display()
{
    if(top==-1) printf("\nStack is empty!");
   else{
        printf("\nElements of Stack");
        for(int i=top;i>=0;i--)
        {
            printf("\nIndex[%d]=%d",i,stack[i]);
        }
    }
}