#include <stdio.h>

void fill_arr(int* arr, int n)
{ 
    arr[0] = 1;
    arr[1] = 1;
    for (int i = 2; i < n; i++)
        if (arr[i] == 0)
            for (int j = i * i; j < n; j += i)
                arr[j] = 1;
}

bool is_simple(int k, int* arr, int n)
{
    return (arr[k] == 0);
}

int main()
{
    int n = 0;
    scanf("%d", &n);

    int arr[1000] = {0};

    fill_arr(arr, 1000);

    is_simple(n, arr, 1000) ? printf("simple\n") : printf("not simple\n");
    
    return 0;
}