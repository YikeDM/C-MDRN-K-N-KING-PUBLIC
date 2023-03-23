#include <stdio.h>

int main(void)
{
    double num1, num2, result;
    char operator;

    printf("Enter an expression: ");
    scanf("%lf", &num1);
        
    while((operator = getchar()) != '\n')
    {
        // while((operator = getchar()) == ' ');

        scanf("%lf", &num2);
        switch(operator)
        {
            case '+':
                num1 += num2;
                break;

            case '*':
                num1 *= num2;
                break;

            case '/':
                num1 /= num2;
                break;

            case '-':
                num1 -= num2;
        }

        if(operator == '\n')
        {
            break;
        }
    }
    
    printf("Value of expression : %.2f", num1);

}