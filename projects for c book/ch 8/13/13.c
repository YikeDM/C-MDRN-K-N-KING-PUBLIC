#include <stdio.h>
#define ARR_LEN 20

int main(void)
{
    int counter = 0;
    char char1, char2;
    char array[ARR_LEN] = {0};

    printf("Enter a first and last name: ");

    while((char1 = getchar()) == ' ');

    while((char2 = getchar()) != ' ');

    while((char2 = getchar()) != '\n')
    {
        if(char2 != ' ')
        {
            array[counter] = char2;
            ++counter;
        }
    }

    printf("You entered the name: ");

    for(int i = 0; i < ARR_LEN; ++i)
    {
        if(array[i] > 0);
            printf("%c", array[i]);
    }

    printf(", %c.\n", char1);

    return 0;
}