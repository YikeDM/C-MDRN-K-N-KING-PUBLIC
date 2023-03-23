#include <stdio.h>

int main(void)
{
    int input, counter = 1; 

    printf("Enter number: ");
    scanf("%d", &input);

    while(counter * counter <= input)
    {
        if((counter * counter) % 2 == 0)
        {
            printf("%d\n", counter * counter);
        }
        ++counter;
    }
    
}