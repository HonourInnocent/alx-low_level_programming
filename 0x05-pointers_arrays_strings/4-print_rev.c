#include "main.h"

/**
 * print_rev - reverse the contents of an array of integers
 * @a: array of integers
 * @n: number of elements in array
 */

void print_rev(char *s);
int main(void)
{
	char *str;

    str = "I do not fear computers. I fear the lack of them - Isaac Asimov";
    print_rev(str);
    return (0);
}
