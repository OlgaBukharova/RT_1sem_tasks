#include <stdio.h>

int main()
{
    double n = 0;
    int arr[1000] = {0};
    double summ = 0;

    scanf("%lf", &n);

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        summ += arr[i];
    }

    for (int i = 0; i < n; i++)
    {
        if (arr[i] >= summ / n)
            printf("%d ", arr[i]);
    }

    printf("\n");
    
    return 0;
}