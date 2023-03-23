#include <stdio.h>
#include <stdbool.h>
#include <time.h>
#include <stdlib.h>

void generate_random_walk(char walk[10][10]);
void print_array(char walk[10][10]);


int main(void)
{

    char walk_array[10][10];

    generate_random_walk(walk_array);

    print_array(walk_array);

    return 0; 
}


void generate_random_walk(char walk[10][10])
{
    #define UP 0
    #define RIGHT 1
    #define DOWN 2
    #define LEFT 3
    #define EMPTY_CELL '.'

    bool possible_move[4] = {false};

    srand((unsigned) time(NULL));

    for(int row = 0; row < 10; ++row)
    {
        for(int col = 0; col < 10; ++col)
        {
            walk[row][col] = EMPTY_CELL;
        }
    }

    char letter;
    int direction, counter = 0, check_code = 1;

    int row = 0, col = 0;

    
    for(letter = 'A'; letter <= 'Z'; ++letter)
    {

        walk[row][col] = letter;


        // reset possible move array
        for(int i = 0; i < 4; ++i)
        {
            possible_move[i] = false;
        }
        counter = 0;

        if(row - 1 >= 0 && walk[row - 1][col] == EMPTY_CELL)
        {
            possible_move[UP] = true;
            ++counter;
        }
        
        if(col + 1 < 10 && walk[row][col + 1] == EMPTY_CELL)
        {
            possible_move[RIGHT] = true;
            ++counter;
        }

        if(row + 1 < 10 && walk[row + 1][col] == EMPTY_CELL)
        {
            possible_move[DOWN] = true;
            ++counter;
        }

        if(col - 1 >= 0 && walk[row][col - 1] == EMPTY_CELL)
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

}

void print_array(char walk[10][10])
{
    for(int i = 0; i < 10; ++i)
    {
        for(int j = 0; j < 10; ++j)
        {
            printf("%2c", walk[i][j]);
        }
        printf("\n");
    }

    return;
}