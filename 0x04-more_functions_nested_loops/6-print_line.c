#include "main.h"

/**
 * print_line - function to print a straight line depending on n
 *
 * @n: number of straight lines to pe printed
 */

void print_line(int n)
{
	int lines;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (lines = 1; lines <= n; lines++)
			_putchar('_');
		_putchar('\n');
	}
}
