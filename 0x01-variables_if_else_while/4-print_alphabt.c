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
	char ch = 'a';

	while (ch <= 'z')
	{
		if (ch == 'e' || ch == 'q')
			ch++;
		putchar(ch);
		ch++;
	}
	putchar('\n');
	return (0);
}
