#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#define STACK_SIZE 100


// function declarations
void make_empty(void);
bool is_empty(void);
bool is_full(void);
void push(int i);
int pop(void);
int stack_overflow(void);
int stack_underflow(void);

// external variables
int contents[STACK_SIZE];
int top = 0;

int main(void)
{
    char ch;
    int num1, num2;
    while(1)
    {
        printf("Enter an expression: ");
        while((ch = getchar()) != '\n')
        {
            switch(ch)
            {
                case '0':   push(0);
                            break;
                case '1':   push(1);
                            break;
                case '2':   push(2);
                            break;
                case '3':   push(3);
                            break;
                case '4':   push(4);
                            break;
                case '5':   push(5);
                            break;
                case '6':   push(6);
                            break;
                case '7':   push(7);
                            break;
                case '8':   push(8);
                            break;
                case '9':   push(9);
                            break;


                case '+':   push(pop() + pop());
                            break;

                case '*':   push(pop() * pop());
                            break;

                case '/':   num1 = pop();
                            num2 = pop();
                            push(num2 / num1);
                            break;

                case '-':   num1 = pop();
                            num2 = pop();
                            push(num2 - num1);
                            break;
                
                case ' ':   break;

                default:    exit(EXIT_FAILURE);

            }
        }

        printf("Value of epxression: %d\n\n", pop());

        printf("Do you wish to continue? (Y/N): ");
        while((ch = getchar()) != '\n')
        {
            if(ch == 'n' || ch == 'N')
            {
                exit(EXIT_SUCCESS);
            }
        }
        

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

void push(int i)
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
    printf("Operation is too complex\n");
    exit(0);
}

int stack_underflow(void)
{
    printf("Not enough operands in expression\n");
    exit(0);
}