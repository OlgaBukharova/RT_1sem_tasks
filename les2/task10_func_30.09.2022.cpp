#include <iostream>
using namespace std;

char get_a_letter()
{
    int c = 0;
    do
        c = getchar();
    while (!(((c >= 'a') && (c <= 'z')) || ((c >= 'A') && (c <= 'Z'))));
    
    return c;
}

char unleveling(char c)
{
    if (c >= 'a' && c <= 'z')
    c += 'A' - 'a';
    return c;
}
int main()
{
    for (int i = 0; i < 10; i++)
        cout <<unleveling(get_a_letter());
    cout <<endl;
    return 0;
}
