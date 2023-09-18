#include "main.h"

/**
 * puts_half - function that prints half of a string
 *
 * @str: string parameter
 */

void puts_half(char *str)
{
	int r;

	for (r = 0; str[r] != '\0'; r++)
		;
	r++;
	for (r /= 2; str[r] != '\0'; r++)
	{
		_putchar(str[r]);
	}
	_putchar('\n')
}
