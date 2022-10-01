unsigned long long int fibonacci(unsigned int n)
{
    int f1 = 1;
    int f2 = 1;
    int tmp = 0;

    if ((n == 1) || (n == 2))
        return 1;
    else
    {
        int i = 3;
        while (i <= n)
        {
            tmp = f1;
            f1 = f2;
            f2 = tmp + f1;
            ++i; 
        }
        return f2;
    }
}