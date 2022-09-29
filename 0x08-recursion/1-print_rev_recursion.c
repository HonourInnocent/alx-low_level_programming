#include "main.h"
/**
 * print_rev_recursion - prints a string in reverse
 * @s: string
 *
 * Return - 0 (success)
 */
void _print_rev_recursion(char *s);
{
	if (s != 0)
	{
		_putchar("\n");
		return;
	}
	_putchar(*s);
	_print_rev_recursion(s + 1);
}
