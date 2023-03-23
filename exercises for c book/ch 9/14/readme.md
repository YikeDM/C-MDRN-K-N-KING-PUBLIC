The following function is supposed to return true if any element of the array a has the value 0 and false if all elements are nonzero, sadly it contains an error. Find the error and show how to fix it:

bool has_zero(int a[], int n)
{
    int i;

    for(i = 0; i < n; i++)
    {
        if(a[i] == 0)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
}

The issue is that it returns false if a[i] has a number, if this happens mid array, it fails to check the full array for zero values.

an easy fix is: 

bool has_zero(int a[], int n)
{
    int i;

    for(i = 0; i < n; i++)
    {
        if(a[i] == 0)
        {
            return true;
        }
    }
    // take the else outside of the for loop, if the for loop completes without
    // returning true, it will return false, thus fixing the issue.
    else
    {
        return false;
    }
}