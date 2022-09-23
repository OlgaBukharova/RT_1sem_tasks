#include <stdio.h>

/**
 * @brief Scanning an array of integer
 * 
 * @param arr array of integer
 * @param size integer size of array
 */
void scan_arr(int arr[], int size)
{
    for (int i = 0; i < size; i++)
        scanf("%d", &arr[i]);
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
    int arr[1000] = {0};
    int n = 0;
    int start = 0;

    scanf("%d", &n);

    scan_arr(arr, n);

    buble_sort(arr, n);

    for (int i = 0; i < n - 1; i++)
    {
        if ((arr[i] < 0) && (arr[i + 1] > 0))
        start = i+1;
    }

    for (int i = start; i < n; i++)
        printf("%d ", arr[i]);
    
    for (int i = start - 1; i >= 0; i--)
        printf("%d ", arr[i]);
    
    printf("\n");

    return 0;
}