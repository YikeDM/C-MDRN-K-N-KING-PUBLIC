#include <stdio.h>
#include <ctype.h>

int main(void)
{
    int counter = 0;
    char input;

    printf("Enter a sentence: ");

    while((input = getchar()) != '\n')
    {
        input = toupper(input);
        switch(input)
        {
            case 'A': 
                ++counter;
                break;
            
            case 'E':
                ++counter;
                break;

            case 'I':
                ++counter;
                break;

            case 'O': 
                ++counter;
                break;
            
            case 'U':
                ++counter;
                break;

            default:
                break;
        }


    }

    printf("Your sentence contains %d vowels", counter);

}