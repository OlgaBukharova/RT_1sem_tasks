bool is_simple(int n)
{
    for (int i = 2; (i <= sqrt(n)); i++)
        if  (n % i == 0)
            return false;
    
    return true; 
}