#include <stdio.h>
#include <ctype.h>
#define N 30

int main(void)
{
    int counter = 0;
    char store_array[N] = {0};

    printf("Enter Message: ");

    // store array loop
    for(int i = 0; i < N; ++i)
    {
        store_array[i] = getchar();
        if(store_array[i] == '\n')
        {
            break;
        }
    }

    // to upper loop
    for(int i = 0; i < N; ++i)
    {
        if(store_array[i] > 0)
        {
            store_array[i] = toupper(store_array[i]);
        }
    }

    // conversion loop
    for(int i = 0; i < N; ++i)
    {
        switch(store_array[i])
        {
            case 'A':
                store_array[i] = '4';
                break;
            
            case 'B':
                store_array[i] = '8';
                break;
            
            case 'E':
                store_array[i] = '3';
                break;
            
            case 'I':
                store_array[i] = '1';
                break;

            case 'O':
                store_array[i] = '0';
                break;
            
            case 'S':
                store_array[i] = 'S';
                break;
            
        }

        // print loop for less than \n due to getchar
        if(store_array[i] > '\n')
        {
            printf("%c", store_array[i]);

        }
    }

    printf("!!!!!!!!!\n");

}