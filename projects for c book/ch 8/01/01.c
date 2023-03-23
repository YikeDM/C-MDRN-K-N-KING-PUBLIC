#include <stdio.h>
#include <stdbool.h>

int main(void)
{
    int digit_seen[10] = {0};
    int digit, counter;
    long n;

    printf("Enter a number: ");
    scanf("%ld", &n);


    printf("Repeated digit(s): ");
    while(n > 0) 
    {
        digit = n % 10;

        digit_seen[digit]++;

        n /= 10;

    }

    printf("Repeated digit(s): ");
    for( int i = 0; i < 10; ++i)
    {
        if(digit_seen[i] > 1)
        {
            printf("%d ", i);
        }
    }



}