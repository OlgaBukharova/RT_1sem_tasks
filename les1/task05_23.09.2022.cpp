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
    int m = 0;

    scanf("%d", &n);

    scan_arr(arr, n);

    scanf("%d", &m);

    buble_sort(arr, n);

    for (int i = n-m; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");

    return 0;
}