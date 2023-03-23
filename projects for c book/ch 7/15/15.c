#include <stdio.h>

int main(void)
{
    int input;
    long double factorial = 1.0f;

    printf("Enter a positive integer: ");
    scanf("%d", &input);

    for(int i = 1; i <= input; ++i)
    {
        factorial *= i;
    }

    printf("Factorial of %d: %Lf", input, factorial);


    // the largest value of short n (input) is 7 which correctly prints 5040
    // the largest value of int n (input) is 12 which correctly prints 479001600
    // the largest value of long n (input) is 15 which correctly prints 2004310016
    // the largest value of long long n (input) is 25 which correctly prints 7034535277573963776
    // the largest value of float n (input) is 34 which correctly prints 295232822996533290000000000000000000000.0
    // the largest value of double n (input) is 170 which correctly (i think) prints 7.257415615307994e291
    // whew, not sure as my compiler wouldn't even print anything above 170
}