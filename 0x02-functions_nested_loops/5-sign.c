#include "main.h"

/**
 * print_sign - function to print the sign of the number
 *
 * @n: number to be checked
 *
 * Return: 1 if the number is positive
 *         0 if the number equals 0
 *         -1 if the number is negative
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	if (n == 0)
	{
		_putchar(48);
		return (0);
	}
	if (n > 0)
	{
		_putchar(45);
		return (-1);
	}
}
