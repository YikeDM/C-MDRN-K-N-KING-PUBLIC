#include <stdio.h>

int main(void)
{
    int number1, number2;

    printf("Enter a number up to 99: ");
    scanf("%1d%1d", &number1, &number2);

    printf("You entered the number: ");

    switch (number1)
    {
        case 1: if(number2 == 0)
            {
                printf("Ten");
            }
            break;
        case 2: printf("Twenty ");
            break;
        case 3: printf("Thirty");
            break;
        case 4: printf("Forty");
            break;
        case 5: printf("Fifty");
            break;
        case 6: printf("Sixty");
            break; 
        case 7: printf("Seventy");
            break;
        case 8: printf("Eighty");
            break;
        case 9: printf("Ninety");
            break;
    }

    if(number1 == 1)
    {
        switch (number2)
        {
        case 1: printf("Eleven\n");
            break;
        case 2: printf("Twelve\n");
            break;
        case 3: printf("Thirteen\n");
            break;
        case 4: printf("Fourteen\n");
            break;
        case 5: printf("Fifteen\n");
            break;
        case 6: printf("Sixteen\n");
            break;
        case 7: printf("Seventeen\n");
            break;
        case 8: printf("Eighteen\n");
            break; 
        case 9: printf("Nineteen\n");
        }
    }
    else
    {
        switch (number2)
        {
        case 1: printf(" one\n");
            break;
        case 2: printf(" two\n");
            break;
        case 3: printf(" three\n");
            break;
        case 4: printf(" four\n");
            break;
        case 5: printf(" five\n");
            break;
        case 6: printf(" six\n");
            break;
        case 7: printf(" seven\n");
            break;
        case 8: printf(" eight\n");
            break; 
        case 9: printf(" nine\n");
        }
    }
}