#include "main.h"

/**
 * print_alphabet_x10 - prints the alphabets in lower case 10 times
 *
 */

void print_alphabet_x10(void)
{
	int line, ch;

	for (line = 1; line <= 10; line++)
	{

		for (ch = 'a'; ch <= 'z'; ch++)
			_putchar(ch);
		_putchar('\n');
	}
}
