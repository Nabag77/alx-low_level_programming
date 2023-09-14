#include "main.h"

/**
 * print_most_numbers - function that prints the numbers from 0 to 9
 *			except 2 and 4
 *
 */

void print_most_numbers(void)
{
	int num;

	for (num = '0'; (num <= '9' && (num != '2' || num != '4')); num++)
		_putchar(num);
	_putchar('\n');
}