void printLocalTime(int hMos, int h, int hplane)
{
    int date = 5;
    int local = 0;

    local = ((hMos - h) + hplane) % 24;

    date += ((hMos - h) + hplane) / 24;

    printf("%d %d\n", local, date);
}