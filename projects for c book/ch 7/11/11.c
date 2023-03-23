#include <stdio.h>


int main(void)
{
    int dump;
    char char1, char2;

    printf("Enter a first and last name: ");

    while((char1 = getchar()) == ' ');

    while((char2 = getchar()) != ' ');

    while((char2 = getchar()) != '\n')
    {
        if(char2 != ' ')
        {
            putchar(char2);
        }
    }



    printf(", %c.\n", char1);

    return 0;
}