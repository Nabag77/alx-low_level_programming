#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: C prog. that prints alphabets in both lower and upper cases
 *
 * Return: Always 0 (succes)
 */

int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}
	char CH = 'A';

	while (ch <= 'Z')
	{
		putchar(CH);
		CH++;
	}
	putchar('\n')
	return (0);
}
