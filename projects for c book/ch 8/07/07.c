#include <stdio.h>

int main(void)
{

    int input_array[5][5] = {0};
    int sum = 0;

    for(int row = 0; row < 5; ++row)
    {
        printf("\nEnter row %d: ", row + 1);
        for(int col = 0; col < 5; ++col)
        {
            scanf(" %d", &input_array[row][col]);
        }
    }

    printf("Row totals: ");
    for(int row = 0; row < 5; ++row)
    {
        for(int col = 0; col < 5; ++col)
        {
            sum += input_array[row][col];
        }
        printf("%d ", sum);
        sum = 0;
    }

    printf("\nColumn totals: ");
    for(int col = 0; col < 5; ++col)
    {
        for(int row = 0; row < 5; ++row)
        {
            sum += input_array[row][col];
        }
        printf("%d ", sum);
        sum = 0;
    }
    printf("\n\n");
}