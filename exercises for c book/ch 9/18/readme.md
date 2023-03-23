Write a recursive version of the gcd function(see exercise 3).
Here's the strategy to use for computing gcd(m, n) :

if n is 0, return m. otherwise, call gcd recursively. passing n as the first arguement and m % n as the second;

int gcd(int m, int n)
{
    return n == 0 ? m : gcd(n, m % n);
}