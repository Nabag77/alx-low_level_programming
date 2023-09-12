#include "main.h"

/**
 *  print_last_digit - function that prints the last digit of a number
 *
 * @n: the number
 *
 * Return: return the last digit
 */

int print_last_digit(int n)
{
	int ld;

	if (n < 0)
		ld = (-1) * (n % 10);
	else
		ld = (n % 10);

	_putchar(ld + 48);
	return (ld);
}
