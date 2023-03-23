Write the following function:
double inner_product (double a[], double b[], int n);
The function should return a [0] * b [0] +a[1] * b [1] + ... + a [n-1] *b[n-l].

double inner_product (double a[], double b[], int n)
{
    int counter = 0, temp rtrn = 0;

    for(int i = 0; i < n; ++i)
    {
        rtrn += (a[counter] * b[counter])
        
        if(counter >= (n - 1))
        {
            break;
        }

        ++counter;
    }

    return rtrn;
}

