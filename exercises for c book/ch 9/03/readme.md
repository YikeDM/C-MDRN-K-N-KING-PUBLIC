Write a function ged (m, n) that calculates the greatest common divisor of the integers 
m and n

int gcd(int m, int n)
{
    int remainder;
    while(n != 0)
    {
        remainder = m % n;
        m = n;
        n = remainder;
    }
    return m;
}
