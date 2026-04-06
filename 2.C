#include <stdio.h>
#include <string.h>
#define max 100
char stack[max];
int top = -1;
void push(char ch)
{
    stack[++top] = ch;
}
void pop()
{
    top--;
}
int main()
{
    char exp[100];
    int i;
    printf("Enter expression: ");
    scanf("%s", exp);
    for(i = 0; i < strlen(exp); i++)
    {
        if(exp[i] == '(')
            push(exp[i]);
        else if(exp[i] == ')')
        {
            if(top == -1)
            {
                printf("Not balanced expression");
                return 0;
            }
            pop();
        }
    }
    if(top == -1)
        printf("Balanced expression");
    else
        printf("Not balanced expression");
    return 0;
}