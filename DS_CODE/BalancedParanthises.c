// 13. Construct a code for Balanced parentheses checker using a stack.

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

// Function to check matching pair
int match(char a, char b)
{
    if(a=='(' && b==')')
        return 1;
    if(a=='{' && b=='}')
        return 1;
    if(a=='[' && b==']')
        return 1;

    return 0;
}

int main()
{
    char exp[100];
    int i;
    char temp;

    printf("Experiment No. 13\n");

    printf("Enter expression: ");
    scanf("%s", exp);

    for(i = 0; i < strlen(exp); i++)
    {
        if(exp[i]=='(' || exp[i]=='{' || exp[i]=='[')
        {
            push(exp[i]);
        }
        else if(exp[i]==')' || exp[i]=='}' || exp[i]==']')
        {
            temp = pop();

            if(!match(temp, exp[i]))
            {
                printf("Not Balanced\n");
                return 0;
            }
        }
    }

    if(top == -1)
        printf("Expression is Balanced\n");
    else
        printf("Expression is Not Balanced\n");

    return 0;
}