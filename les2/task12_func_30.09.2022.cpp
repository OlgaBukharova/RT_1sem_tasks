unsigned long get_really_any_hexadecimal()
{
    unsigned int c = 0;
    unsigned int pr = 0;

    while (((c = getchar()) != '\n') && (c != ' '))
    {
        if ((c >= '0') && (c <= '9'))
            pr = pr * 16 + (c - '0');
        else if ((c >= 'A') && (c <= 'F'))
            pr = pr * 16 + ((c - 'A') + 10);
        else if ((c >= 'a') && (c <= 'f'))
            pr = pr * 16 + ((c - 'a') + 10);
    }
    return pr;
}