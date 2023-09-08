#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: C prog. that prints numbers of base 16 in lowercase
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int digit = 48;

	while (digit <= 102)
	{
		putchar(digit);
		if (digit == 59)
			digit = digit + 39;
		digit = digit + 1;
	}
	putchar('\n');
	return (0);
}
