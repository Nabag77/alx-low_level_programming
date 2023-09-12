#include "main.h"

/**
 *  _abs - function that prints the absolute value of an integer
 *
 * @n: the integer
 *
 * Return: return the integer
 */

int _abs(int n)
{
	if (n < 0)
		n = (-1) * n;
	return (n);
}
