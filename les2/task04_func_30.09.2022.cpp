void binary(unsigned int n) //needs "#include <math.h>"
{
    int len = 0;
    while (pow(2, len) <= n)
        ++len;
    
    while (len)
    {
        printf("%d", n >> len - 1);
        n -= (n >> (len -1)) << (len -1);
        --len;
    }
}