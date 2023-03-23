#include <stdbool.h>
#include <stdio.h>


int main(void)
{

    bool digit_seen[10] = {false};
    int digit, num = 1;
    long n;


    while(num)
    {
        printf("\n0 to end\n");
        printf("Enter a number for repeated digits: ");
        scanf("%ld", &n);

        if(n <= 0)
        {
            break;
        }
        

        while(n > 0)
        {
            digit = n % 10;
            if(digit_seen[digit])
            {
                break;
            }
            digit_seen[digit] = true;
            n /= 10;
        }

        if (n > 0)
        {
            printf("Repeated digit\n");
        }
        else
        {
            printf("No repeated digit\n");
        }

        for(int i = 0; i <= 9; ++i)
        {
            digit_seen[i] = 0;
        }
    }

    return 0;

}