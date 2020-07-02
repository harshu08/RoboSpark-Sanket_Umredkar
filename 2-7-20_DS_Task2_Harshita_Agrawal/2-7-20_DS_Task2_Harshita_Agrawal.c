#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<string.h>

typedef struct stack
{
    int top;
    char data[1000];
}stack;

void push(stack *s,char x)
{
    s->top = s->top + 1 ;
    s->data[s->top] = x;
}

char pop(stack *s)
{
    char x = s->data[s->top];
    s->top -= 1;
    return x;
}

bool isMatching(char char1, char char2)
{
    if(char1 == '(' && char2 == ')')
        return 1;
    else if(char1 == '{' && char2 == '}')
        return 1;
    else if(char1 == '[' && char2 == ']')
        return 1;
    else 
        return 0;
}

int main()
{
    int i;
    char str[2000];
    scanf("%s", str);
    printf("%s\n", str);

    stack *s;
    s = (stack *)malloc(sizeof(stack));
    s->top = -1;
            
    for(i=0; i<strlen(str); i++)
    {
        if (str[i] == '(' || str[i] == '{' || str[i] == '[')
            push(s, str[i]);
        
        if (str[i] == ')' || str[i] == '}' || str[i] == ']')
        {
            if(s->top == -1)
            {
                printf("Not balanced\n");
                break;
            }
            else if (!isMatching(pop(s), str[i]))
            {
                printf("Not balanced\n");
                break;
            }
        }
    }

    if(s->top == -1)
        printf("Balanced\n");

    return 0;
}