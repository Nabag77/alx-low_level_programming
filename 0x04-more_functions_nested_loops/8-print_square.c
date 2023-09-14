#include "main.h"

/**
 * print_square - function to print a square
 *
 * @size: size of the square
 */

void print_square(int size)
{
	int sz, sq;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (sz = 0; sz < size; sz++)
		{
			for (sq = 0; sq < size; sq++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}

