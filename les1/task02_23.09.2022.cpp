#include <stdio.h>

/**
 * @brief Scanning an array
 * 
 * @param arr two-dimentional array of integer
 * @param n1 number of strings
 * @param n2 number of columns
 */
void scan_arr(int arr[][10], int n1, int n2)
{
    for (int i = 0; i < n1; i++)
        for (int j = 0; j < n2; j++)
            scanf("%d", &arr[i][j]);
}

/**
 * @brief Transposing an array 
 * 
 * @param arr two-dimentional array of integer
 * @param n1 number of strings
 * @param n2 number of columns
 */
void transpose_arr(int arr[][10], int n1, int n2)
{
    int tmp = 0;

    for (int i = 0; i < n1; i++)
        for (int j = i + 1; j < n2; j++)
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
 * @param n1 number of strings
 * @param n2 number of columns
 */
void print_arr(int arr[][10], int n1, int n2)
{
    for (int i = 0; i < n1; i++)
        for (int j = 0; j < n2; j++)
            {
                printf("%d\t", arr[i][j]);

                if (j == n2 - 1)
                    printf("\n");
            }
}

int main()
{
    int arr[10][10] = {0};
    int n = 0;
    
    scanf("%d", &n);

    scan_arr(arr, n, n);
    transpose_arr(arr, n, n);
    print_arr(arr, n, n);
   
    return 0;
}