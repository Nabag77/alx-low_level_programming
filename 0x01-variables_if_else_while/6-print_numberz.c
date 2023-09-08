#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: C prog. that print numbers with base of 10
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int digit = 0;

	while (digit < 10)
	{
		putchar(digit + '0');
		digit = digit + 1;
	}
	putchar('\n');
	return (0);
}
