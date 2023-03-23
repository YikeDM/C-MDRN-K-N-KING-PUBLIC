#include <stdio.h>
#define N 40

int main(void)
{

    int x, y, z;

    x = 0;
    y = 1;
    
    int fib_numbers[N];

    for(int i = 0; i < N; ++i)
    {
        z = x + y;
        fib_numbers[i] = z;
        x = y;
        y = z;
    }

    for(int i = 0; i < N; ++i)   // loop to check values are correct
    {
        printf("%d\n", fib_numbers[i]);  
    }

    return 0;

}