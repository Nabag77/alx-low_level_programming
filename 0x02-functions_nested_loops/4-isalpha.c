#include "main.h"

/**
 * _isalpha - function to check whether the character is an alphabet
 *
 * @c: character to be checked
 *
 * Return: 1 if letter is lower caes
 *         0 if otherwise
 */

int _isalpha(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else if (c >= 65 && c <= 90)
		return (1);
	return (0);
}
