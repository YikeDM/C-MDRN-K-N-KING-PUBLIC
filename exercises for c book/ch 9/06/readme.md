Write a function digit (n, k) that returns the k'th digit (from the right) in n (a posi¬
tive integer). For example, digit (829, 1) returns 9. diqit (829, 2) returns 2. and
digit (829, 3) returns 8. If k is greater than the number of digits in n. have the func¬
tion return 0.

int digit(int n, int k)
{
   for(int i = 1; i < k; ++i)
   {
        n /= 10;
   }

   return n % 10;
}