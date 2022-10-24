#include <stdio.h>
void rotateC(int * x1, int * y1, int * x2, int * y2)
{
    int l = 0;
    int h = 0;
    int x = 0;
    int y = 0;

    l = *x2 - *x1;
    h = *y1 - *y2;
    x = (*x1 + *x2) / 2;
    y = (*y1 + *y2) / 2;

    *x1 = x - h / 2;
    *x2 = x + h / 2;
    *y1 = y + l / 2;
    *y2 = y - l / 2;
}

int main()
{
    int x1;
    int x2;
    int y1;
    int y2;

    scanf("%d%d%d%d", &x1, &y1, &x2, &y2);

    rotateC(&x1, &y1, &x2, &y2);

    printf("%d %d %d %d\n", x1, y1, x2, y2);

    return 0;
}