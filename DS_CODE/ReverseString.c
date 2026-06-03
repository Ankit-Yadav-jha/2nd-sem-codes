// 14. Implement Reverse a string using a stack.

#include <stdio.h>
#include <string.h>

#define MAX 100

char stack[MAX];
int top = -1;

// Push operation
void push(char c)
{
    stack[++top] = c;
}

// Pop operation
char pop()
{
    if(top == -1)
        return -1;
    else
        return stack[top--];
}

int main()
{
    char str[100];
    int i;

    printf("Experiment No. 14\n");

    printf("Enter a string: ");
    gets(str);

    // Push all characters of string into stack
    for(i = 0; i < strlen(str); i++)
    {
        push(str[i]);
    }

    // Pop characters from stack to reverse string
    for(i = 0; i < strlen(str); i++)
    {
        str[i] = pop();
    }

    printf("Reversed string: %s", str);

    return 0;
}