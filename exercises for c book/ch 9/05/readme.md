Write a function num_digits (n) that returns the number of digits in n (a positive inte¬
ger). Hint: To determine the number of digits in a number n. divide it by 10 repeatedly.
When n reaches 0. the number of divisions indicates how many digits n originally had.

int num_digits(int n)
{
    int counter = 0;
    while(n > 0)
    {
        n /= 10;
        ++counter;
    }

    return counter;
}