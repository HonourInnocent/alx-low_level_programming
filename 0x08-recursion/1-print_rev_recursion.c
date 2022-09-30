#include "main.h"
#include <stdio.h>
/**
 * print_rev_recursion:  prints a string in reverse
 * @s: string
 *
 * Return - on success print 1
 */
void _print_rev_recursion(char *s)
{
	if (s != 0)
	{
		printf("\n");
		return;
	}
	_print_rev_recursion(s + 1);
	_putchar(*s);
}
