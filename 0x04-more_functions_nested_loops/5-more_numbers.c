#include "main.h"

/**
 * more_numbers - function that prints numbers from 0 to 14
 *			10 times
 *
 */

void more_numbers(void)
{
	int line, num;

	for (line = 1; line <= 10; line++)
	{

		for (num = 0; num <= 14; num++)
		{
			if (num >= 10)
				_putchar('1');
			_putchar(num % 10 + '0');	
		}
		_putchar('\n');
	}
}
