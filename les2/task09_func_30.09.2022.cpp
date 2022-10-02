char leveling(char c)
{
    if ((c >= 'A') && (c <= 'Z'))
        return c + ('a' - 'A');
    else 
        return c;
}