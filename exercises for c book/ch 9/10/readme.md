Write functions that return the following values. (Assume that a and n are parameters,
where a is an array of int values and n is the length of the array.)
(a) The largest element in a.
(b) The average of all elements in a.
(c) The number of positive elements in a

(A)
int array_largest(int a[], int n)
{
    int temp = 0;
    for(int i = 0; i <= n - 1; ++i)
    {
        if(a[i] > temp)
        {
            temp = a[i];
        }
    }
    
    return temp;
}

(B)

int array_avg(int a[], int n)
{
    int avg;
    for(int i = 0; i <= n - 1; ++i)
    {
        avg += a[i];
    }

    avg /= (n - 1);

    return avg;
}

(C)
int array_positive(int a[], int n)
{
    int counter;
    for(int i = 0; i <= n - 1; ++i)
    {
        if(a[i] >= 0)
        {
            ++counter;
        }
    }

    return counter;
}