#include "main.h"

/**
 * leet - function that encodes a string into 1337.
 *
 * @st: string
 *
 * Return: changed string
 */

char *leet(char *st)
{
	int lt1, lt2;
	char s1[] = "aAeEoOtTlL";
	char s2[] = "4433007711";

	for (lt1 = 0; st[lt1] != '\0'; lt1++)
	{
		for (lt2 = 0; lt2 < 10; lt2++)
		{
			if (st[lt1] == s1[lt2])
			{
				st[lt1] = s2[lt2];
			}
		}
	}
	return (st);
}
