#include "main.h"

/**
 * print_array - function that prints n elements of an array of integers
 *
 * @a: string parameter
 * @n: element
 */

void print_array(int *a, int n)
{
	int r;

	for (r = 0; r < n; r++)
	{
		if (r != (n - 1))
			printf("%d, ", a[r]);
		else
			printf("%d", a[r]);
	}
	_putchar('\n');
}
