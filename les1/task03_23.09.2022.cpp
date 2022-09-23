#include <stdio.h>

/**
 * @brief Scanning an array
 * 
 * @param arr two-dimentional array of integer
 * @param n1 integer number of strings
 * @param n2 integer number of columns
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
 * @param n1 pointer to integer value - number of strings
 * @param n2 pointer to integer value - number of columns
 */
void transpose_arr(int arr[][10], int *n1, int *n2)
{
    int tmp = 0;

    for (int i = 0; i < *n1; i++)
        for (int j = i + 1; j < *n2; j++)
        {
                tmp = arr[i][j];
                arr[i][j] = arr[j][i];
                arr[j][i] = tmp;
        }
    
    tmp = *n1;
    *n1 = *n2;
    *n2 = tmp;
}

/**
 * @brief Printing an array
 * 
 * @param arr two-dimentional array of integer
 * @param n1 integer number of strings
 * @param n2 integer number of columns
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
    int n1 = 0;
    int n2 = 0;
    
    scanf("%d%d", &n1, &n2);

    scan_arr(arr, n1, n2);
    transpose_arr(arr, &n1, &n2);
    print_arr(arr, n1, n2);
   
    return 0;
}