#include <stdio.h>
#include <stdbool.h>

void create_magic_square(int n, int magic_square[n][n]);

void print_magic_square(int n, int magic_square[n][n]);

//
//  Clarifying that i changed char type in the function to int type, as having an array up to size 99 with only char is not possible
//  as 99^2 is 9,801 and thus char would overflow pretty quickly.
//
int main(void)
{
    int array_size;

    printf("Enter magic square size: ");
    scanf("%d", &array_size);
    int magic_square[array_size][array_size];

    create_magic_square(array_size, magic_square);
   
    print_magic_square(array_size, magic_square);

    return 0;
}


void create_magic_square(int n, int magic_square[n][n])
{
    // intialize array to hold zeroes
    for(int i = 0; i < n; ++i)
    {
        for(int j = 0; j < n; ++j)
        {
            magic_square[i][j] = 0;
        }
    }

    int row = 0, col = (n / 2);

    int counter = 1;
    // intialize 1 to the middle of row 0, middle column
    magic_square[row][col] = counter;
    ++counter;

    
    while(counter <= (n * n))
    {
        // increment array location up and right
        --row;
        ++col;
        

        // check if its out of bounds up or down
        if(row < 0)
        {
            row = (n - 1);
        }
        // else if(row >= n)
        // {
        //     row = 0;
        // }

        //check if its out of bounds left or right
        if(col < 0)
        {
            col = (n - 1);
        }
        else if(col >= n)
        {
            col = 0;
        }


        // if array is occupied, 
        if(magic_square[row][col] != 0)
        {
            if((row + 1) >= n)
            {
                row = 0;
                magic_square[row][col] = counter;
            }
            else
            {
                magic_square[row + 1][col] = counter;
            }
        }

        if(magic_square[row][col] == false)
        {
            magic_square[row][col] = counter;
        }

        ++counter;
        

    }

}



void print_magic_square(int n, int magic_square[n][n])
{
    for(int row = 0; row < n; ++row)
    {
        for(int col = 0; col < n; ++col)
        {
            printf("%7d", magic_square[row][col]);
        }
        printf("\n");
    }
}