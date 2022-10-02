unsigned int get_a_hexadecimal()
{
    unsigned int c = 0;
    unsigned int pr = 0;
    
    while ((c = getchar()) != '\n')
    {
        if ((c >= '0') && (c <= '9'))
            pr = pr * 16 + (c - '0');
        else if ((c >= 'A') && (c <= 'F'))
            pr = pr * 16 + ((c - 'A') + 10);
        else 
            return 0;
    }

    return pr;
}