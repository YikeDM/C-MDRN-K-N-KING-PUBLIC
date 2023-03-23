Write the following function, which evaluates a chess position:
int evaluate_position(char board[8][8]);
board represents a configuration of pieces on a chessboard, where the letters K, Q, R, B, N,
P represent White pieces, and the letters k. q. r, b. n. and p represent Black pieces,
evaluate position should sum the values of the White pieces (Q = 9, R = 5, B = 3.
N = 3, P = 1). It should also sum the values of the Black pieces (done in a similar way). The
function will return the difference between the two numbers. This value will be positive if
White has an advantage in material and negative if Black has an advantage.


int evaluate_position(char board[8][8])
{
    int value_white = 0, value_black = 0;

    for(int i = 0; i < 8; ++i)
    {
        for(int j = 0; j < 8; ++j)
        {
            switch(board[i][j])
            {
                case 'Q':
                    value_white += 9;
                    break;
                
                case 'R':
                    value_white += 5;
                    break;

                case 'B': case 'N': 
                    value_white += 3;
                    break;

                case 'P':
                    value_white += 1;
                    break;

                case 'q':
                    value_black += -9;
                    break;
                
                case 'r':
                    value_black += -5;
                    break;

                case 'b': case 'n': 
                    value_black += -3;
                    break;

                case 'p':
                    value_black += -1;
                    break;

            }
        }
    }

    value_white += value_black;

    return value_white;
}