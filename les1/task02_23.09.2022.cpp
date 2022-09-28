#include <stdio.h>

/**
 * @brief Scanning an array
 * 
 * @param arr two-dimentional array of integer 
 * @param n integer number of strings/columns
 */
void scan_arr(int arr[][10], int n)
{
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            scanf("%d", &arr[i][j]);
}

/**
 * @brief Transposing an array n*n
 * 
 * @param arr two-dimentional array of integer
 * @param n pointer to integer value - number of strings/columns
 */
void transpose_arr(int arr[][10], int n)
{
    int tmp = 0;

    for (int i = 0; i < n; i++)
        for (int j = i; j < n; j++)
        {
                tmp = arr[i][j];
                arr[i][j] = arr[j][i];
                arr[j][i] = tmp;
        }
}

/**
 * @brief Printing an array
 * 
 * @param arr two-dimentional array of integer
 * @param n1 integer number of strings
 * @param n2 integer number of columns
 */
void print_arr(int arr[][10], int n)
{
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            {
                printf("%d\t", arr[i][j]);

                if (j == n - 1)
                    printf("\n");
            }
}

int main()
{
    int arr[10][10] = {0};
    int n = 0;
    
    scanf("%d", &n);

    scan_arr(arr, n);
    transpose_arr(arr, n);
    print_arr(arr, n);
   
    return 0;
}