#include <stdio.h>
int main(void)
{
    long i, n;
    printf("This program prints a table of squares. \n") ;
    printf("Enter number of entries in table: ");
    scanf("%ld", &n);
    for (i = 1; i <= n; i++)
        printf("%10ld%10ld\n", i, i * i) ;
    return 0;

    // smallest int - 46341
    // short int - 182
    // long is most likely 4294967296, it took too long though.
}