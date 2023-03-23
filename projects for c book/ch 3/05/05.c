#include <stdio.h>

int main(void)
{
    int _1, _2, _3, _4, _5, _6, _7, _8;
    int _9, _10, _11, _12, _13, _14, _15, _16;

    // scans for this unholy spiel
    printf("Enter the numbers from 1 to 16 in any order: ");
    scanf("%d%d%d%d%d%d%d%d", &_1, &_2, &_3, &_4, &_5, &_6, &_7, &_8);
    scanf("%d%d%d%d%d%d%d%d", &_9, &_10, &_11, &_12, &_13, &_14, &_15, &_16);

    //prints 4 by 4
    printf("%3d %3d %3d %3d\n", _1, _2, _3, _4);
    printf("%3d %3d %3d %3d\n", _5, _6, _7, _8);
    printf("%3d %3d %3d %3d\n", _9, _10, _11, _12);
    printf("%3d %3d %3d %3d\n", _13, _14, _15, _16);

    printf("Row sums: %d, %d, ", _1 + _2 + _3 + _4, _5 + _6 + _7 + _8);
    printf("%d, %d\n", _9 + _10 + _11 + _12, _13 + _14 + _15 + _16);
    printf("Column sums: %d, %d, ", _1 + _5 + _9 + _13, _2 + _6 + _10 + _14);
    printf("%d, %d\n", _3 + _7 + _11 + _15, _4 + _8 + _12 + _16);
    printf("Diagonal sums: %d, %d\n", _1 + _6 + _11 + _16, _4 + _7 + _10 + _13);

    return 0;
}