char get_a_letter()
{
    int c = 0;
    do
        c = getchar();
    while (!(((c >= 'a') && (c <= 'z')) || ((c >= 'A') && (c <= 'Z'))));
    
    return c;
}