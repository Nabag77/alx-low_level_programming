#include "main.h"

/**
 * _isdigit - function to check whether the input is digit
 *
 * @c: input to be checked
 *
 * Return: 1 if the input is a digit
 *         0 if otherwise
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	return (0);
}
