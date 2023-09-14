#include "main.h"

/**
 * print_triangle - function to print a triangle
 *
 * @size: size of the triangle
 */

void print_triangle(int size)
{
	int sz, tr;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (sz = 1; sz <= size; sz++)
		{
			for (tr = sz; tr < size; tr++)
			{
				_putchar(' ');
			}
			for (tr = 1; tr <= sz; tr++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
