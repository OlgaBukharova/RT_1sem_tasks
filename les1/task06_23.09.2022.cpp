#include <stdio.h>

/**
 * @brief Scanning an array
 * 
 * @param arr two-dimentional array of integer
 * @param n1 integer number of strings
 */
void scan_arr(int arr[][2], int brr[][2], int n1)
{
    for (int i = 0; i < n1; i++)
    {
        scanf("%d", &arr[i][1]);
        arr[i][2] = i;
        brr[i][1] = arr[i][1];
    }
}

/**
 * @brief Sorting an array
 * 
 * @param arr array of integer
 * @param size integer size of array
 */
void buble_sort2(int arr[][2], int size)
{
    int tmp = 0;
    for (int i = 0; i < size; i++)
        for (int j = i; j < size; j++)
        {
            if (arr[i][1] >= arr[j][1])
            {
                tmp = arr[i][1];
                arr[i][1] = arr[j][1];
                arr[j][1] = tmp;

                tmp = arr[i][2];
                arr[i][2] = arr[j][2];
                arr[j][2] = tmp;
            }
        }
}

/**
 * @brief Sorting an array
 * 
 * @param arr array of integer
 * @param size integer size of array
 */
void buble_sort(int arr[], int size)
{
    int tmp = 0;
    for (int i = 0; i < size; i++)
        for (int j = i; j < size; j++)
        {
            if (arr[i] > arr[j])
            {
                tmp = arr[i];
                arr[i] = arr[j];
                arr[j] = tmp;
            }
        }
}

int main()
{
    int n = 0;
    int m = 0;
    int arr[1000][2] = {0};
    int brr[1000][2] = {0};
    int crr[1000] = {0};
    
    scanf("%d", &n);
    scan_arr(arr, brr, n);
    scanf("%d", &m);

    buble_sort2(arr, n);

    for (int i = n - m; i < n; i++)
        crr[i - (n - m)] = arr[i][2];

    buble_sort(crr, m);

    for (int i = 0; i < m; i++)
        printf("%d ", brr[crr[i]][1]);

    printf("\n");

    return 0;
}