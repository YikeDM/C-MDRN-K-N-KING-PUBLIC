#include <stdio.h>

int main(void)
{
    int n1, n2;

    printf("Enter a two digit number: ");
    scanf("%d", &n1);

    printf("The reversal is: %d%d\n", n1 % 10, n1 / 10);
}