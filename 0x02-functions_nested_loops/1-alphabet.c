#include<studio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	char ch='a';
	while (ch<='z')
	{
		print_alphabet("%c", ch);
		ch++;
	}
	return (0);
}
