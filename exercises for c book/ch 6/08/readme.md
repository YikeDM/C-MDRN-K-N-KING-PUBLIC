What output does the following for statement produce?

for (i = 10; i >= 1; i /= 2)
{
    printf("%d ", i++);
}

The output would be: 10 5 3 2 1 1 1 1 ect

as it is a postfix increment operator i will consistently be >= 1, therefore printing
and endless supply of 1s