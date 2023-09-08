#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: C prog. that prints the alphabet in lower case
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int digit = 0;

	while (digit <= 9)
	{
		putchar(digit + 48);
		if (digit != 9)
		{
			putchar(',');
			putchar(' ');
		}
		digit = digit + 1;
	}
	putchar('\n');
	return (0);
}
