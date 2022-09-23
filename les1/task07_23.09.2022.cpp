#include <stdio.h>

/**
 * @brief Scanning an array
 * 
 * @param arr two-dimentional array of integer
 * @param n1 integer number of strings
 * @param n2 integer number of columns
 */
void scan_arr(int arr[][1000], int n1, int n2)
{
    for (int i = 0; i < n1; i++)
        for (int j = 0; j < n2; j++)
            scanf("%d", &arr[i][j]);
}

int main()
{
   int arr[1000][1000] = {0};
   int n = 0;
   int m = 0;
   int max = 0;
   int summ = 0;
   int summ_max = 0;

   scanf("%d%d", &n, &m);

   scan_arr(arr, n, m);

    for (int i = 0; i < m; i++)
    {
        summ = 0;
        for (int j = 0; j < n; j++)
            summ += arr[j][i];
        if (summ >= summ_max)
        {
            max = i;
            summ_max = summ;
        }
    }
    
    printf("%d\n", max);

    return 0;
}