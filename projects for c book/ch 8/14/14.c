#include <stdio.h>

int main(void)
{

    char array[200] = {0};
    char input, terminator;
    int counter = 0, array_counter = 0;


    printf("Enter sentence: ");
    while((input = getchar()) != '\n')
    {
        if(input == '!' || input == '.' || input == '?')
        {
            terminator = input;
            ++counter;
            break;
        }
        else if(counter < (200 - 1))
        {
            array[counter] = input;
            ++counter;
        }
        else if(counter > (200 - 1))
        {
            printf("Error, sentence over 200 characters");
            break;
        }
    }


    for(int i = counter - 1; i >= 0; --i)
    {

        if(array[i] == ' ' || i == 0)
        {

            if(i == 0)
            {
                for(int j = i; array[j] != ' '; ++j)
                {
                    printf("%c", array[j]);
                }
                printf("%c", terminator);
            }


            
            if(array[i] == ' ')
            {
                for(int k = i + 1; array[k] > ' '; ++k)
                {
                    printf("%c", array[k]);
                }
                printf(" ");
            }
            
        }

    }

}