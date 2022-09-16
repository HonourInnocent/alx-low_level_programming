#include "main.h"
void print_alphabet(void)
int print_alphabet()
{
    char c;
    for (c = 'a'; c <= 'z'; ++c);
    _putchar(c);
    print_alphabet();
    return 0;
    /**print all the letters of the alphabet in lowercase
     */
}

