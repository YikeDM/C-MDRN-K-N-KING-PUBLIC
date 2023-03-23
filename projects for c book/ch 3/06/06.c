#include <stdio.h>

int main(void)
{
    // variables
    int num1, denom1, num2, denom2, resultnum, resultdenom;

    // ask for fractions and store input (specifically in the format x / x + x / x)
    printf("Enter fractions [x/x+x/x]: ");
    scanf("%d /", &num1);
    scanf(" %d +", &denom1);
    scanf("%d /", &num2);
    scanf(" %d", &denom2);

    resultnum = num1 * denom2 + num2 * denom1;
    resultdenom = denom1 * denom2;
    
    printf("The sum is %d/%d\n", resultnum, resultdenom);

    return 0;
}