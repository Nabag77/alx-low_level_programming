#include "main.h"

/**
 * print_rev - function that prints a string, in reverse
 *
 * @s: string parameter
 */

void print_rev(char *s)
{
	int r = 0;

	while (s[r])
		r++;

	while (r--)
	{
		_putchar(s[r]);
	}
	_putchar('\n');
}
