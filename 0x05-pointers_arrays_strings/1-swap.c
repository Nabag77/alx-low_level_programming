#include "main.h"

/**
 * swap_int - function to swap the value of two integers
 *
 * @a: parameter
 * @b: parameter
 */

void swap_int(int *a, int *b)
{
	int swp;

	swp = *a;
	*a = *b;
	*b = swp;
}
