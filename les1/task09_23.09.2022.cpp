#include <stdio.h>

/**
 * @brief Scanning an array
 * 
 * @param arr two-dimentional array of integer
 * @param n1 integer number of strings
 * @param n2 integer number of columns
 */
void scan_arr(int arr[][2], int n1)
{
    for (int i = 0; i < n1; i++)
    {
        scanf("%d", &arr[i][1]);
        scanf("%d", &arr[i][2]);
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
            if (arr[i] > arr[j])
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

int main()
{
    int arr[1000][2] = {0};
    int n = 0;
    int s = 0;
    int n_sweets = 0;
    int n_box = 0;
    int price = 0;

    scanf("%d", &n);
    scan_arr(arr, n);
    scanf("%d", &s);

    buble_sort2(arr, n);

    while (price < s)
    {
        n_sweets += arr[n_box][2];
        price += arr[n_box][1];
        n_box += 1;
    }

    printf("%d %d\n", n_box, n_sweets);

    return 0;
}