#include <stdio.h>

/**
 * main -Entry point
 *
 * Description: prog that prints multiples of 3 and 5 under 1024
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int x, sum;

	for (x = 0; x < 1024; x++)
	{
		if ((x % 3) == 0 || (x % 5) == 0)
			sum += x;
	}

	printf("%d\n", sum);

	return (0);
}
