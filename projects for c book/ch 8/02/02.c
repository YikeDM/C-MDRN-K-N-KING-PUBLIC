#include <stdio.h>
#include <stdbool.h>

int main(void)
{
    int digit_seen[10] = {0};
    long digit;
    long long n;

    const int digits[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

    printf("Enter a number: ");
    scanf("%lld", &n);


    while(n > 0) 
    {
        digit = n % 10;

        digit_seen[digit]++;

        n /= 10;

    }

    printf("Digit:       ");

    for(int i = 0; i <= 9; ++i)
    {
        printf("%d ", digits[i]);
    }



    printf("\nOccurrences: ");

    for(int i = 0; i <= 9; ++i)
    {
        printf("%d ", digit_seen[i]);
    }

    printf("\n");

}