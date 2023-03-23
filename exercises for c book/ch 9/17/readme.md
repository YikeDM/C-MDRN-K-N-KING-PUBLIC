Rewrite fact so its no longer recursive

int fact(int n)
{
    int i = 0;

    for(int j = 1; j < n; ++j)
    {
        i += n * j;
    }

    return i;
}