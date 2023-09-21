#include "main.h"

/**
 * reverse_array - function that reverse an array of integers
 *
 * @a: array
 * @n: number of elements in array
 */

void reverse_array(int *a, int n)
{
	int rv, rv1, rv2;

	for (rv1 = 0, rv2 = (n - 1); rv1 < rv2; rv1++, rv2--)
	{
		rv = a[rv1];
		a[rv1] = a[rv2];
		a[rv2] = rv;
	}

}
