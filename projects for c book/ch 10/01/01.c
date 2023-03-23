#include <stdio.h>
#include <stdbool.h> /* C99 only */
#include <stdlib.h>
#define STACK_SIZE 100


// function declarations
void make_empty(void);
bool is_empty(void);
bool is_full(void);
void push(char i);
int pop(void);
int stack_overflow(void);
int stack_underflow(void);



/* external variables */
char contents[STACK_SIZE];
int top = 0;

int main(void)
{
    char ch;
    printf("Enter parenthesis and/or braces: ");
    while((ch = getchar()) != '\n')
    {
        is_full;

        if(ch == '(' || ch == '{')
        {
            push(ch);
        }
        else if(ch == '}' || ch == ')')
        {
            pop();
            if(ch == '}')
            {
                if(contents[top] != '{')
                {
                    printf("Parenthesis and/or braces aren't nested properly\n");
                    return 0;
                }
            }
            else if(ch == ')')
            {
                if(contents[top] != '(')
                {
                    printf("Parenthesis and/or braces aren't nested properly\n");
                    return 0;
                }
            }
        }
    }

    if(is_empty())
    {
        printf("Parenthesis and/or braces are nested properly.\n");
    }
    else
    {
        printf("Parenthesis and/or braces aren't nested properly.\n");
    }

}



void make_empty(void)
{
    top = 0;
}

bool is_empty(void)
{
    return top == 0;
}

bool is_full(void)
{
    return top == STACK_SIZE;
}

void push(char i)
{
    if (is_full ())
        stack_overflow();
    else
    contents[top++] = i;
}

int pop(void)
{
    if (is_empty())
        stack_underflow();
    else
        return contents[--top];
}

int stack_overflow(void)
{
    printf("Stack overflow\n");
    exit(0);
}

int stack_underflow(void)
{
    printf("Stack underflow\n");
    exit(0);
}