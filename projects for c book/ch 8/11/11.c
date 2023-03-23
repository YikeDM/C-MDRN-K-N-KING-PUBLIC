#include <stdio.h>
#define ARR_LEN 15

int main(void)
{
    char array[ARR_LEN] = {0};

    printf("Enter phone number: ");

    for(int i = 0; i < ARR_LEN; ++i)
    {
        array[i] = getchar();
    }

    for(int i = 0; i < ARR_LEN; ++i)
    {
        switch(array[i])
        {
            case 'A': case 'B': case 'C':
                array[i] = '2';
                break;

            case 'D': case 'E': case 'F':
                array[i] = '3';
                break;
            
            case 'G': case 'H': case 'I':
                array[i] = '4';
                break;

            case 'J': case 'K': case 'L':
                array[i] = '5';
                break;
            
            case 'M': case 'N': case 'O':
                array[i] = '6';
                break;
            
            case 'P': case 'Q': case 'R': case 'S':
                array[i] = '7';
                break;

            case 'T': case 'U': case 'V':
                array[i] = '8';
                break;
            
            case 'W': case 'X': case 'Y': case 'Z':
                array[i] = '8';
                break;
            
        }

    }

    for(int i = 0; i < ARR_LEN; ++i)
    {
        printf("%c", array[i]);
    }
}






