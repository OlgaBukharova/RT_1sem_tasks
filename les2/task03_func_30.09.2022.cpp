unsigned int sum_of_numbers(unsigned int n)
{
    unsigned int summ = 0;
    n *= 10;

    while (n /= 10)
    {
        summ += n % 10;
    }
    
    return summ;
}