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
	char up = 'A';

	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}
	while (up <= 'Z')
	{
		putchar(up);
		up++;
	}
	putchar('\n');
	return (0);
}
