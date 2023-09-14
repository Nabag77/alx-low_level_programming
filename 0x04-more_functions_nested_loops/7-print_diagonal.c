#include "main.h"

/**
 * print_diagonal - function to print a diagonal line depending on n
 *
 * @n: number of lines to print
 */

void print_diagonal(int n)
{
	int line, sp;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (line = 0; line < n; line++)
		{
			for (sp = 0; sp < n; sp++)
			{
				if (sp == line)
					_putchar('\\');
				else if (sp < line)
					_putchar(' ');
			}
			_putchar('\n');
		}
	}
}
