#include <stdio.h>
#include <ctype.h>

#define MAX_DIGITS 10
#define DIGIT_HEIGHT 3
#define DIGIT_WIDTH 3
#define DIGIT_SPACING 1


void clear_digits_array(void);
void process_digit(int digit, int position);
void print_digits_array(void);

/* Contains digit segments for all digits 0 through 9.
 * Segments are 'off' if 0, and 'on' if 1.
 * All digits can be represented using a maximum of 7 segments.
 *
 *     0
 *    ___ 
 * 5 |   | 1
 *   |_6_|
 * 4 |   | 2
 *   |___|
 *     3
 */

const int segements [10][7] = {
                               {1, 1, 1, 1, 1, 1, 0},
                               {0, 1, 1, 0, 0, 0, 0},
                               {1, 1, 0, 1, 1, 0, 1},
                               {1, 1, 1, 1, 0, 0, 1},
                               {0, 1, 1, 0, 0, 1, 1},
                               {1, 0, 1, 1, 0, 1, 1},
                               {1, 0, 1, 1, 1, 1, 1},
                               {1, 1, 1, 0, 0, 0, 0},
                               {1, 1, 1, 1, 1, 1, 1},
                               {1, 1, 1, 1, 0, 1 ,1},
                               };

char digits[4][MAX_DIGITS*4];

int main(void)
{
    clear_digits_array();
    int position = 0;


    printf("Enter a number: ");
    char ch;
    int counter = 0;
    while((ch = getchar()) != '\n')
    {
        if(counter == MAX_DIGITS){
            break;
        }

        if(isdigit(ch))
        {
            process_digit(ch - '0', position);
            position += DIGIT_HEIGHT + DIGIT_SPACING;
        }


        ++counter;
    }

    print_digits_array();
}


void clear_digits_array(void)
{
    for(int i = 0; i < 4; ++i)
    {
        for(int j = 0; j < (MAX_DIGITS*4); ++j)
        {
            digits[i][j] = ' ';
        }
    }
}

void process_digit(int digit, int position)
{
    int i;
    for(i = 0; i < 7; ++i)
    {
        switch(i)
        {
            case 0: digits[0][1+position*4]='_';break;
            case 1: digits[1][2+position*4]='|';break;
            case 2: digits[2][2+position*4]='|';break;
            case 3: digits[2][1+position*4]='_';break;
            case 4: digits[2][0+position*4]='|';break;
            case 5: digits[1][0+position*4]='|';break;
            case 6: digits[1][1+position*4]='_';break;
        }
    }
}

void print_digits_array(void)
{
    for(int i = 0; i < 4; ++i)
    {
        for(int j = 0; j < (MAX_DIGITS*4); ++j)
        {
            printf("%c", digits[i][j]);
        }
    }
}