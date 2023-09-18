#include "main.h"

/**
 * puts2 - function that prints every other character of a string,
 *		 starting with the first character
 *
 * @str: string parameter
 */

void puts2(char *str)
{
	int r;

	for (r = 0; str[r] != '\0'; ++r)
	{
		if (r % 2 == 0)
			_putchar(str[i]);
	}
	_putchar('\n');
}
