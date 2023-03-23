#include <stdio.h>

int main(void)
{

    char checker_board[8][8] = {0};

    for(int row = 0; row < 8; ++row)
    {
        for(int col = 0; col < 8; ++col)
        {
            checker_board[row][col] = (row + col) % 2 == 0 ? 'B' : 'R';
        }
    }

    for(int row = 0; row < 8; ++row)
    {
        for(int col = 0; col < 8; ++col)
        {
            printf("%c", checker_board[row][col]);
        }
        printf("\n");
    }




}

