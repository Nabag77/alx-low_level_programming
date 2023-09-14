#include "main.h"

/**
 * _isupper - function to check whether the letter is upper case
 *
 * @c: letter to be checked
 *
 * Return: 1 if letter is upper caes
 *         0 if otherwise
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	return (0);
}
