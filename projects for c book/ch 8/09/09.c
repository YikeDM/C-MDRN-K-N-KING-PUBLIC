#include <stdio.h>
#include <stdbool.h>
#include <time.h>
#include <stdlib.h>

#define UP 0
#define RIGHT 1
#define DOWN 2
#define LEFT 3
#define EMPTY_CELL '.'

int main(void)
{

    bool possible_move[4] = {false};

    srand((unsigned) time(NULL));

    char walk_array[10][10];

    for(int row = 0; row < 10; ++row)
    {
        for(int col = 0; col < 10; ++col)
        {
            walk_array[row][col] = EMPTY_CELL;
        }
    }

    char letter;
    int direction, counter = 0, check_code = 1;

    int row = 0, col = 0;

    
    for(letter = 'A'; letter <= 'Z'; ++letter)
    {

        walk_array[row][col] = letter;


        // reset possible move array
        for(int i = 0; i < 4; ++i)
        {
            possible_move[i] = false;
        }
        counter = 0;

        if(row - 1 >= 0 && walk_array[row - 1][col] == EMPTY_CELL)
        {
            possible_move[UP] = true;
            ++counter;
        }
        
        if(col + 1 < 10 && walk_array[row][col + 1] == EMPTY_CELL)
        {
            possible_move[RIGHT] = true;
            ++counter;
        }

        if(row + 1 < 10 && walk_array[row + 1][col] == EMPTY_CELL)
        {
            possible_move[DOWN] = true;
            ++counter;
        }

        if(col - 1 >= 0 && walk_array[row][col - 1] == EMPTY_CELL)
        {
            possible_move[LEFT] = true;
            ++counter;
        }

        if(counter == 0)
        {
            break;
        }

        while(1)
        {
            direction = rand() % 4;

            if(possible_move[direction] == true)
            {
                switch(direction)
                {
                    case UP:
                       row--;
                       break;

                    case RIGHT:
                        col++;
                        break;

                    case DOWN:
                        row++;
                        break;
            
                    case LEFT:
                        col--;
                        break;

                }
                break;
            }
            else
            {
                continue;
            }
        }

    }




    for(int row = 0; row < 10; ++row)
    {
        for(int col = 0; col < 10; ++col)
        {
            printf("%2c", walk_array[row][col]);
        }
        printf("\n");
    }


   return 0;

}