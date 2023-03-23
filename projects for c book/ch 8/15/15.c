#include <stdio.h>
#include <stdbool.h>

#define ARRAY_LENGTH 80

int main(void)
{

    char array[ARRAY_LENGTH] = {0};
    int shift_amount, counter = 0;


    printf("Enter message to be encrypted: ");
    while((array[counter] = getchar()) != '\n')
    {
        if(counter >= ARRAY_LENGTH)
        {
            break;
        }

        ++counter;

    }

    printf("Enter shift amount (1-25): ");
    scanf(" %d", &shift_amount);

    printf("Encrypted message: ");

    for(int i = 0; i < ARRAY_LENGTH; ++i)
    {
        if(array[i] >= 'A' && array[i] <= 'Z')
        {
            printf("%c", ((array[i] - 'A') + shift_amount) % 26 + 'A');
        }
        else if(array[i] >= 'a' && array[i] <= 'z')
        {
            printf("%c", ((array[i] - 'a') + shift_amount) % 26 + 'a');
        }
        else if(array[i] < 'A')
        {
            printf("%c", array[i]);
        }
    }




}