#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Description: Fizzbuzz test
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int nm;

	for (nm = 1; nm <= 100; nm++)
	{
		if (nm % 3 == 0 && nm % 5 != 0)
		{
			printf(" Fizz");
		}
		else if (nm % 5 == 0 && nm % 3 != 0)
		{
			printf(" Buzz");
		}
		else if (nm % 3 == 0 && nm % 5 == 0)
		{
			printf(" FizzBuzz");
		}
		else if (nm == 1)
		{
			printf("%d", nm);
		}
		else
		{
			printf(" %d", nm);
		}
	}
	printf("\n");

	return (0);
}
