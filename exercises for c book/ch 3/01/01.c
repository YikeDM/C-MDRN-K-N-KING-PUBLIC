#include <stdio.h>

int main(void)
{
    printf("%6d %4d\n", 86, 1040);
    // 000086, 1040
    printf("%12.5e\n", 30.253f);
    // 000000000030.25300
    printf("%.4f\n", 83.162f);
    // 83.1620
    printf("%-6.2g\n", .0000009979f);
    // .99

    // completely wrong, i have no idea i'm bad at math.
}