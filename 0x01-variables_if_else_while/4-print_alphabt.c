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

	while (ch <= 'z' && ch != 'q' && ch != 'e')
	{
		putchar(ch);
		ch++;
	}
	putchar('\n');
	return (0);
}
