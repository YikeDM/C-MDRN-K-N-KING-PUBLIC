Consider the following mystery function:

void pb(int n)
{
    if(n != 0)
    {
        pb(n / 2);
        putchar('0' + n % 2);
    }
}

trace the execution of the function by hand. then write a program that calls the function,
by passing it a number entered by the user, what does the function do?

From tracing by hand, i see that it would:

assume value 5;

5 > 0? 

pb(n / 2)
putchar '0' + n % 2; == 1, thus places a 1


pb(2) > 0?
yes
putchar '0' + n % 2; == 0, thus placing a 0;


pb(1) > 0?
yes
putchar '0' + n % 2; == 1, thus placing a 1 

pb(0) > 0? no.

101,

the function prints the binary translation of number entered by the user.