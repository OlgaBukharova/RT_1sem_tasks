unsigned long long int nonacci(unsigned int n)
{
    if (n <= 7)
        return 0;
    else if (n == 8)
        return 1;
    else
        return nonacci(n - 1) + nonacci(n - 2) + nonacci(n - 3) + nonacci(n - 4) + nonacci(n - 5) + nonacci(n - 6) + nonacci(n - 7) + nonacci(n - 8) + nonacci(n - 9);
}