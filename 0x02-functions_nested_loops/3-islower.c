#include "main.h"

/**
 * _islower - function to check whether the letter is lower case
 *
 * @c: letter to be checked
 *
 * Return: 1 if letter is lower caes
 *         0 if otherwise
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	return (0);
}
