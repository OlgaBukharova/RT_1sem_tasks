unsigned long long int factorial(unsigned int n)
{
    if (n == 0)
        return 1;

    unsigned long long int mult = 1;

    for ( ; n > 0; --n)
        mult *= n;
    
    return mult;
}