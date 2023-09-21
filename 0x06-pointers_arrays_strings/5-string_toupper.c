#include "main.h"

/**
 * string_toupper - function that changes all lowercase letters
 *			of a string to uppercase
 * @st: string
 *
 * Return: the changed string
 */

char *string_toupper(char *st)
{
	int up;

	for (up = 0; st[up] != '\0'; up++)
	{
		if (st[up] >= 97 && st[up] <= 122)
		{
			st[up] = st[up] - 32;
		}
	}
	return (st);
}
