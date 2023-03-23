#include <stdio.h>
#include <stdbool.h>

int main(void)
{

    int n, counter = 1;

    
    printf("This program creates a magic square of a specified size.");
    printf("\nThe size must be an odd number between 1 and 99");
    printf("\nEnter size of magic square: ");
    scanf(" %d", &n);
    int array[n][n];

    for(int i = 0; i < n; ++i)
    {
        for(int j = 0; j < n; ++j)
        {
            array[i][j] = 0;
        }
    }

    int row = 0, col = (n / 2);

    // intialize 1 to the middle of row 0, middle column
    array[row][col] = counter;
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
        if(array[row][col] != 0)
        {
            if((row + 1) >= n)
            {
                row = 0;
                array[row][col] = counter;
            }
            else
            {
                array[row + 1][col] = counter;
            }
        }

        if(array[row][col] == false)
        {
            array[row][col] = counter;
        }

        ++counter;
        

    }

    for(int row = 0; row < n; ++row)
    {
        for(int col = 0; col < n; ++col)
        {
            printf("%4d", array[row][col]);
        }
        printf("\n");
    }

}