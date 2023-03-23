The following (rather confusing) function finds the median of three numbers. 
Rewrite the function so that it has just one return statement

double median(double x, double y, double z)
{
    if (x <= y)
    {
        if (y <= z) return y;
        else if(x <= z) return z;
        else return x;
    }
    if(z <= y) return y;
    if(x <= z) return x;
    return z;
}


double median(double x, double y, double z)
{
    int median;
    
    if(x <= y)
    {
        if(y <= z)
        {
            median = y;
        }
        else if(x <= z)
        {
            median = z;
        }
        else
        {
            median = x;
        }
    }
    else if(z <= y)
    {
        median = y;
    }
    else if(x <= z)
    {
        median = x;
    }
    else
    {
        median = z;
    }

    return median;

}

somewhat long winded, but my prefered style of writing if statements makes it this way, but i digress, it is correct.