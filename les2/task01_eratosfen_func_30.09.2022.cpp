#include <stdio.h>

bool is_simple(int n)
{
    int arr[1000] = {1}; 

    for (int i = 2; i < n; i++)
    {
        if (arr[i - 2])
        {
            if (n % i == 0)
                return false;
            else 
                for (int j = i; j < n; j += i)
                    arr[j - 2] = 0;
        }
    }
    return true;
}

int main()
{
    int n = 0;
    scanf("%d", &n);

    is_simple(n) ? printf("simple\n") : printf("not simple\n");
    
    return 0;
}