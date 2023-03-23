#include <stdio.h>

int main(void)
{
    int n1, n2;

    printf("Enter a three digit number: ");
    scanf("%d", &n1);

    printf("The reversal is: %d%d%d\n", n1 % 100, n1 % 10, n1 / 100);
}