bool is_simple(int n) //needs "#include <math.h>"
{
    for (int i = 2; (i <= sqrt(n)); i++)
        if  (n % i == 0)
            return false;
    
    return true; 
}